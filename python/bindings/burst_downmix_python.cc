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
/* BINDTOOL_HEADER_FILE(burst_downmix.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(8dbc8a607bd981f69f0c1a92cf5859ff)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <iridium/burst_downmix.h>
// pydoc.h is automatically generated in the build directory
#include <burst_downmix_pydoc.h>

void bind_burst_downmix(py::module& m)
{

    using burst_downmix    = ::gr::iridium::burst_downmix;


    py::class_<burst_downmix, gr::block, gr::basic_block,
        std::shared_ptr<burst_downmix>>(m, "burst_downmix", D(burst_downmix))

        .def(py::init(&burst_downmix::make),
           py::arg("output_sample_rate"),
           py::arg("search_depth"),
           py::arg("hard_max_queue_len"),
           py::arg("input_taps"),
           py::arg("start_finder_taps"),
           py::arg("handle_multiple_frames_per_burst"),
           D(burst_downmix,make)
        )
        




        
        .def("get_n_dropped_bursts",&burst_downmix::get_n_dropped_bursts,       
            D(burst_downmix,get_n_dropped_bursts)
        )


        
        .def("get_input_queue_size",&burst_downmix::get_input_queue_size,       
            D(burst_downmix,get_input_queue_size)
        )


        
        .def("debug_id",&burst_downmix::debug_id,       
            py::arg("id"),
            D(burst_downmix,debug_id)
        )

        ;




}








