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
/* BINDTOOL_HEADER_FILE(fft_channelizer.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(003aa5a39024314963ef3aaf627a87d2)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <iridium/fft_channelizer.h>
// pydoc.h is automatically generated in the build directory
#include <fft_channelizer_pydoc.h>

void bind_fft_channelizer(py::module& m)
{

    using fft_channelizer    = gr::iridium::fft_channelizer;


    py::class_<fft_channelizer, gr::sync_decimator,
        std::shared_ptr<fft_channelizer>>(m, "fft_channelizer", D(fft_channelizer))

        .def(py::init(&fft_channelizer::make),
           D(fft_channelizer,make)
        )
        



        ;




}








