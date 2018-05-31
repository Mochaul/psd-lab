`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:22:37 09/23/2016
// Design Name:   IDS_Lab01_Module2
// Module Name:   D:/ISEMAAP/IDS_Lab01/PSD_Lab01_Module2_test.v
// Project Name:  IDS_Lab01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab01_Module2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PSD_Lab01_Module2_test;

	// Inputs
	reg c;
	reg d;

	// Outputs
	wire led_;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab01_Module2 uut (
		.c(c), 
		.d(d), 
		.led_(led_)
	);

	initial begin
		// Initialize Inputs
		c = 0; d = 0;	#100;
		c = 0; d = 1;	#100;
		c = 1; d = 0;	#100;
		c = 1; d = 1;	#100;
        
		// Add stimulus here

	end
      
endmodule

