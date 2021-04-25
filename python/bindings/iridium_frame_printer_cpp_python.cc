/*
 * Copyright 2021 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(iridium_frame_printer_cpp.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(84863dcceef9902aad0c3d53c9bf62e2)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <iridium/iridium_frame_printer_cpp.h>
// pydoc.h is automatically generated in the build directory
#include <iridium_frame_printer_cpp_pydoc.h>

void bind_iridium_frame_printer_cpp(py::module& m)
{

    using iridium_frame_printer_cpp    = gr::iridium::iridium_frame_printer_cpp;


    py::class_<iridium_frame_printer_cpp, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<iridium_frame_printer_cpp>>(m, "iridium_frame_printer_cpp", D(iridium_frame_printer_cpp))

        .def(py::init(&iridium_frame_printer_cpp::make),
           D(iridium_frame_printer_cpp,make)
        )
        



        ;




}








