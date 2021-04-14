#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# Copyright 2020 Free Software Foundation, Inc.
#
# This is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# This software is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this software; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.
#


import numpy
from gnuradio import gr
import time
from . import gr_iridium

class iridium_frame_printer(gr.sync_block):
    """
    docstring for block iridium_frame_printer
    """
    def __init__(self, file_info=None):
        gr.sync_block.__init__(self,
            name="iridium_frame_printer",
            in_sig=None,
            out_sig=None)

        self._file_info = file_info
        self._t0 = 0

        self.message_port_register_in(gr.pmt.intern('pdus'))
        self.set_msg_handler(gr.pmt.intern('pdus'), self.handle_msg)
        # hack: hijack system message port
        self.set_msg_handler(gr.pmt.intern('system'), self.handle_msg_sys)

    def handle_msg_sys(self, msg_pmt):
        # ignore system message(s)
        meta = gr.pmt.to_python(gr.pmt.car(msg_pmt))

    def handle_msg(self, msg_pmt):
        if msg_pmt == gr.pmt.PMT_EOF:
            # pass EOF to (original) system handler
            self.system_handler(gr.pmt.cons(gr.pmt.intern('done'),gr.pmt.to_pmt(1)))
            return
        meta = gr.pmt.to_python(gr.pmt.car(msg_pmt))
        msg = gr.pmt.cdr(msg_pmt)
        bits = gr.pmt.u8vector_elements(msg)
        timestamp = meta['timestamp']

        if self._file_info is None:
            self._t0 = (timestamp // 1e9) * 1e9
            self._file_info = "i-%d-t1" % (self._t0 // 1e9)

        freq = meta['center_frequency']
        id = meta['id']
        confidence = meta['confidence']
        level = meta['level']
        noise = meta['noise']
        magnitude = meta['magnitude']
        n_symbols = meta['n_symbols']
        data = ''.join([str(x) for x in bits])
        print("RAW: %s %012.4f %010d N:%05.2f%+06.2f I:%011d %3d%% %.5f %3d %s"%(self._file_info, (timestamp-self._t0)/1e6,
            freq, magnitude, noise, id, confidence, level, (n_symbols - gr_iridium.UW_LENGTH), data))

    def work(self, input_items, output_items):
        return len(input_items[0])
