`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:11:40 09/30/2016 
// Design Name: 
// Module Name:    IDS_Lab02_Module1 
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
module IDS_Lab02_Module1(
    input W,
    input X,
    input Y,
    input Z,
    output F
    );
assign F = (~W & X & ~Y) | (W & ~X & ~Y & Z) | (W & X &Y) | (~W & X & Y);

endmodule