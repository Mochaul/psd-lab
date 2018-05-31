`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:40:34 10/07/2016
// Design Name:   IDS_Lab03
// Module Name:   F:/PSD Workspace 2016/IDS_Lab03/IDS_Lab03_test.v
// Project Name:  IDS_Lab03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab03
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IDS_Lab03_test;

	// Inputs
	reg A;
	reg B;
	reg C;
	reg D;

	// Outputs
	wire W;
	wire X;
	wire Y;
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab03 uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.W(W), 
		.X(X), 
		.Y(Y), 
		.Z(Z)
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
        
		// Add stimulus here

	end
      
endmodule

