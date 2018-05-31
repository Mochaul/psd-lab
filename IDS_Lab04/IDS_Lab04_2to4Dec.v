`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:23:58 10/13/2016 
// Design Name: 
// Module Name:    IDS_Lab04_2to4Dec 
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
module IDS_Lab04_2to4Dec(
    input A0,
    input A1,
    output D0,
    output D1,
    output D2,
    output D3
    );
	 
	 wire a0a, a0b, a1a, a1b;

IDS_Lab04_1to2Dec U1
(
	.A(A0),
	.D0(a0a),
	.D1(a0b)
);

IDS_Lab04_1to2Dec U2
(
	.A(A1),
	.D0(a1a),
	.D1(a1b)
);

and
	g0(D0, a1a, a0a),
	g1(D1, a1a, a0b),
	g2(D2, a1b, a0a),
	g3(D3, a1b, a0b);
	
endmodule
