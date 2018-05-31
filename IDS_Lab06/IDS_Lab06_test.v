`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:58:03 11/11/2016
// Design Name:   IDS_Lab05_hex7seg_top
// Module Name:   F:/PSD Workspace 2016/IDS_Lab06/IDS_Lab06_test.v
// Project Name:  IDS_Lab06
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab05_hex7seg_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IDS_Lab06_test;

	// Inputs
	reg [3:0] sw;

	// Outputs
	wire [6:0] a_to_g;
	wire [3:0] anode;
	wire dp;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab05_hex7seg_top uut (
		.sw(sw), 
		.a_to_g(a_to_g), 
		.anode(anode), 
		.dp(dp)
	);

	initial begin
		// Initialize Inputs
		CLK = 1; RESET = 1;	#50; CLK = 0; RESET = 0;	#100;
		CLK = 1; RESET = 1;	#50; CLK = 0; RESET = 0;	#100;
		CLK = 1; RESET = 1;	#50; CLK = 0; RESET = 0;	#100;
		CLK = 1; RESET = 1;	#50; CLK = 0; RESET = 0;	#100;
		
		// Add stimulus here

	end
      
endmodule

