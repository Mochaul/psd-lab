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
module IDS_Lab06(
    input CLK, RESET,
    output wire [6:0] a_to_g,
    output wire [3:0] anode,
    output wire dp
    );
	 wire [3:0]x;
    wire [2:0]xt;	
	 
assign anode = 4'b0000;
assign dp = 1;
assign x[3]=0;                 

assign xt[2]= x[0] & x[1];
assign xt[1]= x[0] & ~x[1] | x[1] & ~x[0];
assign xt[0]= ~x[2] & ~x[0];

IDS_Lab05_hex7seg D4 (.x(x),	.a_to_g(a_to_g));

dff_v U1(.CLK(CLK),.RESET(RESET),.D(xt[2]),.Q(x[2]));

dff_v U2(.CLK(CLK),.RESET(RESET),.D(xt[1]),.Q(x[1]));

dff_v U3(.CLK(CLK),.RESET(RESET),.D(xt[0]),.Q(x[0]));

endmodule