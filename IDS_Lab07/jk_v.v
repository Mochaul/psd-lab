`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:34:34 11/18/2016 
// Design Name: 
// Module Name:    jk_v 
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
module jk_v(CLK,RESET,J,K,Q);
	input RESET,CLK,J,K;
	output Q;
	wire D;

	assign D = (J & ~Q) | (~K & Q);
	dff_v A1(.CLK(CLK), .RESET(RESET), .D(D), .Q(Q));

endmodule
