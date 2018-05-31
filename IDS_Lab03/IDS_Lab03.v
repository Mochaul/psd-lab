`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:16:32 10/07/2016 
// Design Name: 
// Module Name:    IDS_Lab03 
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
module IDS_Lab03(
    input A,
    input B,
    input C,
    input D,
    output W,
    output X,
    output Y,
    output Z
    );
assign W = A | B | (C & D);
assign X = (~B & ~C) | (~B & ~D) | (B & D & C);
assign Y = (D & ~C) | (~D & C);
assign Z = ~D;

endmodule
