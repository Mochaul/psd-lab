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
module IDS_Lab05_hex7seg_top(
    input [3:0] sw,
    output [6:0] a_to_g,
    output [3:0] anode,
    output dp
    );

assign anode = 4'b0000;
assign dp = 1;

IDS_Lab05_hex7seg D4 (.x(sw),
						.a_to_g(a_to_g)
);

endmodule
