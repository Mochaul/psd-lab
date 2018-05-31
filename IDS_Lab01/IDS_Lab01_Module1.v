`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:42 09/23/2016 
// Design Name: 
// Module Name:    IDS_Lab01_Module1 
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
module IDS_Lab01_Module1(
    input a,
    input b,
    output and_,
    output nand_,
    output nor_,
    output or_,
    output xnor_,
    output xor_
    );

	assign and_ = a & b;
	assign nand_ = (a &~ b);
	assign nor_ = (a |~ b);
	assign or_ = a | b;
	assign xnor_ = a ^~ b;
	assign xor_ = a ^ b;
endmodule
