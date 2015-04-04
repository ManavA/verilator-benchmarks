// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _m68_H_
#define _m68_H_

#include "verilated.h"
class m68__Syms;

//----------

VL_MODULE(m68) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(arbclk_i,0,0);
    //char	__VpadToAlign3[1];
    VL_OUT(sum,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__clk4_i,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__nrst,0,0);
    VL_SIG8(v__DOT__rts,1,0);
    VL_SIG8(v__DOT__tx,1,0);
    VL_SIG8(v__DOT__we,0,0);
    VL_SIG8(v__DOT__unused_rst_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__a_dat_i,7,0);
    VL_SIG8(v__DOT__dut0__DOT__b_dat_i,7,0);
    VL_SIG8(v__DOT__dut0__DOT__a_cs_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__b_cs_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__a_we_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__b_we_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__m_cs_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__m_we_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_alu_o,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_brch_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__f2d_vld,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__f2d_rdy,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_skip_o,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_add_a_o,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_add_b_o,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_add_c_o,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_add_src_o,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_add_dst_o,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_add_a_i,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_add_b_i,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_siz_o,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__d_siz_a_o,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__a_skip_o,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__a_rs_add_o,3,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__a_rt_add_o,3,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__a_rd_add_o,3,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__a_we_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__e_ccr_o,7,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__e_ssr_o,7,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__e_add_c_o,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__e_alu_o,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__e_siz_o,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__c_siz_o,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__clkgen0__DOT__cnt,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__rdy,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__stall,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skip,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__we,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__add,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__siz,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__add_c,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__alu,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2ba,7,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__d2bb,7,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__b2d,7,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__flag,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__bcd,7,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__x,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__c,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__rox0__DOT__move,4,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_add,3,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__we,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__skip,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__alu,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__siz,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_src,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__add_dst,5,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__brch,0,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__regfile_ilock_cnt,1,0);
    VL_SIG8(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__valid_trx,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__dout,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sio_ce,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sio_ce_x4,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__brg0,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__brg1,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__we,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__we_dat,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__re_dat,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txd_p,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__load_e,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_bit_cnt,3,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_s,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxd_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_bit_cnt,3,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_go,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_valid_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_we,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxf_full,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__txf_empty_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__shift_en_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__change,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r1,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_r2,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_state,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__gb,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__gb,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__ps_clr,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_clr,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__cnt,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__sio_ce_x4_t,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__dout,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sio_ce,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sio_ce_x4,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__brg0,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__brg1,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__we,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__we_dat,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__re_dat,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txd_p,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__load_e,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_bit_cnt,3,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_s,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxd_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_bit_cnt,3,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_go,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_valid_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_we,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxf_full,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__txf_empty_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__shift_en_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__change,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r1,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_r2,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_state,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__gb,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__gb,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__ps_clr,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt,7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_clr,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__cnt,1,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_r,0,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__sio_ce_x4_t,0,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__p_dat_i,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__f_op_o,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__immh_o,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__imml_o,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpa,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpb,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpc,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__tmpd,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__s_dat_i,15,0);
    VL_SIG16(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__op,15,0);
    VL_SIG16(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__hold_reg,9,0);
    VL_SIG16(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rxr,9,0);
    VL_SIG16(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__hold_reg,9,0);
    VL_SIG16(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rxr,9,0);
    VL_SIG(v__DOT__p_dat_i,31,0);
    VL_SIG(v__DOT__m_dat_i,31,0);
    VL_SIG(v__DOT__dat_i,31,0);
    VL_SIG(v__DOT__dut0__DOT__m_add_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__m_dat_i,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__p_add_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__m_add_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__m_dat_i,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__m_dat_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__d_src_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__d_dst_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__d_pc_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__d_dat_c_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__d_imm_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__a_rd_dat_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__e_pc_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__d_alu_pc_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__r_rs_dat_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__r_rt_dat_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__e_res_o,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__pc,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__ea,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__dat,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__src,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__dst,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__execute0__DOT__res,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__w_dat,31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__decode0__DOT__src,31,0);
    //char	__VpadToAlign324[4];
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank0__DOT__mem[16],31,0);
    VL_SIG(v__DOT__dut0__DOT__cpu0__DOT__regbank0__DOT__bank1__DOT__mem[16],31,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__mem[4],7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__mem[4],7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__mem[4],7,0);
    VL_SIG8(v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__mem[4],7,0);
    VL_SIG(v__DOT__prog0__DOT__mem[10241],31,0);
    //char	__VpadToAlign41436[4];
    VL_SIG(v__DOT__data0__DOT__mem[10241],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_sio_ce_d[8],0,0);
    static VL_ST_SIG8(__Vtable1_v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__dpll_next_state[8],1,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_sio_ce_d[8],0,0);
    static VL_ST_SIG8(__Vtable2_v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__dpll_next_state[8],1,0);
    VL_SIG8(v__DOT__dut0__DOT____Vcellout__uart0__rts_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT____Vcellout__uart0__tx_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT____Vcellout__uart1__rts_o,0,0);
    VL_SIG8(v__DOT__dut0__DOT____Vcellout__uart1__tx_o,0,0);
    VL_SIG8(__Vtableidx1,2,0);
    VL_SIG8(__Vtableidx2,2,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__unify0__DOT__uni_cnt,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__mem_cnt,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__m_cnt,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_skip_o,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipa,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__addmode0__DOT__skipb,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__fetch0__DOT__cpu_cnt,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__wp,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__tx_fifo__DOT__rp,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__wp,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_top0__DOT__rx_fifo__DOT__rp,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart0__DOT__sasc_brg0__DOT__br_cnt,7,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_brg0__DOT__br_cnt,7,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__wp,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__tx_fifo__DOT__rp,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__wp,1,0);
    VL_SIG8(__Vdly__v__DOT__dut0__DOT__uart1__DOT__sasc_top0__DOT__rx_fifo__DOT__rp,1,0);
    VL_SIG8(__VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst,0,0);
    VL_SIG8(__Vclklast__TOP__rst,0,0);
    VL_SIG8(__Vclklast__TOP__arbclk_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__dut0__DOT__cpu0__DOT__clk4_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__DOT__dut0__DOT__uart0__DOT__nrst,0,0);
    //char	__VpadToAlign82438[2];
    VL_SIG(v__DOT__data0__DOT____Vlvbound1,31,0);
    VL_SIG(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_a_o,31,0);
    VL_SIG(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_b_o,31,0);
    VL_SIG(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__a_dat_c_o,31,0);
    VL_SIG(__Vdly__v__DOT__dut0__DOT__cpu0__DOT__m_add_o,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    m68__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    m68& operator= (const m68&);	///< Copying not allowed
    m68(const m68&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    m68(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~m68();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(m68__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(m68__Syms* symsp, bool first);
  private:
    static QData	_change_request(m68__Syms* __restrict vlSymsp);
  public:
    static void	_eval(m68__Syms* __restrict vlSymsp);
    static void	_eval_initial(m68__Syms* __restrict vlSymsp);
    static void	_eval_settle(m68__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(m68__Syms* __restrict vlSymsp);
    static void	_initial__TOP__8(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__13(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__19(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__22(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__24(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__26(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__28(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__30(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__32(m68__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__34(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__14(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__16(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__17(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__18(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__21(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__25(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__29(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(m68__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__9(m68__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(m68__Syms* __restrict vlSymsp);
    static void	_settle__TOP__15(m68__Syms* __restrict vlSymsp);
    static void	_settle__TOP__20(m68__Syms* __restrict vlSymsp);
    static void	_settle__TOP__23(m68__Syms* __restrict vlSymsp);
    static void	_settle__TOP__27(m68__Syms* __restrict vlSymsp);
    static void	_settle__TOP__31(m68__Syms* __restrict vlSymsp);
    static void	_settle__TOP__33(m68__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(m68__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
