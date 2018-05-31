`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:15:37 09/23/2016 
// Design Name: 
// Module Name:    IDS_Lab01_Module2 
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
module IDS_Lab01_Module2(
    input c,
    input d,
    output led_
    );
	assign led_ = ~c & d;

endmodule
