// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _product_dense_ap_fixed_ap_fixed_ap_fixed_s_HH_
#define _product_dense_ap_fixed_ap_fixed_ap_fixed_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_mul_mul_16s_16s_18_1_1.h"

namespace ap_rtl {

struct product_dense_ap_fixed_ap_fixed_ap_fixed_s : public sc_module {
    // Port declarations 4
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > a_V;
    sc_in< sc_lv<16> > w_V;
    sc_out< sc_lv<16> > ap_return;


    // Module declarations
    product_dense_ap_fixed_ap_fixed_ap_fixed_s(sc_module_name name);
    SC_HAS_PROCESS(product_dense_ap_fixed_ap_fixed_ap_fixed_s);

    ~product_dense_ap_fixed_ap_fixed_ap_fixed_s();

    sc_trace_file* mVcdFile;

    myproject_mul_mul_16s_16s_18_1_1<1,1,16,16,18>* myproject_mul_mul_16s_16s_18_1_1_U520;
    sc_signal< sc_lv<18> > r_V_fu_41_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return();
};

}

using namespace ap_rtl;

#endif