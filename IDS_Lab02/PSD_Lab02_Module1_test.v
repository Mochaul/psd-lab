`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:02:26 09/30/2016
// Design Name:   IDS_Lab02_Module1
// Module Name:   F:/PSD_Lab02/IDS_Lab02/PSD_Lab02_Module1_test.v
// Project Name:  IDS_Lab02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab02_Module1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PSD_Lab02_Module1_test;

	// Inputs
	reg W;
	reg X;
	reg Y;
	reg Z;

	// Outputs
	wire F;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab02_Module1 uut (
		.W(W), 
		.X(X), 
		.Y(Y), 
		.Z(Z), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		W = 0; X = 0; Y = 0; Z = 1;	#100;
		W = 0; X = 0; Y = 1; Z = 0;	#100;
		W = 0; X = 0; Y = 1; Z = 1;	#100;
		W = 0; X = 1; Y = 0; Z = 0;	#100;
		W = 0; X = 1; Y = 0; Z = 1;	#100;
		W = 0; X = 1; Y = 1; Z = 0;	#100;
		W = 0; X = 1; Y = 1; Z = 1;	#100;
		W = 1; X = 0; Y = 0; Z = 0;	#100;
		W = 1; X = 0; Y = 0; Z = 1;	#100;
		W = 1; X = 0; Y = 1; Z = 0;	#100;
		W = 1; X = 0; Y = 1; Z = 1;	#100;
		W = 1; X = 1; Y = 0; Z = 0;	#100;
		W = 1; X = 1; Y = 0; Z = 1;	#100;
		W = 1; X = 1; Y = 1; Z = 0;	#100;
		W = 1; X = 1; Y = 1; Z = 1;	#100;
        
		// Add stimulus here

	end
      
endmodule

