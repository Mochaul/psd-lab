`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:34:30 09/16/2016
// Design Name:   PSD_Lab0
// Module Name:   F:/PSD_Lab0/PSD_Lab0_test.v
// Project Name:  PSD_Lab0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PSD_Lab0
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PSD_Lab0_test;

	// Inputs
	reg A;
	reg B;
	reg C;
	reg D;

	// Outputs
	wire G1;
	wire G2;
	wire G3;
	wire G4;

	// Instantiate the Unit Under Test (UUT)
	PSD_Lab0 uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.G1(G1), 
		.G2(G2), 
		.G3(G3), 
		.G4(G4)
	);

	initial begin
		// Initialize Inputs
		A = 0; B = 0; C = 0; D = 0;	#100;
		A = 0; B = 0; C = 0; D = 1;	#100;
		A = 0; B = 0; C = 1; D = 0;	#100;
		A = 0; B = 0; C = 1; D = 1;	#100;
		A = 0; B = 1; C = 0; D = 0;	#100;
		A = 0; B = 1; C = 0; D = 1;	#100;
		A = 0; B = 1; C = 1; D = 0;	#100;
		A = 0; B = 1; C = 1; D = 1;	#100;
		A = 1; B = 0; C = 0; D = 0;	#100;
		A = 1; B = 0; C = 0; D = 1;	#100;
		A = 1; B = 0; C = 1; D = 0;	#100;
		A = 1; B = 0; C = 1; D = 1;	#100;
		A = 1; B = 1; C = 0; D = 0;	#100;
		A = 1; B = 1; C = 0; D = 1;	#100;
		A = 1; B = 1; C = 1; D = 0;	#100;
		A = 1; B = 1; C = 1; D = 1;	#100;
        
		// Add stimulus here

	end
      
endmodule

