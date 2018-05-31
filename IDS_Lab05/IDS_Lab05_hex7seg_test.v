`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:20:33 11/04/2016
// Design Name:   IDS_Lab05_hex7seg
// Module Name:   F:/PSD Workspace 2016/Lab5/IDS_Lab05/IDS_Lab05_hex7seg_test.v
// Project Name:  IDS_Lab05
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab05_hex7seg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IDS_Lab05_hex7seg_test;

	// Inputs
	reg [3:0] x;

	// Outputs
	wire [6:0] a_to_g;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab05_hex7seg uut (
		.x(x), 
		.a_to_g(a_to_g)
	);

	initial begin
		// Initialize Inputs
		x = 0;	#100;
		x = 1;	#100;
		x = 2;	#100;
		x = 3;	#100;
		x = 4;	#100;
		x = 5;	#100;
		x = 6;	#100;
		x = 7;	#100;
		x = 8;	#100;
		x = 9;	#100;
		x = 10;	#100;
		x = 11;	#100;
		x = 12;	#100;
		x = 13;	#100;
		x = 14;	#100;
		x = 15;	#100;
        
		// Add stimulus here

	end
      
endmodule

