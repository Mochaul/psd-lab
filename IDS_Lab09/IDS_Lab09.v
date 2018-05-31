`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:07:27 12/02/2016 
// Design Name: 
// Module Name:    IDS_Lab09 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module IDS_Lab09(
	 input Shift,
	 input Load, 
	 input Serial_input,
	 input Clock,
	 input D0,
	 input D1,
	 input D2,
	 input D3,
	 input D4,
	 inout out0,
	 inout out1,
	 inout out2,
	 inout out3,
	 inout out4
	 );

	 
	 wire d0,d1,d2,d3,d4;

	 MUX4to1 m0 (.D0(out0), .D1(D0), .D2(Serial_input), .D3(Serial_input), .select0(Shift), .select1(Load), .Y(d0));
	 dff_v u0 (.CLK(Clock), .D(d0), .Q(out0));
	 MUX4to1 m1 (.D0(out1), .D1(D1), .D2(out0), .D3(out0), .select0(Shift), .select1(Load), .Y(d1));
	 dff_v u1 (.CLK(Clock), .D(d1), .Q(out1));
	 MUX4to1 m2 (.D0(out2), .D1(D2), .D2(out1), .D3(out1), .select0(Shift), .select1(Load), .Y(d2));
	 dff_v u2 (.CLK(Clock), .D(d2), .Q(out2));
	 MUX4to1 m3 (.D0(out3), .D1(D3), .D2(out2), .D3(out2), .select0(Shift), .select1(Load), .Y(d3));
	 dff_v u3 (.CLK(Clock), .D(d3), .Q(out3));
	 MUX4to1 m4 (.D0(out4), .D1(D4), .D2(out3), .D3(out3), .select0(Shift), .select1(Load), .Y(d4));
	 dff_v u4 (.CLK(Clock), .D(d4), .Q(out4));
	 	 
endmodule
