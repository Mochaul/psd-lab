`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:15:18 10/13/2016
// Design Name:   IDS_Lab04_1to2DecEnable
// Module Name:   F:/PSD/IDS_Lab04/IDS_Lab04_1to2DecEnable_test.v
// Project Name:  IDS_Lab04
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab04_1to2DecEnable
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IDS_Lab04_1to2DecEnable_test;

	// Inputs
	reg A;
	reg E;

	// Outputs
	wire D0;
	wire D1;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab04_1to2DecEnable uut (
		.A(A), 
		.E(E), 
		.D0(D0), 
		.D1(D1)
	);

	initial begin
		// Initialize Inputs
		A = 0; E = 0;	#100;
		A = 0; E = 1;	#100;
		A = 1; E = 0;	#100;
		A = 1; E = 1;	#100;
        
		// Add stimulus here

	end
      
endmodule

