`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:57 09/30/2016 
// Design Name: 
// Module Name:    IDS_Lab02_Bonus 
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
module IDS_Lab02_Bonus(
    input A,
    input B,
    input C,
    input Pin,
    input X,
    input Y,
    input Z,
    output Ax,
    output Bx,
	 output Cx,
    output Pout,
    output E
    );
assign Ax = A;
assign Bx = B;
assign Cx = C;
assign Pout = ~(A ^ B ^ C);

assign E = ~(Pin ^ X ^ Y ^ Z);

endmodule
