`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:11:43 10/13/2016 
// Design Name: 
// Module Name:    IDS_Lab04_1to2DecEnable 
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
module IDS_Lab04_1to2DecEnable(
    input A,
    input E,
    output D0,
    output D1
    );

assign D0 = ~A & E;
assign D1 = A & E;

endmodule
