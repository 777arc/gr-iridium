/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(iridium_qpsk_demod.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(dbee200c36d7f59945ba949a95432db2)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <iridium/iridium_qpsk_demod.h>
// pydoc.h is automatically generated in the build directory
#include <iridium_qpsk_demod_pydoc.h>

void bind_iridium_qpsk_demod(py::module& m)
{

    using iridium_qpsk_demod    = ::gr::iridium::iridium_qpsk_demod;


    py::class_<iridium_qpsk_demod, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<iridium_qpsk_demod>>(m, "iridium_qpsk_demod", D(iridium_qpsk_demod))

        .def(py::init(&iridium_qpsk_demod::make),
           py::arg("n_channels"),
           D(iridium_qpsk_demod,make)
        )
        




        
        .def("get_n_handled_bursts",&iridium_qpsk_demod::get_n_handled_bursts,       
            D(iridium_qpsk_demod,get_n_handled_bursts)
        )


        
        .def("get_n_access_ok_bursts",&iridium_qpsk_demod::get_n_access_ok_bursts,       
            D(iridium_qpsk_demod,get_n_access_ok_bursts)
        )


        
        .def("get_n_access_ok_sub_bursts",&iridium_qpsk_demod::get_n_access_ok_sub_bursts,       
            D(iridium_qpsk_demod,get_n_access_ok_sub_bursts)
        )

        ;




}








