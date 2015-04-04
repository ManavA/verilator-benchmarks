// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See m68.h for the primary calling header

#include "m68.h"               // For This
#include "m68__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(m68::__Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[8],0,0);
VL_ST_SIG8(m68::__Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[8],1,0);
VL_ST_SIG8(m68::__Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[8],0,0);
VL_ST_SIG8(m68::__Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[8],1,0);

//--------------------

VL_CTOR_IMP(m68) {
    m68__Syms* __restrict vlSymsp = __VlSymsp = new m68__Syms(this, name());
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    arbclk_i = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(32);
    v__DOT__p_dat_i = VL_RAND_RESET_I(32);
    v__DOT__m_dat_i = VL_RAND_RESET_I(32);
    v__DOT__dat_i = VL_RAND_RESET_I(32);
    v__DOT__rts = VL_RAND_RESET_I(2);
    v__DOT__tx = VL_RAND_RESET_I(2);
    v__DOT__we = VL_RAND_RESET_I(1);
    v__DOT__unused_rst_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__m_add_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__m_dat_i = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__a_dat_i = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__b_dat_i = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__a_cs_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__b_cs_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__a_we_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__b_we_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT____Vcellout__uart0__rts_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT____Vcellout__uart0__tx_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT____Vcellout__uart1__rts_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT____Vcellout__uart1__tx_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__p_add_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__m_add_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__m_we_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__m_dat_i = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__m_dat_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__p_dat_i = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__f_op_o = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__d_alu_o = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__d_src_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__d_dst_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__f2d_vld = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__f2d_rdy = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__d_skip_o = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__d_siz_o = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__d_imm_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__a_skip_o = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o = VL_RAND_RESET_I(4);
    v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o = VL_RAND_RESET_I(4);
    v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o = VL_RAND_RESET_I(4);
    v__DOT__dut0__DOT__cpu0__DOT__a_we_o = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__e_pc_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__d_alu_pc_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__r_rs_dat_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__e_res_o = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__e_alu_o = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__clk4_i = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__e_siz_o = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__c_siz_o = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__rdy = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__stall = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpa = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpb = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpc = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpd = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__s_dat_i = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__alu = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__x = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move = VL_RAND_RESET_I(5);
    v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_dat = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_add = VL_RAND_RESET_I(4);
    v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__we = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op = VL_RAND_RESET_I(16);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = VL_RAND_RESET_I(32);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = VL_RAND_RESET_I(6);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__brch = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__dout = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart0__DOT__sio_ce = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sio_ce_x4 = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__nrst = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__brg0 = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart0__DOT__brg1 = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart0__DOT__we = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__we_dat = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__re_dat = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txd_p = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load_e = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg = VL_RAND_RESET_I(10);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt = VL_RAND_RESET_I(4);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_s = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt = VL_RAND_RESET_I(4);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_go = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr = VL_RAND_RESET_I(10);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_we = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxf_full = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txf_empty_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__change = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r1 = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r2 = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_state = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__gb = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__gb = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps_clr = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_clr = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_t = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__dout = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart1__DOT__sio_ce = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sio_ce_x4 = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__brg0 = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart1__DOT__brg1 = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart1__DOT__we = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__we_dat = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__re_dat = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txd_p = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load_e = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg = VL_RAND_RESET_I(10);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt = VL_RAND_RESET_I(4);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_s = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt = VL_RAND_RESET_I(4);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_go = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr = VL_RAND_RESET_I(10);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_we = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxf_full = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txf_empty_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__change = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r1 = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r2 = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_state = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__gb = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__gb = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps_clr = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt = VL_RAND_RESET_I(8);
    v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_clr = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt = VL_RAND_RESET_I(2);
    v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_r = VL_RAND_RESET_I(1);
    v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_t = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<10241; ++__Vi0) {
	    v__DOT__prog0__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<10241; ++__Vi0) {
	    v__DOT__data0__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__data0__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    __Vtableidx1 = VL_RAND_RESET_I(3);
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[0] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[1] = 1U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[2] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[3] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[4] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[5] = 1U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[6] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[7] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[0] = 1U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[1] = 2U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[2] = 3U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[3] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[4] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[5] = 3U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[6] = 0U;
    __Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[7] = 0U;
    __Vtableidx2 = VL_RAND_RESET_I(3);
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[0] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[1] = 1U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[2] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[3] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[4] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[5] = 1U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[6] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[7] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[0] = 1U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[1] = 2U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[2] = 3U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[3] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[4] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[5] = 3U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[6] = 0U;
    __Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[7] = 0U;
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o = VL_RAND_RESET_I(32);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o = VL_RAND_RESET_I(32);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o = VL_RAND_RESET_I(32);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o = VL_RAND_RESET_I(32);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_skip_o = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt = VL_RAND_RESET_I(8);
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt = VL_RAND_RESET_I(8);
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp = VL_RAND_RESET_I(2);
    __VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst = VL_RAND_RESET_I(1);
    __Vclklast__TOP__rst = VL_RAND_RESET_I(1);
    __Vclklast__TOP__arbclk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst = VL_RAND_RESET_I(1);
}

void m68::__Vconfigure(m68__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

m68::~m68() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void m68::eval() {
    m68__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate m68::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void m68::_eval_initial_loop(m68__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void m68::_initial__TOP__1(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_initial__TOP__1\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../bench/k68_testrom.v:60
    vlTOPp->v__DOT__prog0__DOT__mem[0U] = 0x2000060U;
    vlTOPp->v__DOT__prog0__DOT__mem[1U] = 0x807c2eU;
    vlTOPp->v__DOT__prog0__DOT__mem[2U] = 0xbc2e0001U;
    vlTOPp->v__DOT__prog0__DOT__mem[3U] = 0x20000U;
    vlTOPp->v__DOT__prog0__DOT__mem[4U] = 0x3c2fU;
    vlTOPp->v__DOT__prog0__DOT__mem[5U] = 0xfc2e0003U;
    vlTOPp->v__DOT__prog0__DOT__mem[6U] = 0x40000U;
    vlTOPp->v__DOT__prog0__DOT__mem[7U] = 0xbc2eU;
    vlTOPp->v__DOT__prog0__DOT__mem[8U] = 0x610005U;
    vlTOPp->v__DOT__prog0__DOT__mem[9U] = 0x610a00U;
    vlTOPp->v__DOT__prog0__DOT__mem[0xaU] = 0x60a400U;
    vlTOPp->v__DOT__prog0__DOT__mem[0xbU] = 0x7c20d200U;
    vlTOPp->v__DOT__prog0__DOT__mem[0xcU] = 0x20001ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0xdU] = 0x100bc10U;
    vlTOPp->v__DOT__prog0__DOT__mem[0xeU] = 0x1ff7c20U;
    vlTOPp->v__DOT__prog0__DOT__mem[0xfU] = 0xbc100300U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x10U] = 0x7c200100U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x11U] = 0x20002ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x12U] = 0x100bc10U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x13U] = 0x2ff7c20U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x14U] = 0xbc100300U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x15U] = 0x754e0100U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x16U] = 0x1ff7c20U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x17U] = 0x10100100U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x18U] = 0x1000002U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x19U] = 0x61754eU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x1aU] = 0x66f0ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x1bU] = 0x7c20faffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x1cU] = 0x1ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x1dU] = 0x754e1012U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x1eU] = 0x1ff7c20U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x1fU] = 0x10100100U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x20U] = 0x2000002U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x21U] = 0xf8ff0066U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x22U] = 0x1ff7c20U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x23U] = 0x81100000U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x24U] = 0x7c20754eU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x25U] = 0x10002ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x26U] = 0x21010U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x27U] = 0x754e0100U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x28U] = 0xf0ff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x29U] = 0xfaff0066U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x2aU] = 0x2ff7c20U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x2bU] = 0x10120000U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x2cU] = 0x7c20754eU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x2dU] = 0x10002ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x2eU] = 0x21010U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x2fU] = 0x660200U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x30U] = 0x7c20f8ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x31U] = 0x2ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x32U] = 0x754e8110U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x33U] = 0x4b003c12U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x34U] = 0xa6ff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x35U] = 0xdcff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x36U] = 0x36003c12U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x37U] = 0x9aff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x38U] = 0xd0ff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x39U] = 0x68003c12U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x3aU] = 0x8eff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x3bU] = 0xc4ff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x3cU] = 0xd003c12U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x3dU] = 0x82ff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x3eU] = 0xb8ff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x3fU] = 0x61754eU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x40U] = 0x6658ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x41U] = 0x610600U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x42U] = 0x611200U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x43U] = 0x6686ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x44U] = 0x61eeffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x45U] = 0x601400U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x46U] = 0x61e6ffU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x47U] = 0x614affU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x48U] = 0x611800U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x49U] = 0x754e8effU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x4aU] = 0x76ff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x4bU] = 0x8000061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x4cU] = 0x46ff0061U;
    vlTOPp->v__DOT__prog0__DOT__mem[0x4dU] = 0x754e754eU;
    vlTOPp->v__DOT__prog0__DOT__mem[0x4eU] = 0x754eU;
}

void m68::_sequent__TOP__2(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__2\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt,3,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt,3,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0,1,0);
    VL_SIG8(__Vdlyvval__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0,1,0);
    VL_SIG8(__Vdlyvval__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0,0,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps,7,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt,3,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt,3,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0,1,0);
    VL_SIG8(__Vdlyvval__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0,1,0);
    VL_SIG8(__Vdlyvval__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0,0,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps,7,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt,1,0);
    VL_SIG16(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg,9,0);
    VL_SIG16(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr,9,0);
    VL_SIG16(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg,9,0);
    VL_SIG16(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr,9,0);
    // Body
    __Vdlyvset__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0 = 0U;
    __Vdlyvset__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0 = 0U;
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg;
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg;
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt;
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt;
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr;
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr;
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt;
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt;
    __Vdlyvset__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0 = 0U;
    __Vdlyvset__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0 = 0U;
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps;
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt;
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt;
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt;
    // ALWAYS at ../rtl/sasc_top.v:240
    vlTOPp->v__DOT__dut0__DOT____Vcellout__uart0__rts_o 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxf_full;
    // ALWAYS at ../rtl/sasc_top.v:240
    vlTOPp->v__DOT__dut0__DOT____Vcellout__uart1__rts_o 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxf_full;
    // ALWAYS at ../rtl/sasc_top.v:232
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid_r 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid;
    // ALWAYS at ../rtl/sasc_top.v:232
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid_r 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid;
    // ALWAYS at ../rtl/sasc_fifo4.v:119
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_we) {
	__Vdlyvval__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0 
	    = (0xffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr) 
			>> 2U));
	__Vdlyvset__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0 
	    = vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:119
    if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_we) {
	__Vdlyvval__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0 
	    = (0xffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr) 
			>> 2U));
	__Vdlyvset__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0 
	    = vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp;
    }
    // ALWAYS at ../rtl/sasc_top.v:179
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load_e) {
	__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg 
	    = (0x200U | ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txd_p) 
			 << 1U));
    } else {
	if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en) 
	     & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce))) {
	    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg 
		= (0x200U | (0x1ffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg) 
				       >> 1U)));
	}
    }
    // ALWAYS at ../rtl/sasc_top.v:179
    if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load_e) {
	__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg 
	    = (0x200U | ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txd_p) 
			 << 1U));
    } else {
	if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en) 
	     & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce))) {
	    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg 
		= (0x200U | (0x1ffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg) 
				       >> 1U)));
	}
    }
    // ALWAYS at ../rtl/sasc_top.v:191
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load_e) {
	    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt = 0U;
	} else {
	    if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en) 
		 & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce))) {
		__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt)));
	    }
	}
    } else {
	__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt = 9U;
    }
    // ALWAYS at ../rtl/sasc_top.v:191
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load_e) {
	    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt = 0U;
	} else {
	    if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en) 
		 & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce))) {
		__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt)));
	    }
	}
    } else {
	__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt = 9U;
    }
    // ALWAYS at ../rtl/sasc_top.v:237
    if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_go) 
	 & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce))) {
	__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr 
	    = (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_s) 
		<< 9U) | (0x1ffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr) 
				    >> 1U)));
    }
    // ALWAYS at ../rtl/sasc_top.v:237
    if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_go) 
	 & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce))) {
	__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr 
	    = (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_s) 
		<< 9U) | (0x1ffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr) 
				    >> 1U)));
    }
    // ALWAYS at ../rtl/sasc_top.v:219
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_go)) 
	     & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_r) 
		& (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_s))))) {
	    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt = 0U;
	} else {
	    if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_go) 
		 & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce))) {
		__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt)));
	    }
	}
    } else {
	__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt = 0xaU;
    }
    // ALWAYS at ../rtl/sasc_top.v:219
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_go)) 
	     & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_r) 
		& (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_s))))) {
	    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt = 0U;
	} else {
	    if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_go) 
		 & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce))) {
		__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt 
		    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt)));
	    }
	}
    } else {
	__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt = 0xaU;
    }
    // ALWAYS at ../rtl/sasc_top.v:184
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce) {
	    vlTOPp->v__DOT__dut0__DOT____Vcellout__uart0__tx_o 
		= (1U & ((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en) 
			     | (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en_r))) 
			 | (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg)));
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT____Vcellout__uart0__tx_o = 1U;
    }
    // ALWAYS at ../rtl/sasc_top.v:184
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce) {
	    vlTOPp->v__DOT__dut0__DOT____Vcellout__uart1__tx_o 
		= (1U & ((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en) 
			     | (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en_r))) 
			 | (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg)));
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT____Vcellout__uart1__tx_o = 1U;
    }
    // ALWAYS at ../rtl/sasc_top.v:171
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txf_empty_r)) 
		  & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en))) 
		 & (~ (IData)(vlTOPp->v__DOT__rts))));
    // ALWAYS at ../rtl/sasc_top.v:171
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txf_empty_r)) 
		  & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en))) 
		 & (~ ((IData)(vlTOPp->v__DOT__rts) 
		       >> 1U))));
    // ALWAYS at ../rtl/sasc_fifo4.v:119
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we_dat) {
	__Vdlyvval__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0 
	    = (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o);
	__Vdlyvset__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0 
	    = vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:119
    if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we_dat) {
	__Vdlyvval__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0 
	    = (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o);
	__Vdlyvset__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0 
	    = vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp;
    }
    // ALWAYS at ../rtl/sasc_brg.v:119
    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps 
	= (0xffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst)
		     ? ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps_clr)
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps)))
		     : 0U));
    // ALWAYS at ../rtl/sasc_brg.v:119
    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps 
	= (0xffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst)
		     ? ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps_clr)
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps)))
		     : 0U));
    // ALWAYS at ../rtl/sasc_brg.v:130
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_clr) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt = 0U;
	} else {
	    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps_clr) {
		vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt 
		    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt)));
	    }
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt = 0U;
    }
    // ALWAYS at ../rtl/sasc_brg.v:130
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_clr) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt = 0U;
	} else {
	    if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps_clr) {
		vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt 
		    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt)));
	    }
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt = 0U;
    }
    // ALWAYS at ../rtl/sasc_brg.v:151
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_r)) 
	     & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_clr))) {
	    __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt)));
	}
    } else {
	__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt = 0U;
    }
    // ALWAYS at ../rtl/sasc_brg.v:151
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_r)) 
	     & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_clr))) {
	    __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt)));
	}
    } else {
	__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt = 0U;
    }
    // ALWAYS at ../rtl/sasc_top.v:257
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_r) 
	     != (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_s))) {
	    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__change = 1U;
	} else {
	    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce_x4) {
		vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__change = 0U;
	    }
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__change = 0U;
    }
    // ALWAYS at ../rtl/sasc_top.v:257
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_r) 
	     != (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_s))) {
	    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__change = 1U;
	} else {
	    if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce_x4) {
		vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__change = 0U;
	    }
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__change = 0U;
    }
    // ALWAYSPOST at ../rtl/sasc_fifo4.v:120
    if (__Vdlyvset__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0) {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem[(IData)(__Vdlyvdim0__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0)] 
	    = __Vdlyvval__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0;
    }
    // ALWAYSPOST at ../rtl/sasc_fifo4.v:120
    if (__Vdlyvset__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0) {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem[(IData)(__Vdlyvdim0__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0)] 
	    = __Vdlyvval__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem__v0;
    }
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr 
	= __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr 
	= __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr;
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg 
	= __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg 
	= __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg;
    // ALWAYSPOST at ../rtl/sasc_fifo4.v:120
    if (__Vdlyvset__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0) {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem[(IData)(__Vdlyvdim0__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0)] 
	    = __Vdlyvval__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0;
    }
    // ALWAYSPOST at ../rtl/sasc_fifo4.v:120
    if (__Vdlyvset__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0) {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem[(IData)(__Vdlyvdim0__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0)] 
	    = __Vdlyvval__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem__v0;
    }
    vlTOPp->v__DOT__rts = ((2U & (IData)(vlTOPp->v__DOT__rts)) 
			   | (IData)(vlTOPp->v__DOT__dut0__DOT____Vcellout__uart0__rts_o));
    vlTOPp->v__DOT__rts = ((1U & (IData)(vlTOPp->v__DOT__rts)) 
			   | ((IData)(vlTOPp->v__DOT__dut0__DOT____Vcellout__uart1__rts_o) 
			      << 1U));
    // ALWAYS at ../rtl/sasc_top.v:229
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid 
	= (9U == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt));
    // ALWAYS at ../rtl/sasc_top.v:229
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid 
	= (9U == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt));
    // ALWAYS at ../rtl/sasc_top.v:226
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_go 
	= (0xaU != (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt));
    // ALWAYS at ../rtl/sasc_top.v:299
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r1) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r2)));
    // ALWAYS at ../rtl/sasc_top.v:226
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_go 
	= (0xaU != (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt));
    // ALWAYS at ../rtl/sasc_top.v:299
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r1) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r2)));
    // ALWAYS at ../rtl/sasc_top.v:201
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce) {
	    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en_r 
		= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en;
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en_r = 0U;
    }
    // ALWAYS at ../rtl/sasc_top.v:201
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce) {
	    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en_r 
		= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en;
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en_r = 0U;
    }
    // ALWAYS at ../rtl/sasc_top.v:166
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce) {
	    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txf_empty_r 
		= (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp) 
		    == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)) 
		   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__gb)));
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txf_empty_r = 1U;
    }
    // ALWAYS at ../rtl/sasc_top.v:166
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce) {
	    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txf_empty_r 
		= (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp) 
		    == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)) 
		   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__gb)));
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txf_empty_r = 1U;
    }
    // ALWAYS at ../rtl/sasc_brg.v:125
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps_clr 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps) 
	   == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__brg0));
    // ALWAYS at ../rtl/sasc_brg.v:125
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps_clr 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps) 
	   == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__brg0));
    // ALWAYS at ../rtl/sasc_top.v:214
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_r 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_s;
    // ALWAYS at ../rtl/sasc_top.v:214
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_r 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_s;
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt 
	= __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt 
	= __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt;
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps 
	= __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps 
	= __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps;
    // ALWAYS at ../rtl/sasc_top.v:296
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r2 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r1;
    // ALWAYS at ../rtl/sasc_top.v:296
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r2 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r1;
    // ALWAYS at ../rtl/sasc_top.v:198
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en 
	= (9U != (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt));
    // ALWAYS at ../rtl/sasc_top.v:198
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en 
	= (9U != (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt));
    // ALWAYS at ../rtl/sasc_brg.v:159
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce = 
	((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_r)) 
	 & (0U == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt)));
    // ALWAYS at ../rtl/sasc_brg.v:159
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce = 
	((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_r)) 
	 & (0U == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt)));
    // ALWAYS at ../rtl/sasc_top.v:211
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_s 
	= (1U & (IData)(vlTOPp->v__DOT__tx));
    // ALWAYS at ../rtl/sasc_top.v:211
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_s 
	= (1U & ((IData)(vlTOPp->v__DOT__tx) >> 1U));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt 
	= __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt 
	= __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt;
    vlTOPp->v__DOT__tx = ((2U & (IData)(vlTOPp->v__DOT__tx)) 
			  | (IData)(vlTOPp->v__DOT__dut0__DOT____Vcellout__uart0__tx_o));
    vlTOPp->v__DOT__tx = ((1U & (IData)(vlTOPp->v__DOT__tx)) 
			  | ((IData)(vlTOPp->v__DOT__dut0__DOT____Vcellout__uart1__tx_o) 
			     << 1U));
    // ALWAYS at ../rtl/sasc_top.v:293
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r1 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d;
    // ALWAYS at ../rtl/sasc_top.v:293
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r1 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d;
    // ALWAYS at ../rtl/sasc_brg.v:156
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_r 
	= (0U == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt));
    // ALWAYS at ../rtl/sasc_brg.v:156
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_r 
	= (0U == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt 
	= __Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt 
	= __Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt;
}

void m68::_sequent__TOP__3(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__3\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt,1,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0,3,0);
    VL_SIG8(__Vdlyvset__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0,3,0);
    VL_SIG8(__Vdlyvset__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0,0,0);
    //char	__VpadToAlign77[3];
    VL_SIG(__Vdlyvval__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0,31,0);
    VL_SIG(__Vdlyvval__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0 = 0U;
    __Vdlyvset__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0 = 0U;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_skip_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_skip_o;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_add_o;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt;
    // ALWAYS at ../rtl/k68_dpmem.v:64
    if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__we) {
	__Vdlyvval__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_dat;
	__Vdlyvset__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_add;
    }
    // ALWAYS at ../rtl/k68_dpmem.v:64
    if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__we) {
	__Vdlyvval__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_dat;
	__Vdlyvset__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0 = 1U;
	__Vdlyvdim0__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_add;
    }
    // ALWAYS at ../rtl/k68_fetch.v:205
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt 
	= (3U & ((IData)(vlTOPp->v__DOT__unused_rst_o)
		  ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt))));
    // ALWAYS at ../rtl/k68_buni.v:81
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt 
	= (3U & ((IData)(vlTOPp->v__DOT__unused_rst_o)
		  ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt))));
    // ALWAYS at ../rtl/k68_clkgen.v:62
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt)));
    // ALWAYSPOST at ../rtl/k68_dpmem.v:65
    if (__Vdlyvset__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem[(IData)(__Vdlyvdim0__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0)] 
	    = __Vdlyvval__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem__v0;
    }
    // ALWAYSPOST at ../rtl/k68_dpmem.v:65
    if (__Vdlyvset__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem[(IData)(__Vdlyvdim0__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0)] 
	    = __Vdlyvval__v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem__v0;
    }
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt 
	= __Vdly__v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt;
    // ALWAYS at ../rtl/k68_regbank.v:73
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_dat 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o;
    // ALWAYS at ../rtl/k68_regbank.v:74
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__we 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o;
    // ALWAYS at ../rtl/k68_regbank.v:72
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_add 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o;
}

void m68::_sequent__TOP__4(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__4\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp;
    // ALWAYS at ../rtl/sasc_fifo4.v:96
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we_dat) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp)));
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:96
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we_dat) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp)));
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:106
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load_e) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)));
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:106
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load_e) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)));
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:96
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_we) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp)));
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:96
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_we) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp)));
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:106
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__re_dat) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)));
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:106
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__re_dat) {
	    vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp 
		= (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)));
	}
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp = 0U;
    }
    // ALWAYS at ../rtl/sasc_top.v:265
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce_x4) {
	    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_state 
		= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state;
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_state = 1U;
    }
    // ALWAYS at ../rtl/sasc_top.v:265
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce_x4) {
	    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_state 
		= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state;
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_state = 1U;
    }
    // ALWAYS at ../rtl/sasc_top.v:270
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__change) 
			     << 2U) | (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_state));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d 
	= (IData)(vlTOPp->__Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d)
	[(IData)(vlTOPp->__Vtableidx1)];
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state 
	= (IData)(vlTOPp->__Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state)
	[(IData)(vlTOPp->__Vtableidx1)];
    // ALWAYS at ../rtl/sasc_top.v:270
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__change) 
			     << 2U) | (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_state));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d 
	= (IData)(vlTOPp->__Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d)
	[(IData)(vlTOPp->__Vtableidx2)];
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state 
	= (IData)(vlTOPp->__Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state)
	[(IData)(vlTOPp->__Vtableidx2)];
}

void m68::_sequent__TOP__5(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__5\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__sum,31,0);
    // Body
    __Vdly__sum = vlTOPp->sum;
    // ALWAYS at ../bench/../bench/k68_soc_test.v:58
    if (vlTOPp->rst) {
	if (vlTOPp->v__DOT__we) {
	    __Vdly__sum = (((0xffffff80U & (vlTOPp->sum 
					    << 7U)) 
			    | (0x7fU & (vlTOPp->sum 
					>> 0x19U))) 
			   ^ vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o);
	}
    } else {
	__Vdly__sum = 0U;
    }
    vlTOPp->sum = __Vdly__sum;
}

void m68::_sequent__TOP__6(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__6\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/k68_arb.v:100
    if ((1U & ((IData)(vlTOPp->v__DOT__unused_rst_o) 
	       | (~ ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt)) 
		     | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o)))))) {
	vlTOPp->v__DOT__dut0__DOT__a_cs_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__a_we_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__b_cs_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__b_we_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__m_dat_i = 0U;
	vlTOPp->v__DOT__we = 0U;
    } else {
	vlTOPp->v__DOT__dut0__DOT__a_cs_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__a_we_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__b_cs_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__b_we_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__m_dat_i = 0U;
	vlTOPp->v__DOT__we = 0U;
	if ((0x80000000U & vlTOPp->v__DOT__dut0__DOT__m_add_o)) {
	    if ((0xffU == (0xffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
				    >> 0x18U)))) {
		if ((0U == (0xffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
				     >> 0x10U)))) {
		    vlTOPp->v__DOT__dut0__DOT__m_dat_i = 0U;
		} else {
		    if ((1U == (0xffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					 >> 0x10U)))) {
			vlTOPp->v__DOT__dut0__DOT__a_cs_o = 1U;
			vlTOPp->v__DOT__dut0__DOT__a_we_o 
			    = ((0U != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt)) 
			       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o));
			vlTOPp->v__DOT__dut0__DOT__m_dat_i 
			    = vlTOPp->v__DOT__dut0__DOT__a_dat_i;
		    } else {
			if ((2U == (0xffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					     >> 0x10U)))) {
			    vlTOPp->v__DOT__dut0__DOT__b_cs_o = 1U;
			    vlTOPp->v__DOT__dut0__DOT__b_we_o 
				= ((0U != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt)) 
				   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o));
			    vlTOPp->v__DOT__dut0__DOT__m_dat_i 
				= vlTOPp->v__DOT__dut0__DOT__b_dat_i;
			} else {
			    vlTOPp->v__DOT__dut0__DOT__a_cs_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__a_we_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__b_cs_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__b_we_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__m_dat_i = 0U;
			    vlTOPp->v__DOT__we = 0U;
			}
		    }
		}
	    } else {
		vlTOPp->v__DOT__we = ((0U != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt)) 
				      & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o));
		vlTOPp->v__DOT__dut0__DOT__m_dat_i 
		    = vlTOPp->v__DOT__dat_i;
	    }
	} else {
	    if ((2U & vlTOPp->v__DOT__dut0__DOT__m_add_o)) {
		vlTOPp->v__DOT__dut0__DOT__m_dat_i 
		    = ((0xffff0000U & vlTOPp->v__DOT__dat_i) 
		       | (0xffffU & (vlTOPp->v__DOT__dat_i 
				     >> 0x10U)));
		vlTOPp->v__DOT__we = 0U;
		vlTOPp->v__DOT__dut0__DOT__a_cs_o = 0U;
		vlTOPp->v__DOT__dut0__DOT__b_cs_o = 0U;
	    } else {
		vlTOPp->v__DOT__dut0__DOT__m_dat_i 
		    = ((0xffff0000U & (vlTOPp->v__DOT__dat_i 
				       << 0x10U)) | 
		       (0xffffU & vlTOPp->v__DOT__dat_i));
		vlTOPp->v__DOT__we = 0U;
		vlTOPp->v__DOT__dut0__DOT__a_cs_o = 0U;
		vlTOPp->v__DOT__dut0__DOT__b_cs_o = 0U;
	    }
	}
    }
}

void m68::_settle__TOP__7(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_settle__TOP__7\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__rts = ((2U & (IData)(vlTOPp->v__DOT__rts)) 
			   | (IData)(vlTOPp->v__DOT__dut0__DOT____Vcellout__uart0__rts_o));
    vlTOPp->v__DOT__rts = ((1U & (IData)(vlTOPp->v__DOT__rts)) 
			   | ((IData)(vlTOPp->v__DOT__dut0__DOT____Vcellout__uart1__rts_o) 
			      << 1U));
    vlTOPp->v__DOT__tx = ((2U & (IData)(vlTOPp->v__DOT__tx)) 
			  | (IData)(vlTOPp->v__DOT__dut0__DOT____Vcellout__uart0__tx_o));
    vlTOPp->v__DOT__tx = ((1U & (IData)(vlTOPp->v__DOT__tx)) 
			  | ((IData)(vlTOPp->v__DOT__dut0__DOT____Vcellout__uart1__tx_o) 
			     << 1U));
    // ALWAYS at ../rtl/sasc_top.v:270
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__change) 
			     << 2U) | (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_state));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d 
	= (IData)(vlTOPp->__Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d)
	[(IData)(vlTOPp->__Vtableidx1)];
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state 
	= (IData)(vlTOPp->__Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state)
	[(IData)(vlTOPp->__Vtableidx1)];
    // ALWAYS at ../rtl/sasc_top.v:270
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__change) 
			     << 2U) | (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_state));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d 
	= (IData)(vlTOPp->__Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d)
	[(IData)(vlTOPp->__Vtableidx2)];
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state 
	= (IData)(vlTOPp->__Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state)
	[(IData)(vlTOPp->__Vtableidx2)];
}

void m68::_initial__TOP__8(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_initial__TOP__8\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../rtl/k68_clkgen.v:60
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt = 0U;
}

void m68::_sequent__TOP__9(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__9\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/sasc_brg.v:146
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce_x4 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_t;
    // ALWAYS at ../rtl/sasc_brg.v:146
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce_x4 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_t;
    // ALWAYS at ../rtl/k68_sasc.v:56
    vlTOPp->v__DOT__dut0__DOT__a_dat_i = ((0U == (0xffffU 
						  & vlTOPp->v__DOT__dut0__DOT__m_add_o))
					   ? (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__dout)
					   : ((1U == 
					       (0xffffU 
						& vlTOPp->v__DOT__dut0__DOT__m_add_o))
					       ? ((
						   (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp) 
						     == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)) 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__gb)) 
						   << 1U) 
						  | (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp) 
						      == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)) 
						     & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__gb))))
					       : ((2U 
						   == 
						   (0xffffU 
						    & vlTOPp->v__DOT__dut0__DOT__m_add_o))
						   ? (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__brg0)
						   : 
						  ((3U 
						    == 
						    (0xffffU 
						     & vlTOPp->v__DOT__dut0__DOT__m_add_o))
						    ? (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__brg1)
						    : 0U))));
    // ALWAYS at ../rtl/k68_sasc.v:56
    vlTOPp->v__DOT__dut0__DOT__b_dat_i = ((0U == (0xffffU 
						  & vlTOPp->v__DOT__dut0__DOT__m_add_o))
					   ? (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__dout)
					   : ((1U == 
					       (0xffffU 
						& vlTOPp->v__DOT__dut0__DOT__m_add_o))
					       ? ((
						   (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp) 
						     == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)) 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__gb)) 
						   << 1U) 
						  | (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp) 
						      == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)) 
						     & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__gb))))
					       : ((2U 
						   == 
						   (0xffffU 
						    & vlTOPp->v__DOT__dut0__DOT__m_add_o))
						   ? (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__brg0)
						   : 
						  ((3U 
						    == 
						    (0xffffU 
						     & vlTOPp->v__DOT__dut0__DOT__m_add_o))
						    ? (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__brg1)
						    : 0U))));
    // ALWAYS at ../rtl/sasc_brg.v:143
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_t 
	= ((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_r)) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_clr));
    // ALWAYS at ../rtl/sasc_brg.v:143
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_t 
	= ((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_r)) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_clr));
    // ALWAYS at ../rtl/sasc_fifo4.v:127
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if ((((3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp))) 
	      == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)) 
	     & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_we))) {
	    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__gb = 1U;
	} else {
	    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__re_dat) {
		vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__gb = 0U;
	    }
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__gb = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:127
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if ((((3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp))) 
	      == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)) 
	     & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we_dat))) {
	    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__gb = 1U;
	} else {
	    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load_e) {
		vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__gb = 0U;
	    }
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__gb = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:127
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if ((((3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp))) 
	      == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)) 
	     & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_we))) {
	    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__gb = 1U;
	} else {
	    if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__re_dat) {
		vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__gb = 0U;
	    }
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__gb = 0U;
    }
    // ALWAYS at ../rtl/sasc_fifo4.v:127
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if ((((3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp))) 
	      == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)) 
	     & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we_dat))) {
	    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__gb = 1U;
	} else {
	    if (vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load_e) {
		vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__gb = 0U;
	    }
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__gb = 0U;
    }
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load_e 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load_e 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce));
    // ALWAYS at ../rtl/sasc_brg.v:140
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_r 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_clr;
    // ALWAYS at ../rtl/sasc_brg.v:140
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_r 
	= vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_clr;
    // ALWAYS at ../rtl/sasc_brg.v:137
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_clr 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt) 
	   == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__brg1));
    // ALWAYS at ../rtl/sasc_brg.v:137
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_clr 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt) 
	   == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__brg1));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt;
}

void m68::_sequent__TOP__10(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__10\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i = 
	(1U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt) 
	       >> 1U));
}

void m68::_settle__TOP__11(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_settle__TOP__11\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i = 
	(1U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt) 
	       >> 1U));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load_e 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sio_ce));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load_e 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sio_ce));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_dat_i = 
	(0xffffU & ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt))
		     ? vlTOPp->v__DOT__dut0__DOT__m_dat_i
		     : 0U));
}

void m68::_sequent__TOP__12(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__12\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp;
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp;
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp;
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp;
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp;
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__dout = (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem)
	[(IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)];
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxf_full 
	= (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp) 
	    == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__gb));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txd_p 
	= (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem)
	[(IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)];
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__dout = (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem)
	[(IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)];
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxf_full 
	= (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp) 
	    == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__gb));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txd_p 
	= (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem)
	[(IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)];
    // ALWAYS at ../rtl/k68_sasc.v:45
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we) 
	     & (2U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)))) {
	    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__brg0 
		= (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o);
	} else {
	    if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we) 
		 & (3U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)))) {
		vlTOPp->v__DOT__dut0__DOT__uart0__DOT__brg1 
		    = (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o);
	    }
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__brg0 = 1U;
	vlTOPp->v__DOT__dut0__DOT__uart0__DOT__brg1 = 0xd9U;
    }
    // ALWAYS at ../rtl/k68_sasc.v:45
    if (vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst) {
	if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we) 
	     & (2U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)))) {
	    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__brg0 
		= (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o);
	} else {
	    if (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we) 
		 & (3U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)))) {
		vlTOPp->v__DOT__dut0__DOT__uart1__DOT__brg1 
		    = (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o);
	    }
	}
    } else {
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__brg0 = 1U;
	vlTOPp->v__DOT__dut0__DOT__uart1__DOT__brg1 = 0xd9U;
    }
}

void m68::_multiclk__TOP__13(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__13\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_dat_i = 
	(0xffffU & ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt))
		     ? vlTOPp->v__DOT__dut0__DOT__m_dat_i
		     : 0U));
}

void m68::_sequent__TOP__14(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__14\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o,7,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o,7,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt,1,0);
    //char	__VpadToAlign315[1];
    VL_SIG(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__p_add_o,31,0);
    VL_SIG(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc,31,0);
    // Body
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt;
    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt;
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc;
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__p_add_o = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_add_o;
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o;
    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
    // ALWAYS at ../rtl/k68_decode.v:171
    if (vlTOPp->v__DOT__unused_rst_o) {
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt = 0U;
    } else {
	if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx) {
	    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt = 2U;
	} else {
	    if ((0U != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt))) {
		__Vdly__v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt 
		    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt) 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at ../rtl/k68_fetch.v:173
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld = 
	((~ (IData)(vlTOPp->v__DOT__unused_rst_o)) 
	 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__rdy));
    // ALWAYS at ../rtl/k68_fetch.v:78
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o = 0U;
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__p_add_o = 0U;
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc = 0U;
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__p_add_o = 0U;
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o = 0x4e71U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__stall)))) {
	    if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__rdy) {
		if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt))) {
		    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpd;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpa;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpb;
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpc;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpd;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpa;
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpb;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpc;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpd;
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpa;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpb;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpc;
		    }
		}
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o = 0x4e71U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o = 0U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o = 0U;
	    }
	    if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o) {
		__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o;
		vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt = 0U;
		__Vdly__v__DOT__dut0__DOT__cpu0__DOT__p_add_o 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o;
	    } else {
		if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__rdy) {
		    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
			= ((IData)(2U) + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc);
		}
		__Vdly__v__DOT__dut0__DOT__cpu0__DOT__p_add_o 
		    = ((IData)(2U) + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_add_o);
		vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt 
		    = (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt)));
	    }
	}
    }
    // ALWAYS at ../rtl/k68_execute.v:146
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o = 0U;
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_pc_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_siz_o = 0U;
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o = 0U;
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o = 0U;
	__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o = 0U;
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					  << 2U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				    = (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			    }
			} else {
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				= (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			}
		    } else {
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
			    = (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
		    }
		} else {
		    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
		    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
			= (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
		}
	    } else {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
		    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
			= (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
		} else {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				= (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				    = (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					  << 2U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
			    }
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					  << 2U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				    = (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				    = (0xffU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						>> 8U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src);
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				    = (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					  << 2U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__x));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				    = (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			    }
			} else {
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				= (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			}
		    } else {
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
			       | (0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
			       | (8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = ((0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
			       | (2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
			       | (1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
			       | (4U & ((~ (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
					    >> (0x1fU 
						& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   >> 0x18U)))) 
					<< 2U)));
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				= (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				    = (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				    = (0xffU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x18U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xffU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x10U));
			    }
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					  << 4U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (2U & ((2U 
						 & ((((~ 
						       (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
							>> 0x1fU)) 
						      << 1U) 
						     & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							>> 0x1eU)) 
						    & ((~ 
							(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							 >> 0x1fU)) 
						       << 1U))) 
						| (2U 
						   & (((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
							>> 0x1eU) 
						       & ((~ 
							   (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							    >> 0x1fU)) 
							  << 1U)) 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							 >> 0x1eU))))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (1U & ((((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   >> 0x1fU) 
						  & (~ 
						     (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						      >> 0x1fU))) 
						 | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						     >> 0x1fU) 
						    & (~ 
						       (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							>> 0x1fU)))) 
						| ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						    & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						   >> 0x1fU))));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (
						   (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						    | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						   >> 0x1bU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0xfffffffcU 
					  & (((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					      << 2U) 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (2U & ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						 & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						>> 0x1eU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (1U & ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						 | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						>> 0x1fU)));
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c) 
					  << 4U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0xfffffffcU 
					  & (((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					      << 2U) 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (
						   (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						    | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						   >> 0x1bU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					  << 2U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (2U & ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						 & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						>> 0x1eU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (1U & ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						 | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						>> 0x1fU)));
			    }
			}
		    }
		}
	    } else {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
				= (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			    __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c) 
					  << 4U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0xfffffffcU 
					  & (((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					      << 2U) 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (
						   (((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						      & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
						     >> 0x1bU) 
						    | (((~ 
							 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							  >> 0x1fU)) 
							<< 4U) 
						       & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							  >> 0x1bU))) 
						   | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						       >> 0x1bU) 
						      & ((~ 
							  (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							   >> 0x1fU)) 
							 << 4U)))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0xfffffffcU 
					  & (((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					      << 2U) 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (2U & ((((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
						  >> 0x1eU) 
						 & ((~ 
						     (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						      >> 0x1fU)) 
						    << 1U)) 
						| ((((~ 
						      (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						       >> 0x1fU)) 
						     & (~ 
							(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 >> 0x1fU))) 
						    << 1U) 
						   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						      >> 0x1eU)))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (1U & ((((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
						  >> 0x1fU) 
						 | ((~ 
						     (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						      >> 0x1fU)) 
						    & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						       >> 0x1fU))) 
						| ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						    >> 0x1fU) 
						   & (~ 
						      (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						       >> 0x1fU))))));
			    }
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (
						   (((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						      & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
						     >> 0x1bU) 
						    | (((~ 
							 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							  >> 0x1fU)) 
							<< 4U) 
						       & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							  >> 0x1bU))) 
						   | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						       >> 0x1bU) 
						      & ((~ 
							  (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							   >> 0x1fU)) 
							 << 4U)))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					  << 2U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (2U & ((((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
						  >> 0x1eU) 
						 & ((~ 
						     (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						      >> 0x1fU)) 
						    << 1U)) 
						| ((((~ 
						      (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						       >> 0x1fU)) 
						     & (~ 
							(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 >> 0x1fU))) 
						    << 1U) 
						   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						      >> 0x1eU)))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (1U & ((((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
						  >> 0x1fU) 
						 | ((~ 
						     (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						      >> 0x1fU)) 
						    & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						       >> 0x1fU))) 
						| ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						    >> 0x1fU) 
						   & (~ 
						      (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						       >> 0x1fU))))));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c) 
					  << 4U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0xfffffffcU 
					  & (((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					      << 2U) 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = (0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c));
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (
						   (((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						      >> 0x1bU) 
						     & ((~ 
							 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							  >> 0x1fU)) 
							<< 4U)) 
						    | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							>> 0x1bU) 
						       & ((~ 
							   (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							    >> 0x1fU)) 
							  << 4U))) 
						   | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						      >> 0x1bU))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0xfffffffcU 
					  & (((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					      << 2U) 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (2U & ((2U 
						 & ((((~ 
						       (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
							>> 0x1fU)) 
						      << 1U) 
						     & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							>> 0x1eU)) 
						    & ((~ 
							(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							 >> 0x1fU)) 
						       << 1U))) 
						| (2U 
						   & (((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
							>> 0x1eU) 
						       & ((~ 
							   (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							    >> 0x1fU)) 
							  << 1U)) 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							 >> 0x1eU))))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (1U & ((((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   >> 0x1fU) 
						  & (~ 
						     (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						      >> 0x1fU))) 
						 | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						     >> 0x1fU) 
						    & (~ 
						       (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							>> 0x1fU)))) 
						| ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						    & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						   >> 0x1fU))));
			    } else {
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (0x10U & (
						   (((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						      >> 0x1bU) 
						     & ((~ 
							 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							  >> 0x1fU)) 
							<< 4U)) 
						    | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							>> 0x1bU) 
						       & ((~ 
							   (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							    >> 0x1fU)) 
							  << 4U))) 
						   | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						      >> 0x1bU))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						>> 0x1cU)));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
					  << 2U));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (2U & ((2U 
						 & ((((~ 
						       (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
							>> 0x1fU)) 
						      << 1U) 
						     & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							>> 0x1eU)) 
						    & ((~ 
							(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							 >> 0x1fU)) 
						       << 1U))) 
						| (2U 
						   & (((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
							>> 0x1eU) 
						       & ((~ 
							   (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							    >> 0x1fU)) 
							  << 1U)) 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							 >> 0x1eU))))));
				__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
				    = ((0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
				       | (1U & ((((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   >> 0x1fU) 
						  & (~ 
						     (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						      >> 0x1fU))) 
						 | ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
						     >> 0x1fU) 
						    & (~ 
						       (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							>> 0x1fU)))) 
						| ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						    & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
						   >> 0x1fU))));
			    }
			}
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = ((0xefU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
			       | (0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = ((0xf7U & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
			       | (8U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
					>> 0x1cU)));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = ((0xfbU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
			       | ((0U == vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
				  << 2U));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = (0xfdU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = (0xfeU & (IData)(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o));
		    } else {
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o 
			    = (0xf8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o));
			__Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
		    }
		}
	    }
	}
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_pc_o 
	    = (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_pc_o 
	       + ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_skip_o) 
		  << 1U));
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__alu;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_siz_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
	    = ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))
	        ? ((0xffffff00U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o) 
		   | (0xffU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
			       >> 0x18U))) : ((1U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))
					       ? ((0xffff0000U 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o) 
						  | (0xffffU 
						     & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
							>> 0x10U)))
					       : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res));
    }
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt 
	= __Vdly__v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_add_o = __Vdly__v__DOT__dut0__DOT__cpu0__DOT__p_add_o;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o = __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o = __Vdly__v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o;
    // ALWAYS at ../rtl/k68_decode.v:198
    if ((1U & ((IData)(vlTOPp->v__DOT__unused_rst_o) 
	       | (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx))))) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_pc_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__brch = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_skip_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_skip_o;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__brch 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__brch 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_skip_o;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_skip_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_skip_o;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_pc_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc;
    }
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
	= __Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc;
    // ALWAYS at ../rtl/k68_ccc.v:60
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag 
	= (1U & ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
		  ? ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
		      ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			  ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				   >> 2U) | (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 3U) 
					     & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						   >> 1U)))) 
				 | ((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					>> 3U)) & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						   >> 1U)))
			      : (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				    >> 3U) & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 1U)) 
				  & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					>> 2U))) | 
				 (((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				       >> 3U)) & (~ 
						  ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						   >> 1U))) 
				  & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					>> 2U))))) : 
			 ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			   ? ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				>> 3U) & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					     >> 1U))) 
			      | ((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				     >> 3U)) & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						>> 1U)))
			   : ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				>> 3U) & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					  >> 1U)) | 
			      ((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				   >> 3U)) & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						 >> 1U))))))
		      : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			  ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				 >> 3U) : (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 3U)))
			  : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				 >> 1U) : (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 1U)))))
		  : ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
		      ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			  ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				 >> 2U) : (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 2U)))
			  : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)
			      : (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))))
		      : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			  ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				 | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				    >> 2U)) : ((~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
					       & (~ 
						  ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						   >> 2U))))
			  : (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))))));
}

void m68::_settle__TOP__15(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_settle__TOP__15\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__dout = (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem)
	[(IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)];
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxf_full 
	= (((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp) 
	    == (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__gb));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txd_p 
	= (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem)
	[(IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)];
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__dout = (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem)
	[(IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)];
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxf_full 
	= (((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp) 
	    == (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp)) 
	   & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__gb));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txd_p 
	= (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem)
	[(IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp)];
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we = ((IData)(vlTOPp->v__DOT__dut0__DOT__a_cs_o) 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__a_we_o));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we = ((IData)(vlTOPp->v__DOT__dut0__DOT__b_cs_o) 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__b_we_o));
    // ALWAYS at ../rtl/k68_ccc.v:60
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag 
	= (1U & ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
		  ? ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
		      ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			  ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				   >> 2U) | (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 3U) 
					     & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						   >> 1U)))) 
				 | ((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					>> 3U)) & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						   >> 1U)))
			      : (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				    >> 3U) & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 1U)) 
				  & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					>> 2U))) | 
				 (((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				       >> 3U)) & (~ 
						  ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						   >> 1U))) 
				  & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					>> 2U))))) : 
			 ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			   ? ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				>> 3U) & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					     >> 1U))) 
			      | ((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				     >> 3U)) & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						>> 1U)))
			   : ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				>> 3U) & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					  >> 1U)) | 
			      ((~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				   >> 3U)) & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						 >> 1U))))))
		      : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			  ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				 >> 3U) : (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 3U)))
			  : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				 >> 1U) : (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 1U)))))
		  : ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
		      ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			  ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				 >> 2U) : (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					      >> 2U)))
			  : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)
			      : (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))))
		      : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			  ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				 | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
				    >> 2U)) : ((~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o)) 
					       & (~ 
						  ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						   >> 2U))))
			  : (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))))));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_we 
	= (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid_r)) 
	    & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid)) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxf_full)));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_we 
	= (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid_r)) 
	    & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid)) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxf_full)));
}

void m68::_sequent__TOP__16(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__16\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we = ((IData)(vlTOPp->v__DOT__dut0__DOT__a_cs_o) 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__a_we_o));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we = ((IData)(vlTOPp->v__DOT__dut0__DOT__b_cs_o) 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__b_we_o));
}

void m68::_sequent__TOP__17(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__17\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/k68_load.v:143
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o = 0U;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o = 0U;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o = 0U;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o = 0U;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 0U;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_skip_o = 0U;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa = 0U;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb = 0U;
    } else {
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_add_o;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 0U;
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
	if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
	    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
		vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_skip_o 
		    = (3U & ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_skip_o))
			      ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa) 
				 + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb))
			      : ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_skip_o) 
				 - (IData)(1U))));
		vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o 
		    = (((0U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o) 
				      >> 3U))) | (1U 
						  == 
						  (7U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o) 
						      >> 3U))))
		        ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o
		        : ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o) 
					 >> 3U))) ? 
			   (((4U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o))) 
			     | (5U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o))))
			     ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o
			     : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_i)
			    : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_i));
	    } else {
		vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o 
		    = (((0U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o) 
				      >> 3U))) | (1U 
						  == 
						  (7U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o) 
						      >> 3U))))
		        ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o
		        : ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o) 
					 >> 3U))) ? 
			   (((4U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o))) 
			     | (5U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o))))
			     ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o
			     : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_i)
			    : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_i));
		vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip;
		if (((0U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o) 
				   >> 3U))) | (1U == 
					       (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o) 
						   >> 3U))))) {
		    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat;
		} else {
		    if ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o) 
				      >> 3U)))) {
			if (((4U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o))) 
			     | (5U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o))))) {
			    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat;
			} else {
			    if ((7U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 0U;
			    } else {
				vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o;
				vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 1U;
			    }
			}
		    } else {
			vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o;
			vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 1U;
		    }
		}
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
		vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip;
		if (((0U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o) 
				   >> 3U))) | (1U == 
					       (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o) 
						   >> 3U))))) {
		    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat;
		} else {
		    if ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o) 
				      >> 3U)))) {
			if (((4U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o))) 
			     | (5U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o))))) {
			    vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat;
			} else {
			    if ((7U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 0U;
			    } else {
				vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 1U;
				vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea;
			    }
			}
		    } else {
			vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea;
			vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 1U;
		    }
		}
	    } else {
		vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 1U;
		if (((0U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o) 
				   >> 3U))) | (1U == 
					       (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o) 
						   >> 3U))))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 0U;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 0U;
		} else {
		    if ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o) 
				      >> 3U)))) {
			if ((((4U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o))) 
			      | (7U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o)))) 
			     | (5U == (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o))))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_cs_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 0U;
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 1U;
			}
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_we_o = 1U;
		    }
		}
	    }
	}
	vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt 
	    = (3U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt)));
    }
    // ALWAYS at ../rtl/k68_fetch.v:213
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpa = 0x4e71U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpb = 0x4e71U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpc = 0x4e71U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpd = 0x4e71U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__stall)))) {
	    if ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt))) {
		if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt))) {
		    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpc 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__s_dat_i;
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpb 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__s_dat_i;
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpa 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__s_dat_i;
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpd 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__s_dat_i;
		    }
		}
	    }
	    if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpd = 0x4e71U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpa = 0x4e71U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpc = 0x4e71U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpb = 0x4e71U;
	    }
	}
    }
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_skip_o 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_skip_o;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_add_o = vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt;
}

void m68::_sequent__TOP__18(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__18\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_we 
	= (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid_r)) 
	    & (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid)) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxf_full)));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_we 
	= (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid_r)) 
	    & (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid)) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxf_full)));
}

void m68::_multiclk__TOP__19(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__19\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_i = 
	((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt))
	  ? 0U : vlTOPp->v__DOT__dut0__DOT__m_dat_i);
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__s_dat_i 
	= ((0xff00U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_dat_i) 
		       << 8U)) | (0xffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_dat_i) 
					   >> 8U)));
}

void m68::_settle__TOP__20(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_settle__TOP__20\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_i = 
	((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt))
	  ? 0U : vlTOPp->v__DOT__dut0__DOT__m_dat_i);
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__s_dat_i 
	= ((0xff00U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_dat_i) 
		       << 8U)) | (0xffU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_dat_i) 
					   >> 8U)));
    vlTOPp->v__DOT__dut0__DOT__m_add_o = ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt))
					   ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_add_o
					   : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_add_o);
    // ALWAYS at ../rtl/k68_decode.v:251
    if ((1U & (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld)) 
		| ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip) 
		   >> 1U)) | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip)))) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
	    = (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o) 
		<< 0x10U) | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o));
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 3U;
	if ((0x8000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
	    if ((0x4000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		if ((0x2000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
		    } else {
			if ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					  >> 6U)))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				= (1U | (0x10U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				= (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				= (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				= ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))
				    ? ((0x20U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 3U)) 
				       | (0x1fU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o))
				    : ((0x10U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 4U)) 
				       | ((8U & ((~ 
						  ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						     >> 0xbU) 
						    | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						       >> 0xaU)) 
						   | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 9U))) 
						 << 3U)) 
					  | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)))));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			}
		    }
		} else {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 6U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 7U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (8U | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				    = (8U | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 7U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			    } else {
				if ((0U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xcU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op) 
						 >> 6U));
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			}
		    } else {
			if ((3U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					  >> 6U)))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			} else {
			    if ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 6U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			    } else {
				if ((0U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xdU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 5U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    }
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x2000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((0x80U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x40U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 7U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (8U | (7U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						    >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 7U));
				} else {
				    if ((1U == (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 3U)))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (0x18U 
					       | (7U 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x18U 
					       | (7U 
						  & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						     >> 9U)));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (0x18U 
					       | (7U 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 6U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    }
				}
			    } else {
				if ((1U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 3U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (0x18U | 
					   (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x18U | 
					   (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (0x18U | 
					   (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 6U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			} else {
			    if ((0x80U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x40U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 7U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (8U | (7U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						    >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 7U));
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				}
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 6U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 9U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 6U));
			    }
			}
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
		    }
		} else {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 6U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 7U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (8U | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				    = (8U | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 7U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			    } else {
				if ((0U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 9U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op) 
						 >> 6U));
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			}
		    } else {
			if ((3U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					  >> 6U)))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			} else {
			    if ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 6U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			    } else {
				if ((0U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xaU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 4U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    }
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x4000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		if ((0x2000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
			    = (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
				     >> 9U));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
			    = (0xffU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
			    = (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
				     >> 9U));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
		    } else {
			if ((0U == (0xfU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					    >> 8U)))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
			    if ((0U == (0xffU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = (0xfffeU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = (0xfeU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			    }
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x26U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
			} else {
			    if ((1U == (0xfU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 8U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
				if ((0U == (0xffU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= (1U | (0xfffeU 
						 & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= (1U | (0xfeU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				}
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x26U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
				if ((0U == (0xffU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= (0xfffeU 
					   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= (0xfeU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				}
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x15U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x30U | (0xfU 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 8U)));
			    }
			}
		    }
		} else {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			if ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					  >> 6U)))) {
			    if ((1U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 3U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x17U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x30U | (0xfU 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 8U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			    }
			} else {
			    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= ((0U == (7U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 9U)))
					    ? 8U : 
					   (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				}
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 6U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = ((0U == (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U)))
				        ? 8U : (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 6U));
			    }
			}
		    } else {
			if ((0x800U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((0x400U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xfffffffeU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (1U 
						     | (0xfffffffeU 
							& vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					} else {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x20U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
							if (
							    (8U 
							     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							} else {
							    if (
								(4U 
								 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
								if (
								    (2U 
								     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
								    if (
									(1U 
									 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x1fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
									    = 
									    (0xfffffffeU 
									     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    } else {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x22U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 7U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    }
								} else {
								    if (
									(1U 
									 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x1fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
									    = 
									    (0xfffffffeU 
									     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    } else {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
								    }
								}
							    } else {
								if (
								    (2U 
								     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
								    if (
									(1U 
									 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x1fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
									    = 
									    (0xfffffffeU 
									     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    } else {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x21U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
									    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
								    }
								} else {
								    if (
									(1U 
									 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 3U;
								    } else {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    }
								}
							    }
							}
						    } else {
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
						    }
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
							if (
							    (8U 
							     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							} else {
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							}
						    } else {
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x22U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							    = 
							    (0x20U 
							     | (0xfU 
								& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						    }
						}
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					}
				    }
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				}
			    } else {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x3cU 
						     == 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x22U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 4U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x23U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							(3U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 6U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
							= 
							(3U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						}
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x24U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x24U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0U 
						 == 
						 (7U 
						  & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						     >> 3U)))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					} else {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							 >> 3U)))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x20U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(7U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(7U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    if (
							(1U 
							 == 
							 (7U 
							  & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							     >> 3U)))) {
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x22U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 4U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						    } else {
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x25U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							    = 
							    (0x3fU 
							     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x27U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						    }
						}
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x400U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x14U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 7U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 7U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x14U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x10U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x10U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					}
				    }
				}
			    } else {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x25U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (8U 
						     | (7U 
							& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							   >> 9U)));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (8U 
						     | (7U 
							& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							   >> 9U)));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					}
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x25U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (8U 
						     | (7U 
							& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							   >> 9U)));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (8U 
						     | (7U 
							& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							   >> 9U)));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					}
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x14U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x12U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x12U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x2000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
			= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
			= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
			= ((0x38U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
				     >> 3U)) | (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
			= ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 0xcU)))
			    ? 1U : ((1U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 0xcU)))
				     ? 0U : 2U));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
			= ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 0xcU)))
			    ? 1U : ((1U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 0xcU)))
				     ? 0U : 2U));
		} else {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
			    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
			    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
			    = ((0x38U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 3U)) | 
			       (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
				      >> 9U)));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
			    = ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 0xcU)))
			        ? 1U : ((1U == (3U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 0xcU)))
					 ? 0U : 2U));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
			    = ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 0xcU)))
			        ? 1U : ((1U == (3U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 0xcU)))
					 ? 0U : 2U));
		    } else {
			if ((0x800U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((0x400U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((1U != (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 3U)))) {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 9U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 9U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					} else {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 9U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 9U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
				    }
				}
			    } else {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					if ((0x3cU 
					     == (0xffU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 3U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						= (0xffU 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					} else {
					    if ((0x7cU 
						 == 
						 (0xffU 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 3U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffffU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 6U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					} else {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x400U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
				    }
				}
			    } else {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					if ((0x3cU 
					     == (0xffU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 2U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						= (0xffffff00U 
						   | (0xffU 
						      & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					} else {
					    if ((0x7cU 
						 == 
						 (0xffU 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffff0000U 
						     | (0xffffU 
							& vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 5U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					if ((0x3cU 
					     == (0xffU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 1U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						= (0xffU 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					} else {
					    if ((0x7cU 
						 == 
						 (0xffU 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffffU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 4U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void m68::_sequent__TOP__21(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__21\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt 
	= vlTOPp->__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt;
    // ALWAYS at ../rtl/k68_clkgen.v:66
    vlTOPp->v__DOT__unused_rst_o = (1U & (~ (IData)(vlTOPp->rst)));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst = (1U 
						   & (~ (IData)(vlTOPp->v__DOT__unused_rst_o)));
    // ALWAYS at ../rtl/k68_execute.v:322
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src = 0U;
    } else {
	if ((0x1fU == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
	    if ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
		    = ((0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
				       << 0x18U)) | 
		       ((0xff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
				      << 0x10U)) | 
			((0xff00U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
				     << 8U)) | (0xffU 
						& vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o))));
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
		    = (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			  == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			 & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			& (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
		        ? ((0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					   << 0x18U)) 
			   | ((0xff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					    << 0x10U)) 
			      | ((0xff00U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					     << 8U)) 
				 | (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o))))
		        : ((0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					   << 0x18U)) 
			   | ((0xff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					    << 0x10U)) 
			      | ((0xff00U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					     << 8U)) 
				 | (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o)))));
	    } else {
		if ((1U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			= ((0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
					   << 0x10U)) 
			   | (0xffffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? ((0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					       << 0x10U)) 
			       | (0xffffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o))
			    : ((0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					       << 0x10U)) 
			       | (0xffffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o)));
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o
			    : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o);
		}
	    }
	} else {
	    if ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
		    = (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o) 
			  == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			 & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			& (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
		        ? (0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					  << 0x18U))
		        : (0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
					  << 0x18U)));
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
		    = (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			  == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			 & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			& (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
		        ? (0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					  << 0x18U))
		        : (0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					  << 0x18U)));
	    } else {
		if ((1U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? (0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					      << 0x10U))
			    : (0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
					      << 0x10U)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? (0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					      << 0x10U))
			    : (0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					      << 0x10U)));
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o
			    : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o);
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o
			    : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o);
		}
	    }
	}
    }
    // ALWAYS at ../rtl/k68_decode.v:1792
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__c_siz_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
    } else {
	if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__brch) {
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
	} else {
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__c_siz_o 
		= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_siz_o;
	    if ((0x3cU == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) {
		if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
		    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
		    } else {
			if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
			} else {
			    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 1U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o 
					= (0xfffffffeU 
					   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o);
				    if ((1U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o)) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x27U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o 
					    = (0xfffffffeU 
					       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_pc_o);
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    }
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				}
			    } else {
				if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 1U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o 
					    = (0xfffffffeU 
					       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o);
					if ((1U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o)) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x27U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o 
						= (0xfffffffeU 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_pc_o);
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 1U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
			} else {
			    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				} else {
				    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 1U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o 
					    = (0xfffffffeU 
					       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o);
					if ((1U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o)) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x27U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o 
						= (0xfffffffeU 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_pc_o);
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
					}
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    }
				}
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
			    }
			}
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
		    }
		}
	    } else {
		if ((0x3fU == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
		    if ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o;
		    }
		}
	    }
	}
    }
}

void m68::_multiclk__TOP__22(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__22\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__m_add_o = ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt))
					   ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_add_o
					   : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_add_o);
    // ALWAYS at ../rtl/k68_decode.v:251
    if ((1U & (((~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld)) 
		| ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip) 
		   >> 1U)) | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip)))) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
	    = (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o) 
		<< 0x10U) | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o));
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3fU;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 3U;
	if ((0x8000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
	    if ((0x4000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		if ((0x2000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
		    } else {
			if ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					  >> 6U)))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				= (1U | (0x10U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				= (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				= (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				= ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))
				    ? ((0x20U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 3U)) 
				       | (0x1fU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o))
				    : ((0x10U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 4U)) 
				       | ((8U & ((~ 
						  ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						     >> 0xbU) 
						    | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						       >> 0xaU)) 
						   | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 9U))) 
						 << 3U)) 
					  | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)))));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			}
		    }
		} else {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 6U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 7U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (8U | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				    = (8U | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 7U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			    } else {
				if ((0U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xcU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op) 
						 >> 6U));
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			}
		    } else {
			if ((3U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					  >> 6U)))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			} else {
			    if ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 6U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			    } else {
				if ((0U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xdU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 5U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    }
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x2000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((0x80U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x40U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 7U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (8U | (7U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						    >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 7U));
				} else {
				    if ((1U == (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 3U)))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (0x18U 
					       | (7U 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x18U 
					       | (7U 
						  & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						     >> 9U)));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (0x18U 
					       | (7U 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 6U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    }
				}
			    } else {
				if ((1U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 3U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (0x18U | 
					   (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x18U | 
					   (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (0x18U | 
					   (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 6U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			} else {
			    if ((0x80U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x40U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 7U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (8U | (7U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						    >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 7U));
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				}
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 6U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 9U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 6U));
			    }
			}
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
		    }
		} else {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 6U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 7U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (8U | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				    = (8U | (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 7U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			    } else {
				if ((0U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 9U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op) 
						 >> 6U));
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 9U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				= (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 9U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 6U));
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			}
		    } else {
			if ((3U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					  >> 6U)))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			} else {
			    if ((7U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 6U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			    } else {
				if ((0U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 4U)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xaU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= ((0x20U & 
					    ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     << 2U)) 
					   | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 4U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    }
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0x4000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		if ((0x2000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
			    = (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
				     >> 9U));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
			    = (0xffU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
			    = (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
				     >> 9U));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
		    } else {
			if ((0U == (0xfU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					    >> 8U)))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
			    if ((0U == (0xffU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = (0xfffeU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = (0xfeU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			    }
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x26U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
			} else {
			    if ((1U == (0xfU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 8U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
				if ((0U == (0xffU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= (1U | (0xfffeU 
						 & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= (1U | (0xfeU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				}
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x26U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
				if ((0U == (0xffU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= (0xfffeU 
					   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= (0xfeU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				}
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x15U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x30U | (0xfU 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 8U)));
			    }
			}
		    }
		} else {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			if ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					  >> 6U)))) {
			    if ((1U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					      >> 3U)))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x17U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
				    = (0x30U | (0xfU 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 8U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
			    }
			} else {
			    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					= ((0U == (7U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 9U)))
					    ? 8U : 
					   (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 9U)));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					= (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						 >> 6U));
				}
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 6U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
				    = ((0U == (7U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 9U)))
				        ? 8U : (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
				    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
				    = (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 6U));
			    }
			}
		    } else {
			if ((0x800U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((0x400U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xfffffffeU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (1U 
						     | (0xfffffffeU 
							& vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					} else {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x20U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
							if (
							    (8U 
							     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							} else {
							    if (
								(4U 
								 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
								if (
								    (2U 
								     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
								    if (
									(1U 
									 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x1fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
									    = 
									    (0xfffffffeU 
									     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    } else {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x22U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 7U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    }
								} else {
								    if (
									(1U 
									 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x1fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
									    = 
									    (0xfffffffeU 
									     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    } else {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
								    }
								}
							    } else {
								if (
								    (2U 
								     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
								    if (
									(1U 
									 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x1fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
									    = 
									    (0xfffffffeU 
									     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    } else {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x21U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3dU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
									    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
								    }
								} else {
								    if (
									(1U 
									 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 3U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 3U;
								    } else {
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x27U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
									vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
								    }
								}
							    }
							}
						    } else {
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
						    }
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
							if (
							    (8U 
							     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							} else {
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
							    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							}
						    } else {
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x22U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							    = 
							    (0x20U 
							     | (0xfU 
								& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)));
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						    }
						}
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					}
				    }
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				}
			    } else {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x3cU 
						     == 
						     (0x3fU 
						      & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x22U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 4U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x23U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							(3U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 6U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
							= 
							(3U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						}
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x24U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x24U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0U 
						 == 
						 (7U 
						  & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						     >> 3U)))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					} else {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							 >> 3U)))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x20U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(7U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(7U 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    if (
							(1U 
							 == 
							 (7U 
							  & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							     >> 3U)))) {
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x22U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 4U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						    } else {
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x25U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							    = 
							    (0x3fU 
							     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x27U;
							vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						    }
						}
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x400U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x14U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 7U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 7U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x14U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x10U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x10U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					}
				    }
				}
			    } else {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x25U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (8U 
						     | (7U 
							& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							   >> 9U)));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (8U 
						     | (7U 
							& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							   >> 9U)));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					}
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x25U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (8U 
						     | (7U 
							& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							   >> 9U)));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (8U 
						     | (7U 
							& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							   >> 9U)));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 0U;
					}
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x14U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x12U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x12U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src = 0U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						= (0x3fU 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						= (3U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						      >> 6U));
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x2000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
			= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
			= (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
			= ((0x38U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
				     >> 3U)) | (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 9U)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
			= ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 0xcU)))
			    ? 1U : ((1U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 0xcU)))
				     ? 0U : 2U));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
			= ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 0xcU)))
			    ? 1U : ((1U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						  >> 0xcU)))
				     ? 0U : 2U));
		} else {
		    if ((0x1000U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
			    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src 
			    = (0x3fU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
			    = ((0x38U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					 >> 3U)) | 
			       (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
				      >> 9U)));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
			    = ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 0xcU)))
			        ? 1U : ((1U == (3U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 0xcU)))
					 ? 0U : 2U));
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
			    = ((3U == (3U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					     >> 0xcU)))
			        ? 1U : ((1U == (3U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 0xcU)))
					 ? 0U : 2U));
		    } else {
			if ((0x800U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
			    if ((0x400U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((1U != (7U 
						& ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						   >> 3U)))) {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 9U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 9U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					} else {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 9U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 9U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
				    }
				}
			    } else {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					if ((0x3cU 
					     == (0xffU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 3U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						= (0xffU 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					} else {
					    if ((0x7cU 
						 == 
						 (0xffU 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 3U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffffU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 6U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					if ((0x80U 
					     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					} else {
					    if ((0x40U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    ((0U 
						      == 
						      (7U 
						       & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							  >> 3U)))
						      ? 2U
						      : 0U);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x400U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0xbU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 8U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
					    = (0x3fU 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
					    = (3U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
						>> 6U));
				    }
				}
			    } else {
				if ((0x200U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					if ((0x3cU 
					     == (0xffU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 2U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						= (0xffffff00U 
						   | (0xffU 
						      & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o));
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					} else {
					    if ((0x7cU 
						 == 
						 (0xffU 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 2U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffff0000U 
						     | (0xffffU 
							& vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 5U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					}
				    }
				} else {
				    if ((0x100U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
					if ((1U != 
					     (7U & 
					      ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
					       >> 3U)))) {
					    if ((0x80U 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1bU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x1aU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    } else {
						if (
						    (0x40U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o))) {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x19U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						} else {
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 0x18U;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
							= 
							((0U 
							  == 
							  (7U 
							   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							      >> 3U)))
							  ? 2U
							  : 0U);
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i 
							= 
							(7U 
							 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							    >> 9U));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
							= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
							= 
							(0x3fU 
							 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 2U;
						}
					    }
					}
				    } else {
					if ((0x3cU 
					     == (0xffU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 1U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						= (0xffU 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					} else {
					    if ((0x7cU 
						 == 
						 (0xffU 
						  & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o)))) {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o = 1U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i = 0x3fU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = 
						    (0xffffU 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o);
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz = 1U;
					    } else {
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu = 4U;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src 
						    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src = 0x3cU;
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst 
						    = 
						    (0x3fU 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o));
						vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz 
						    = 
						    (3U 
						     & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f_op_o) 
							>> 6U));
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->v__DOT__p_dat_i = ((0x2800U >= (0x3ffU 
					    & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					       >> 2U)))
			        ? vlTOPp->v__DOT__prog0__DOT__mem
			       [(0x3ffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					   >> 2U))]
			        : 0U);
}

void m68::_settle__TOP__23(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_settle__TOP__23\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst = (1U 
						   & (~ (IData)(vlTOPp->v__DOT__unused_rst_o)));
    // ALWAYS at ../rtl/k68_execute.v:322
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src = 0U;
    } else {
	if ((0x1fU == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
	    if ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
		    = ((0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
				       << 0x18U)) | 
		       ((0xff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
				      << 0x10U)) | 
			((0xff00U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
				     << 8U)) | (0xffU 
						& vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o))));
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
		    = (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			  == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			 & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			& (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
		        ? ((0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					   << 0x18U)) 
			   | ((0xff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					    << 0x10U)) 
			      | ((0xff00U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					     << 8U)) 
				 | (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o))))
		        : ((0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					   << 0x18U)) 
			   | ((0xff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					    << 0x10U)) 
			      | ((0xff00U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					     << 8U)) 
				 | (0xffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o)))));
	    } else {
		if ((1U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			= ((0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
					   << 0x10U)) 
			   | (0xffffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? ((0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					       << 0x10U)) 
			       | (0xffffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o))
			    : ((0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					       << 0x10U)) 
			       | (0xffffU & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o)));
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o
			    : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o);
		}
	    }
	} else {
	    if ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
		    = (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o) 
			  == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			 & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			& (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
		        ? (0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					  << 0x18U))
		        : (0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
					  << 0x18U)));
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
		    = (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			  == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			 & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			& (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
		        ? (0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					  << 0x18U))
		        : (0xff000000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					  << 0x18U)));
	    } else {
		if ((1U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_o))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? (0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					      << 0x10U))
			    : (0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o 
					      << 0x10U)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? (0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o 
					      << 0x10U))
			    : (0xffff0000U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o 
					      << 0x10U)));
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o
			    : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_src_o);
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o) 
			      == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)) 
			     & (0x3cU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) 
			    & (0x3fU != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o)))
			    ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o
			    : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dst_o);
		}
	    }
	}
    }
    // ALWAYS at ../rtl/k68_decode.v:1792
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__c_siz_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
    } else {
	if (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__brch) {
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
	} else {
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__c_siz_o 
		= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_siz_o;
	    if ((0x3cU == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) {
		if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
		    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
		    } else {
			if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
			} else {
			    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 1U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o 
					= (0xfffffffeU 
					   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o);
				    if ((1U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o)) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x27U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o 
					    = (0xfffffffeU 
					       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_pc_o);
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    }
				} else {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				}
			    } else {
				if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 1U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o 
					    = (0xfffffffeU 
					       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o);
					if ((1U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o)) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x27U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o 
						= (0xfffffffeU 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_pc_o);
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 1U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o 
					    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
			} else {
			    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
				    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				} else {
				    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 1U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o 
					    = (0xfffffffeU 
					       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o);
					if ((1U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o)) {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x27U;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o 
						= (0xfffffffeU 
						   & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_pc_o);
					} else {
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
					}
				    } else {
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
					vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
				    }
				}
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
			    }
			}
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
		    }
		}
	    } else {
		if ((0x3fU == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o = 0U;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_pc_o = 0U;
		    if ((0U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_alu_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o = 0x3fU;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o = 0U;
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o;
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_res_o;
		    }
		}
	    }
	}
    }
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we_dat = 
	((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we) 
	 & (0U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we_dat = 
	((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we) 
	 & (0U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__re_dat = 
	(((IData)(vlTOPp->v__DOT__dut0__DOT__a_cs_o) 
	  & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__a_we_o))) 
	 & (0U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__re_dat = 
	(((IData)(vlTOPp->v__DOT__dut0__DOT__b_cs_o) 
	  & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__b_we_o))) 
	 & (0U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)));
    vlTOPp->v__DOT__p_dat_i = ((0x2800U >= (0x3ffU 
					    & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					       >> 2U)))
			        ? vlTOPp->v__DOT__prog0__DOT__mem
			       [(0x3ffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					   >> 2U))]
			        : 0U);
    // ALWAYS at ../bench/k68_testram.v:56
    if (vlTOPp->v__DOT__we) {
	vlTOPp->v__DOT__data0__DOT____Vlvbound1 = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o;
	if ((0x2800U >= (0x3ffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
				   >> 2U)))) {
	    vlTOPp->v__DOT__data0__DOT__mem[(0x3ffU 
					     & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
						>> 2U))] 
		= vlTOPp->v__DOT__data0__DOT____Vlvbound1;
	}
    }
    // ALWAYS at ../rtl/k68_d2b.v:53
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb 
	= ((5U <= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			   >> 0x1cU))) ? ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
					  | (0xf0U 
					     & (((IData)(3U) 
						 + 
						 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						  >> 0x1cU)) 
						<< 4U)))
	    : ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
	       | (0xf0U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			   >> 0x18U))));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb 
	= ((5U <= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			   >> 0x18U))) ? ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
					  | (0xfU & 
					     ((IData)(3U) 
					      + (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						 >> 0x18U))))
	    : ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
	       | (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			  >> 0x18U))));
    // ALWAYS at ../rtl/k68_rox.v:56
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move 
	= (0x1fU & ((0x20U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
		     ? VL_NEGATE_I(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
		     : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src));
    // ALWAYS at ../rtl/k68_d2b.v:53
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba 
	= ((5U <= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			   >> 0x1cU))) ? ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
					  | (0xf0U 
					     & (((IData)(3U) 
						 + 
						 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						  >> 0x1cU)) 
						<< 4U)))
	    : ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
	       | (0xf0U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			   >> 0x18U))));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba 
	= ((5U <= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			   >> 0x18U))) ? ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
					  | (0xfU & 
					     ((IData)(3U) 
					      + (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						 >> 0x18U))))
	    : ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
	       | (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			  >> 0x18U))));
    // ALWAYS at ../rtl/k68_fetch.v:157
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__rdy 
	= ((~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o)) 
	   & (3U == (7U & ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_add_o 
			    >> 1U) - (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
				      >> 1U)))));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_rdy = 
	(1U & ((~ (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld) 
		    & (((3U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i) 
				      >> 3U))) | (4U 
						  == 
						  (7U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i) 
						      >> 3U)))) 
		       | ((3U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i) 
					>> 3U))) | 
			  (4U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i) 
					>> 3U)))))) 
		   & (0U != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt)))) 
	       | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o)));
}

void m68::_multiclk__TOP__24(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__24\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we_dat = 
	((IData)(vlTOPp->v__DOT__dut0__DOT__uart0__DOT__we) 
	 & (0U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we_dat = 
	((IData)(vlTOPp->v__DOT__dut0__DOT__uart1__DOT__we) 
	 & (0U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)));
    vlTOPp->v__DOT__dut0__DOT__uart0__DOT__re_dat = 
	(((IData)(vlTOPp->v__DOT__dut0__DOT__a_cs_o) 
	  & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__a_we_o))) 
	 & (0U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)));
    vlTOPp->v__DOT__dut0__DOT__uart1__DOT__re_dat = 
	(((IData)(vlTOPp->v__DOT__dut0__DOT__b_cs_o) 
	  & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__b_we_o))) 
	 & (0U == (0xffffU & vlTOPp->v__DOT__dut0__DOT__m_add_o)));
    // ALWAYS at ../bench/k68_testram.v:56
    if (vlTOPp->v__DOT__we) {
	vlTOPp->v__DOT__data0__DOT____Vlvbound1 = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__m_dat_o;
	if ((0x2800U >= (0x3ffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
				   >> 2U)))) {
	    vlTOPp->v__DOT__data0__DOT__mem[(0x3ffU 
					     & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
						>> 2U))] 
		= vlTOPp->v__DOT__data0__DOT____Vlvbound1;
	}
    }
    vlTOPp->v__DOT__m_dat_i = ((0x2800U >= (0x3ffU 
					    & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					       >> 2U)))
			        ? vlTOPp->v__DOT__data0__DOT__mem
			       [(0x3ffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					   >> 2U))]
			        : 0U);
}

void m68::_sequent__TOP__25(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__25\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/k68_d2b.v:53
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb 
	= ((5U <= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			   >> 0x1cU))) ? ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
					  | (0xf0U 
					     & (((IData)(3U) 
						 + 
						 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						  >> 0x1cU)) 
						<< 4U)))
	    : ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
	       | (0xf0U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			   >> 0x18U))));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb 
	= ((5U <= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			   >> 0x18U))) ? ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
					  | (0xfU & 
					     ((IData)(3U) 
					      + (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						 >> 0x18U))))
	    : ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
	       | (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
			  >> 0x18U))));
    // ALWAYS at ../rtl/k68_rox.v:56
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move 
	= (0x1fU & ((0x20U & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
		     ? VL_NEGATE_I(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
		     : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src));
    // ALWAYS at ../rtl/k68_d2b.v:53
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba 
	= ((5U <= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			   >> 0x1cU))) ? ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
					  | (0xf0U 
					     & (((IData)(3U) 
						 + 
						 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						  >> 0x1cU)) 
						<< 4U)))
	    : ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
	       | (0xf0U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			   >> 0x18U))));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba 
	= ((5U <= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			   >> 0x18U))) ? ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
					  | (0xfU & 
					     ((IData)(3U) 
					      + (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						 >> 0x18U))))
	    : ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
	       | (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
			  >> 0x18U))));
    // ALWAYS at ../rtl/k68_fetch.v:157
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__rdy 
	= ((~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o)) 
	   & (3U == (7U & ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__p_add_o 
			    >> 1U) - (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
				      >> 1U)))));
    // ALWAYS at ../rtl/k68_execute.v:400
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__alu = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c = 0U;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__alu 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o;
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    }
		}
	    } else {
		if ((1U & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o) 
			      >> 3U)))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
			= ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
			    : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
				    : ((0x3cU == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
				        ? 0x3cU : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))
						    ? 0x3cU
						    : 0U)))
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? 0x3cU : (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o))));
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
			    = ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
				    : 0x3cU));
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				= ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag)
				        ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
				        : 0x3fU) : (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o));
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				= ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? 0x3fU : (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o));
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c 
				    = (1U & ((VL_NEGATE_I((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
					      - (1U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						    >> 4U))) 
					     >> 8U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd 
				    = (0xffU & ((0x1ffU 
						 & VL_NEGATE_I((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb))) 
						- (1U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						      >> 4U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    }
		}
	    } else {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((1U & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o) 
				      >> 1U)))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c 
				    = (1U & ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba) 
					       + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
					      + (1U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						    >> 4U))) 
					     >> 8U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd 
				    = (0xffU & (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba) 
						 + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
						+ (1U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						      >> 4U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c 
				    = (1U & ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb) 
					       - (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
					      - (1U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						    >> 4U))) 
					     >> 8U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd 
				    = (0xffU & (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb) 
						 - (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
						- (1U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						      >> 4U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			}
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    }
		}
	    }
	}
    }
}

void m68::_multiclk__TOP__26(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__26\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_rdy = 
	(1U & ((~ (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld) 
		    & (((3U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i) 
				      >> 3U))) | (4U 
						  == 
						  (7U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i) 
						      >> 3U)))) 
		       | ((3U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i) 
					>> 3U))) | 
			  (4U == (7U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i) 
					>> 3U)))))) 
		   & (0U != (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt)))) 
	       | (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o)));
    // ALWAYS at ../rtl/k68_fetch.v:185
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__stall 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_rdy)));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx 
	= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld) 
	      & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_rdy)) 
	     & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip) 
		   >> 1U))) & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip))) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o)));
}

void m68::_settle__TOP__27(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_settle__TOP__27\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__m_dat_i = ((0x2800U >= (0x3ffU 
					    & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					       >> 2U)))
			        ? vlTOPp->v__DOT__data0__DOT__mem
			       [(0x3ffU & (vlTOPp->v__DOT__dut0__DOT__m_add_o 
					   >> 2U))]
			        : 0U);
    // ALWAYS at ../rtl/k68_execute.v:400
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__alu = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c = 0U;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__alu 
	    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o;
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    }
		}
	    } else {
		if ((1U & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o) 
			      >> 3U)))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
			= ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
			    : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
				    : ((0x3cU == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
				        ? 0x3cU : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))
						    ? 0x3cU
						    : 0U)))
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? 0x3cU : (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o))));
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    } else {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
			    = ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
				    : 0x3cU));
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				= ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag)
				        ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o)
				        : 0x3fU) : (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o));
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				= ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? 0x3fU : (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o));
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c 
				    = (1U & ((VL_NEGATE_I((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
					      - (1U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						    >> 4U))) 
					     >> 8U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd 
				    = (0xffU & ((0x1ffU 
						 & VL_NEGATE_I((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb))) 
						- (1U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						      >> 4U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    }
		}
	    } else {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			if ((1U & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o) 
				      >> 1U)))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c 
				    = (1U & ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba) 
					       + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
					      + (1U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						    >> 4U))) 
					     >> 8U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd 
				    = (0xffU & (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba) 
						 + (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb)) 
						+ (1U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						      >> 4U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c 
				    = (1U & ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb) 
					       - (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
					      - (1U 
						 & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						    >> 4U))) 
					     >> 8U));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd 
				    = (0xffU & (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb) 
						 - (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba)) 
						- (1U 
						   & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						      >> 4U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			}
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
			    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o;
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../rtl/k68_fetch.v:185
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__stall 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_rdy)));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx 
	= (((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_vld) 
	      & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__f2d_rdy)) 
	     & (~ ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip) 
		   >> 1U))) & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip))) 
	   & (~ (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_brch_o)));
    // ALWAYS at ../bench/../bench/k68_soc_test.v:92
    vlTOPp->v__DOT__dat_i = ((0x80000000U & vlTOPp->v__DOT__dut0__DOT__m_add_o)
			      ? vlTOPp->v__DOT__m_dat_i
			      : vlTOPp->v__DOT__p_dat_i);
    // ALWAYS at ../rtl/k68_b2d.v:53
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d 
	= ((5U <= (0xfU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd) 
			   >> 4U))) ? ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d)) 
				       | (0xf0U & (
						   (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd) 
						     >> 4U) 
						    - (IData)(3U)) 
						   << 4U)))
	    : ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d)) 
	       | (0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd))));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d 
	= ((5U <= (0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd)))
	    ? ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d)) 
	       | (0xfU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd) 
			  - (IData)(3U)))) : ((0xf0U 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d)) 
					      | (0xfU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd))));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx)
	    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i)
	    : 0x3fU);
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx)
	    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i)
	    : 0x3fU);
}

void m68::_multiclk__TOP__28(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__28\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../bench/../bench/k68_soc_test.v:92
    vlTOPp->v__DOT__dat_i = ((0x80000000U & vlTOPp->v__DOT__dut0__DOT__m_add_o)
			      ? vlTOPp->v__DOT__m_dat_i
			      : vlTOPp->v__DOT__p_dat_i);
}

void m68::_sequent__TOP__29(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_sequent__TOP__29\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/k68_b2d.v:53
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d 
	= ((5U <= (0xfU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd) 
			   >> 4U))) ? ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d)) 
				       | (0xf0U & (
						   (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd) 
						     >> 4U) 
						    - (IData)(3U)) 
						   << 4U)))
	    : ((0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d)) 
	       | (0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd))));
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d 
	= ((5U <= (0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd)))
	    ? ((0xf0U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d)) 
	       | (0xfU & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd) 
			  - (IData)(3U)))) : ((0xf0U 
					       & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d)) 
					      | (0xfU 
						 & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd))));
    // ALWAYS at ../rtl/k68_execute.v:587
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res = 0U;
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
		= ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
		    ? ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
		        ? ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src
				    : 0U) : 0U) : 0U)
		        : 0U) : ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				  ? 0U : ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
					   ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
					       ? ((1U 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
						   ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src
						   : 
						  (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst))
					       : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)
					   : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
					       ? ((1U 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
						   ? 
						  (0x80000000U 
						   | (0x7fffffffU 
						      & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst))
						   : 
						  ((0x3cU 
						    == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
						    ? 
						   (1U 
						    | (((0x3fU 
							 & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src) 
							+ 
							(0x3fU 
							 & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)) 
						       << 2U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))
						     ? 
						    (1U 
						     | (((0x3fU 
							  & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src) 
							 + 
							 (0x3fU 
							  & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)) 
							<< 2U))
						     : 0U)))
					       : ((1U 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
						   ? 
						  (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						   - (IData)(2U))
						   : 
						  ((0xffff0000U 
						    & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						       << 0x10U)) 
						   | (0xffffU 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 >> 0x10U))))))));
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
			    = ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
				        ? ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					    ? ((4U 
						& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					        ? (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0x80000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1fU)) 
						     | (0x7fffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 1U)))
						     : 
						    ((0xc0000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1eU)) 
						     | (0x3fffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 2U))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xe0000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1dU)) 
						     | (0x1fffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 3U)))
						     : 
						    ((0xf0000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1cU)) 
						     | (0xfffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 4U)))))
					        : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xf8000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1bU)) 
						     | (0x7ffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 5U)))
						     : 
						    ((0xfc000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1aU)) 
						     | (0x3ffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 6U))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfe000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x19U)) 
						     | (0x1ffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 7U)))
						     : 
						    ((0xff000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x18U)) 
						     | (0xffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 8U))))))
					    : ((4U 
						& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					        ? (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xff800000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x17U)) 
						     | (0x7fffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 9U)))
						     : 
						    ((0xffc00000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x16U)) 
						     | (0x3fffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xaU))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffe00000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x15U)) 
						     | (0x1fffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xbU)))
						     : 
						    ((0xfff00000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x14U)) 
						     | (0xfffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xcU)))))
					        : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfff80000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x13U)) 
						     | (0x7ffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xdU)))
						     : 
						    ((0xfffc0000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x12U)) 
						     | (0x3ffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xeU))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffe0000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x11U)) 
						     | (0x1ffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xfU)))
						     : 
						    ((0xffff0000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x10U)) 
						     | (0xffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x10U)))))))
				        : ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					    ? ((4U 
						& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					        ? (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffff8000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xfU)) 
						     | (0x7fffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x11U)))
						     : 
						    ((0xffffc000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xeU)) 
						     | (0x3fffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x12U))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffffe000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xdU)) 
						     | (0x1fffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x13U)))
						     : 
						    ((0xfffff000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xcU)) 
						     | (0xfffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x14U)))))
					        : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffff800U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xbU)) 
						     | (0x7ffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x15U)))
						     : 
						    ((0xfffffc00U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xaU)) 
						     | (0x3ffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x16U))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffffe00U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 9U)) 
						     | (0x1ffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x17U)))
						     : 
						    ((0xffffff00U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 8U)) 
						     | (0xffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x18U))))))
					    : ((4U 
						& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					        ? (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffffff80U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 7U)) 
						     | (0x7fU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x19U)))
						     : 
						    ((0xffffffc0U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 6U)) 
						     | (0x3fU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1aU))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffffffe0U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 5U)) 
						     | (0x1fU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1bU)))
						     : 
						    ((0xfffffff0U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 4U)) 
						     | (0xfU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1cU)))))
					        : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffffff8U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 3U)) 
						     | (7U 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1dU)))
						     : 
						    ((0xfffffffcU 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 2U)) 
						     | (3U 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1eU))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffffffeU 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 1U)) 
						     | (1U 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1fU)))
						     : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)))))
				    : 0U) : 0U);
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				       | ((IData)(1U) 
					  << (0x1fU 
					      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						 >> 0x18U))));
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = ((~ ((IData)(1U) 
					   << (0x1fU 
					       & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						  >> 0x18U)))) 
				       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res);
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = (((~ ((IData)(1U) 
					    << (0x1fU 
						& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   >> 0x18U)))) 
					& vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
				       | ((1U & (~ 
						 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						  >> 
						  (0x1fU 
						   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						      >> 0x18U))))) 
					  << (0x1fU 
					      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						 >> 0x18U))));
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst;
			    }
			}
		    }
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
			= ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag)
				        ? 0xffffffffU
				        : 0U) : 0U)
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag)
				        ? (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
					   + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)
				        : 0U) : ((0x3cU 
						  == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o))
						  ? 
						 ((0xff000000U 
						   & ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
							<< 0x18U) 
						       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
						      | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)) 
						  | (0xff0000U 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src))
						  : 
						 (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
						   << 0x18U) 
						  | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						     << 0x10U)))))
			    : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				       - vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
				    : (VL_NEGATE_I(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
				       - (1U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						>> 4U))))
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d) 
				       << 0x18U) : 
				   VL_NEGATE_I(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst))));
		}
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
		    = ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
		        ? ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? 0U : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
					 ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d) 
					    << 0x18U)
					 : ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
					     + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
					    + (1U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						>> 4U)))))
			    : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
				       + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)
				    : ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d) 
				       << 0x18U)) : 
			       ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				 ? ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				     - vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src) 
				    - (1U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					     >> 4U)))
				 : (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				    - vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src))))
		        : ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (~ vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)
				    : (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				       ^ vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src))
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
				    : (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				       | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)))
			    : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
					 << 0x18U) 
					| ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					   << 0x10U)) 
				       ^ vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
				    : ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
					 << 0x18U) 
					| ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					   << 0x10U)) 
				       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src))
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
					 << 0x18U) 
					| ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					   << 0x10U)) 
				       | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
				    : 0U))));
	    }
	}
    }
}

void m68::_multiclk__TOP__30(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__30\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx)
	    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i)
	    : 0x3fU);
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o 
	= ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx)
	    ? (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i)
	    : 0x3fU);
    // ALWAYS at ../rtl/k68_load.v:101
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 0U;
    } else {
	if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
	    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add = 0x3fU;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 0U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz = 0U;
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 0U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o;
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 0U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o;
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 1U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__c_siz_o;
	    }
	}
    }
}

void m68::_settle__TOP__31(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_settle__TOP__31\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/k68_execute.v:587
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res = 0U;
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
	    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
		= ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
		    ? ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
		        ? ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src
				    : 0U) : 0U) : 0U)
		        : 0U) : ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				  ? 0U : ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
					   ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
					       ? ((1U 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
						   ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src
						   : 
						  (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst))
					       : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)
					   : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
					       ? ((1U 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
						   ? 
						  (0x80000000U 
						   | (0x7fffffffU 
						      & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst))
						   : 
						  ((0x3cU 
						    == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o))
						    ? 
						   (1U 
						    | (((0x3fU 
							 & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src) 
							+ 
							(0x3fU 
							 & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)) 
						       << 2U))
						    : 
						   ((2U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o))
						     ? 
						    (1U 
						     | (((0x3fU 
							  & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src) 
							 + 
							 (0x3fU 
							  & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)) 
							<< 2U))
						     : 0U)))
					       : ((1U 
						   & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
						   ? 
						  (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						   - (IData)(2U))
						   : 
						  ((0xffff0000U 
						    & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						       << 0x10U)) 
						   | (0xffffU 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 >> 0x10U))))))));
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
			    = ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
				        ? ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					    ? ((4U 
						& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					        ? (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0x80000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1fU)) 
						     | (0x7fffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 1U)))
						     : 
						    ((0xc0000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1eU)) 
						     | (0x3fffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 2U))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xe0000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1dU)) 
						     | (0x1fffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 3U)))
						     : 
						    ((0xf0000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1cU)) 
						     | (0xfffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 4U)))))
					        : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xf8000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1bU)) 
						     | (0x7ffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 5U)))
						     : 
						    ((0xfc000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x1aU)) 
						     | (0x3ffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 6U))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfe000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x19U)) 
						     | (0x1ffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 7U)))
						     : 
						    ((0xff000000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x18U)) 
						     | (0xffffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 8U))))))
					    : ((4U 
						& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					        ? (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xff800000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x17U)) 
						     | (0x7fffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 9U)))
						     : 
						    ((0xffc00000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x16U)) 
						     | (0x3fffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xaU))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffe00000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x15U)) 
						     | (0x1fffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xbU)))
						     : 
						    ((0xfff00000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x14U)) 
						     | (0xfffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xcU)))))
					        : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfff80000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x13U)) 
						     | (0x7ffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xdU)))
						     : 
						    ((0xfffc0000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x12U)) 
						     | (0x3ffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xeU))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffe0000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x11U)) 
						     | (0x1ffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0xfU)))
						     : 
						    ((0xffff0000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0x10U)) 
						     | (0xffffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x10U)))))))
				        : ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					    ? ((4U 
						& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					        ? (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffff8000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xfU)) 
						     | (0x7fffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x11U)))
						     : 
						    ((0xffffc000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xeU)) 
						     | (0x3fffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x12U))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffffe000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xdU)) 
						     | (0x1fffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x13U)))
						     : 
						    ((0xfffff000U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xcU)) 
						     | (0xfffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x14U)))))
					        : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffff800U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xbU)) 
						     | (0x7ffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x15U)))
						     : 
						    ((0xfffffc00U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 0xaU)) 
						     | (0x3ffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x16U))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffffe00U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 9U)) 
						     | (0x1ffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x17U)))
						     : 
						    ((0xffffff00U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 8U)) 
						     | (0xffU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x18U))))))
					    : ((4U 
						& (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
					        ? (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffffff80U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 7U)) 
						     | (0x7fU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x19U)))
						     : 
						    ((0xffffffc0U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 6U)) 
						     | (0x3fU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1aU))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xffffffe0U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 5U)) 
						     | (0x1fU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1bU)))
						     : 
						    ((0xfffffff0U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 4U)) 
						     | (0xfU 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1cU)))))
					        : (
						   (2U 
						    & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffffff8U 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 3U)) 
						     | (7U 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1dU)))
						     : 
						    ((0xfffffffcU 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 2U)) 
						     | (3U 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1eU))))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move))
						     ? 
						    ((0xfffffffeU 
						      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							 << 1U)) 
						     | (1U 
							& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
							   >> 0x1fU)))
						     : vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)))))
				    : 0U) : 0U);
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				       | ((IData)(1U) 
					  << (0x1fU 
					      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						 >> 0x18U))));
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = ((~ ((IData)(1U) 
					   << (0x1fU 
					       & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						  >> 0x18U)))) 
				       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res);
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = (((~ ((IData)(1U) 
					    << (0x1fU 
						& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						   >> 0x18U)))) 
					& vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res) 
				       | ((1U & (~ 
						 (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
						  >> 
						  (0x1fU 
						   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						      >> 0x18U))))) 
					  << (0x1fU 
					      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
						 >> 0x18U))));
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst;
			    }
			}
		    }
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
			= ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag)
				        ? 0xffffffffU
				        : 0U) : 0U)
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag)
				        ? (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
					   + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)
				        : 0U) : ((0x3cU 
						  == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o))
						  ? 
						 ((0xff000000U 
						   & ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
							<< 0x18U) 
						       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
						      | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)) 
						  | (0xff0000U 
						     & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src))
						  : 
						 (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
						   << 0x18U) 
						  | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						     << 0x10U)))))
			    : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				       - vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
				    : (VL_NEGATE_I(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
				       - (1U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						>> 4U))))
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d) 
				       << 0x18U) : 
				   VL_NEGATE_I(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst))));
		}
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res 
		    = ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
		        ? ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? 0U : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
					 ? ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d) 
					    << 0x18U)
					 : ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
					     + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst) 
					    + (1U & 
					       ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
						>> 4U)))))
			    : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src 
				       + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)
				    : ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d) 
				       << 0x18U)) : 
			       ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				 ? ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				     - vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src) 
				    - (1U & ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					     >> 4U)))
				 : (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				    - vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src))))
		        : ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			    ? ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (~ vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst)
				    : (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				       ^ vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src))
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
				    : (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst 
				       | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)))
			    : ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
			        ? ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
					 << 0x18U) 
					| ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					   << 0x10U)) 
				       ^ vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
				    : ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
					 << 0x18U) 
					| ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					   << 0x10U)) 
				       & vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src))
			        : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_alu_o))
				    ? ((((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o) 
					 << 0x18U) 
					| ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o) 
					   << 0x10U)) 
				       | vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src)
				    : 0U))));
	    }
	}
    }
    // ALWAYS at ../rtl/k68_load.v:101
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 0U;
    } else {
	if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
	    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add = 0x3fU;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 0U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz = 0U;
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 0U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o;
	    }
	} else {
	    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt))) {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 0U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o;
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we = 1U;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__c_siz_o;
	    }
	}
    }
    // ALWAYS at ../rtl/k68_calc.v:75
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 0U;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o = 0U;
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip 
			    = ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))
			        ? 0U : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))
					 ? 0U : (((2U 
						   == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz)) 
						  | (3U 
						     == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz)))
						  ? 2U
						  : 1U)));
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o 
				    = (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					       >> 0x1cU));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 1U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 1U;
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip 
				= ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))
				    ? 2U : 1U);
			}
		    }
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o 
			= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
				   >> 0x1cU));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 1U;
		}
	    } else {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 1U;
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o = 1U;
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o = 1U;
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		}
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
		    = (0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add));
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o 
		    = (0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add));
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we;
	    }
	}
    }
}

void m68::_multiclk__TOP__32(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__32\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/k68_calc.v:75
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 0U;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o = 0U;
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip 
			    = ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))
			        ? 0U : ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))
					 ? 0U : (((2U 
						   == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz)) 
						  | (3U 
						     == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz)))
						  ? 2U
						  : 1U)));
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o 
				    = (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					       >> 0x1cU));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 1U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 1U;
			    }
			} else {
			    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip 
				= ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))
				    ? 2U : 1U);
			}
		    }
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o 
			= (0xfU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
				   >> 0x1cU));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 1U;
		}
	    } else {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip = 1U;
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o = 1U;
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o = 1U;
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
			= (8U | (7U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add)));
		}
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o 
		    = (0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add));
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o 
		    = (0xfU & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add));
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_we_o 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we;
	    }
	}
    }
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rs_dat_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem
	[(IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o)];
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem
	[(IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o)];
}

void m68::_settle__TOP__33(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_settle__TOP__33\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rs_dat_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem
	[(IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o)];
    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem
	[(IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o)];
    // ALWAYS at ../rtl/k68_calc.v:171
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o = 0U;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o = 0U;
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = 0U;
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = (((2U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz)) 
					| (3U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz)))
				        ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o
				        : (0xffffU 
					   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					      >> 0x10U)));
			    }
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
				    = ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
					+ ((0xffffff00U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								       >> 0x1fU)))) 
					       << 8U)) 
					   | (0xffU 
					      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
						 >> 0x10U)))) 
				       + (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rs_dat_o 
					  << (3U & 
					      (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					       >> 0x19U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
				    = (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
				       + ((0xffff0000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								      >> 0x1fU)))) 
					      << 0x10U)) 
					  | (0xffffU 
					     & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
						>> 0x10U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
				    = ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								   >> 0x1fU)))) 
					   << 0x10U)) 
				       | (0xffffU & 
					  (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					   >> 0x10U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
			    }
			}
		    }
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
			    + ((0xffffff00U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								       >> 0x1fU)))) 
					       << 8U)) 
			       | (0xffU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					   >> 0x10U)))) 
			   + (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rs_dat_o 
			      << (3U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					>> 0x19U))));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		}
	    } else {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
			   + ((0xffff0000U & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								      >> 0x1fU)))) 
					      << 0x10U)) 
			      | (0xffffU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					    >> 0x10U))));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
			   - (IData)(4U));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o 
			= (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
			   - (IData)(4U));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o 
			= ((IData)(4U) + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o);
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		}
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
	    }
	}
    }
}

void m68::_multiclk__TOP__34(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_multiclk__TOP__34\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl/k68_calc.v:171
    if (vlTOPp->v__DOT__unused_rst_o) {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o = 0U;
    } else {
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
	vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o = 0U;
	if ((0x20U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    if ((4U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat = 0U;
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea = 0U;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = (((2U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz)) 
					| (3U == (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz)))
				        ? vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o
				        : (0xffffU 
					   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					      >> 0x10U)));
			    }
			}
		    } else {
			if ((2U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
				    = ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
					+ ((0xffffff00U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								       >> 0x1fU)))) 
					       << 8U)) 
					   | (0xffU 
					      & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
						 >> 0x10U)))) 
				       + (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rs_dat_o 
					  << (3U & 
					      (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					       >> 0x19U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
				    = (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc 
				       + ((0xffff0000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								      >> 0x1fU)))) 
					      << 0x10U)) 
					  | (0xffffU 
					     & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
						>> 0x10U))));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o;
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
			    } else {
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
				    = ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								   >> 0x1fU)))) 
					   << 0x10U)) 
				       | (0xffffU & 
					  (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					   >> 0x10U)));
				vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
				    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
			    }
			}
		    }
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= ((vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
			    + ((0xffffff00U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								       >> 0x1fU)))) 
					       << 8U)) 
			       | (0xffU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					   >> 0x10U)))) 
			   + (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rs_dat_o 
			      << (3U & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					>> 0x19U))));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		}
	    } else {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
			   + ((0xffff0000U & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
								      >> 0x1fU)))) 
					      << 0x10U)) 
			      | (0xffffU & (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_imm_o 
					    >> 0x10U))));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
			   - (IData)(4U));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o 
			= (vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o 
			   - (IData)(4U));
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		if ((8U & (IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add))) {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o 
			= ((IData)(4U) + vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o);
		} else {
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o;
		    vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
			= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
		}
	    } else {
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o;
		vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o 
		    = vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o;
	    }
	}
    }
}

void m68::_eval(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_eval\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk)) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((~ (IData)(vlTOPp->rst)) & (IData)(vlTOPp->__Vclklast__TOP__rst)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlTOPp->arbclk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__arbclk_i)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk)) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst)))) {
	vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    if ((((IData)(vlTOPp->arbclk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__arbclk_i))) 
	 | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))))) {
	vlTOPp->_multiclk__TOP__13(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i)))) {
	vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    if (((IData)(vlTOPp->arbclk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__arbclk_i)))) {
	vlTOPp->_sequent__TOP__16(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__17(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk)) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst)))) {
	vlTOPp->_sequent__TOP__18(vlSymsp);
    }
    if ((((IData)(vlTOPp->arbclk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__arbclk_i))) 
	 | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))))) {
	vlTOPp->_multiclk__TOP__19(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i)))) {
	vlTOPp->_sequent__TOP__21(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i))))) {
	vlTOPp->_multiclk__TOP__22(vlSymsp);
    }
    if (((((IData)(vlTOPp->arbclk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__arbclk_i))) 
	  | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) 
	 | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i))))) {
	vlTOPp->_multiclk__TOP__24(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i)))) {
	vlTOPp->_sequent__TOP__25(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i))))) {
	vlTOPp->_multiclk__TOP__26(vlSymsp);
    }
    if (((((IData)(vlTOPp->arbclk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__arbclk_i))) 
	  | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) 
	 | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i))))) {
	vlTOPp->_multiclk__TOP__28(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i)))) {
	vlTOPp->_sequent__TOP__29(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i))))) {
	vlTOPp->_multiclk__TOP__30(vlSymsp);
	vlTOPp->_multiclk__TOP__32(vlSymsp);
	vlTOPp->_multiclk__TOP__34(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst 
	= vlTOPp->__VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
    vlTOPp->__Vclklast__TOP__arbclk_i = vlTOPp->arbclk_i;
    vlTOPp->__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i 
	= vlTOPp->v__DOT__dut0__DOT__cpu0__DOT__clk4_i;
    vlTOPp->__VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst;
}

void m68::_eval_initial(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_eval_initial\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->_initial__TOP__8(vlSymsp);
}

void m68::final() {
    VL_DEBUG_IF(VL_PRINTF("    m68::final\n"); );
    // Variables
    m68__Syms* __restrict vlSymsp = this->__VlSymsp;
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void m68::_eval_settle(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_eval_settle\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlTOPp->_settle__TOP__20(vlSymsp);
    vlTOPp->_settle__TOP__23(vlSymsp);
    vlTOPp->_settle__TOP__27(vlSymsp);
    vlTOPp->_settle__TOP__31(vlSymsp);
    vlTOPp->_settle__TOP__33(vlSymsp);
}

QData m68::_change_request(m68__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    m68::_change_request\n"); );
    m68* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst ^ vlTOPp->__Vchglast__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst));
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst ^ vlTOPp->__Vchglast__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst))) VL_PRINTF("	CHANGE: ../rtl/k68_sasc.v:32: v.dut0.uart0.nrst\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst 
	= vlTOPp->v__DOT__dut0__DOT__uart0__DOT__nrst;
    return __req;
}
