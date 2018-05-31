`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:29:02 11/11/2016 
// Design Name: 
// Module Name:    dff_v 
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
module dff_v(CLK, RESET, D, Q);
	input CLK, RESET, D;
	output Q;
	reg Q;
	 
always @(posedge CLK or posedge RESET)
begin
	if(RESET)
		Q <= 0;
	else
		Q <= D;
end
endmodule
