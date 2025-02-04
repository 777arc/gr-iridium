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
/* BINDTOOL_HEADER_FILE(pdu_round_robin.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(2ffd0d343693ddbdb9624fad9d665ca5)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <iridium/pdu_round_robin.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_round_robin_pydoc.h>

void bind_pdu_round_robin(py::module& m)
{

    using pdu_round_robin    = ::gr::iridium::pdu_round_robin;


    py::class_<pdu_round_robin, gr::block, gr::basic_block,
        std::shared_ptr<pdu_round_robin>>(m, "pdu_round_robin", D(pdu_round_robin))

        .def(py::init(&pdu_round_robin::make),
           py::arg("output_count"),
           D(pdu_round_robin,make)
        )
        



        ;




}








