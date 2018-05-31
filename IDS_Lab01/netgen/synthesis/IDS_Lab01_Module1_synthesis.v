////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: IDS_Lab01_Module1_synthesis.v
// /___/   /\     Timestamp: Fri Sep 23 15:02:42 2016
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim IDS_Lab01_Module1.ngc IDS_Lab01_Module1_synthesis.v 
// Device	: xc3s100e-4-cp132
// Input file	: IDS_Lab01_Module1.ngc
// Output file	: D:\ISEMAAP\IDS_Lab01\netgen\synthesis\IDS_Lab01_Module1_synthesis.v
// # of Modules	: 1
// Design Name	: IDS_Lab01_Module1
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module IDS_Lab01_Module1 (
  nand_, a, b, xnor_, nor_, and_, xor_, or_
);
  output nand_;
  input a;
  input b;
  output xnor_;
  output nor_;
  output and_;
  output xor_;
  output or_;
  wire a_IBUF_1;
  wire and__OBUF_3;
  wire b_IBUF_5;
  wire nand__OBUF_7;
  wire nor__OBUF_9;
  wire or__OBUF_11;
  wire xnor__OBUF_13;
  wire xor__OBUF_15;
  LUT2 #(
    .INIT ( 4'hE ))
  or_1 (
    .I0(a_IBUF_1),
    .I1(b_IBUF_5),
    .O(or__OBUF_11)
  );
  LUT2 #(
    .INIT ( 4'hD ))
  nor_1 (
    .I0(b_IBUF_5),
    .I1(a_IBUF_1),
    .O(nor__OBUF_9)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  nand_1 (
    .I0(a_IBUF_1),
    .I1(b_IBUF_5),
    .O(nand__OBUF_7)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  and_1 (
    .I0(a_IBUF_1),
    .I1(b_IBUF_5),
    .O(and__OBUF_3)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  Mxor_xor__Result1 (
    .I0(b_IBUF_5),
    .I1(a_IBUF_1),
    .O(xor__OBUF_15)
  );
  IBUF   a_IBUF (
    .I(a),
    .O(a_IBUF_1)
  );
  IBUF   b_IBUF (
    .I(b),
    .O(b_IBUF_5)
  );
  OBUF   nand__OBUF (
    .I(nand__OBUF_7),
    .O(nand_)
  );
  OBUF   xnor__OBUF (
    .I(xnor__OBUF_13),
    .O(xnor_)
  );
  OBUF   nor__OBUF (
    .I(nor__OBUF_9),
    .O(nor_)
  );
  OBUF   and__OBUF (
    .I(and__OBUF_3),
    .O(and_)
  );
  OBUF   xor__OBUF (
    .I(xor__OBUF_15),
    .O(xor_)
  );
  OBUF   or__OBUF (
    .I(or__OBUF_11),
    .O(or_)
  );
  LUT2 #(
    .INIT ( 4'h9 ))
  xnor_1 (
    .I0(b_IBUF_5),
    .I1(a_IBUF_1),
    .O(xnor__OBUF_13)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

