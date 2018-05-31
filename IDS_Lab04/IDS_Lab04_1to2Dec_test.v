`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:13:46 10/13/2016
// Design Name:   IDS_Lab04_1to2Dec
// Module Name:   D:/PSD/IDS_Lab04/IDS_Lab04_1to2Dec_test.v
// Project Name:  IDS_Lab04
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab04_1to2Dec
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IDS_Lab04_1to2Dec_test;

	// Inputs
	reg A;

	// Outputs
	wire D0;
	wire D1;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab04_1to2Dec uut (
		.A(A), 
		.D0(D0), 
		.D1(D1)
	);

	initial begin
		// Initialize Inputs
		A = 0;	#100;
		A = 1;	#100;
        
		// Add stimulus here

	end
      
endmodule

