`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:55:47 10/13/2016 
// Design Name: 
// Module Name:    IDS_Lab04_1to2Dec 
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
module IDS_Lab04_1to2Dec(
    input A,
    output D0,
    output D1
    );
	 
assign D0 = ~A;
assign D1 = A;

endmodule
