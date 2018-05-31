`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:35 11/04/2016 
// Design Name: 
// Module Name:    IDS_Lab05_hex7seg_top 
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
module IDS_Lab07(
    input wire CLK, RESET,
	 input X,
    output wire [6:0] a_to_g,
    output wire [3:0] anode,
    output wire dp,
	 output Y
    );
	 wire [3:0]a;
	 wire ja, ka, jb, kb;
	 
	 assign jb = X;
	 assign kb = a[0] ^ X;
	 
	 assign ja = a[1] & ~X;
	 assign ka = a[1] & X;
	  
	 jk_v D1(.CLK(CLK), .RESET(RESET), .J(ja), .K(ka), .Q(a[1]));
	 jk_v D2(.CLK(CLK), .RESET(RESET), .J(jb), .K(kb), .Q(a[0]));
	 
assign anode = 4'b0000;
assign dp = 1;
assign a[3]= 0;
assign a[2] =0;  
assign Y = ~a[0] & X ;              

IDS_Lab05_hex7seg D4 (.x(a),	.a_to_g(a_to_g));

endmodule