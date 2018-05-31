`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:59:09 11/04/2016 
// Design Name: 
// Module Name:    IDS_Lab05_hex7seg 
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
module IDS_Lab05_hex7seg(
    input wire [3:0] x,
    output wire [6:0] a_to_g
    );
	 
assign a_to_g[6] = (x[0] & ~x[1] & ~x[2] & ~x[3]) | (~x[0] & ~x[1] & x[2] & ~x[3]) | (x[0] & ~x[1] & x[2] & x[3]) | (x[0] & x[1] & ~x[2] & x[3]);
assign a_to_g[5] = x[0] & ~x[1] & x[2] & ~x[3] | ~x[0] & x[1] & x[2] | x[0] & x[1] & x[3] | ~x[0] & x[2] & x[3];
assign a_to_g[4] = (~x[0] & x[1] & ~x[2] & ~x[3]) | (x[1] & x[2] & x[3]) | (~x[0] & x[2] & x[3]);
assign a_to_g[3] = (x[0] & ~x[1] & ~x[2] & ~x[3]) | (~x[0] & ~x[1] & x[2] & ~x[3]) | (~x[0] & x[1] & ~x[2] & x[3]) | (x[0] & x[1] & x[2]);
assign a_to_g[2] = (~x[3] & x[0]) | (~x[3] & x[2] & ~x[1]) | (~x[2] & ~x[1] & x[0]);
assign a_to_g[1] = (x[0] & ~x[2] & ~x[3]) | (x[1] & ~x[2] & ~x[3]) | (x[0] & x[1] & ~x[3]) | (x[0] & ~x[1] & x[2] & x[3]);
assign a_to_g[0] = (~x[1] & ~x[2] & ~x[3]) | (x[0] & x[1] & x[2] & ~x[3]) | (~x[0] & ~x[1] & x[2] & x[3]);

endmodule
