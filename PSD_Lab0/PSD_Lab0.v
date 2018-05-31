`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:06 09/16/2016 
// Design Name: 
// Module Name:    PSD_Lab0 
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
module PSD_Lab0(
    input A,
    input B,
    input C,
    input D,
    output G1,
    output G2,
    output G3,
    output G4
    );
assign G4 = A;
assign G3 = A ^ B;
assign G2 = B ^ C;
assign G1 = C ^ D;

endmodule
