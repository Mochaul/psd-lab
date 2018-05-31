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
module dff_v(CLK, D, Q);
	input CLK, D;
	output Q;
	reg Q;
	 
always @(posedge CLK)
begin
	Q <= D;
end
endmodule
