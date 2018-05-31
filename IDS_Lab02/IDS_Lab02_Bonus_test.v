`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:39:02 09/30/2016
// Design Name:   IDS_Lab02_Bonus
// Module Name:   F:/PSD_Lab02/IDS_Lab02/IDS_Lab02_Bonus_test.v
// Project Name:  IDS_Lab02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab02_Bonus
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IDS_Lab02_Bonus_test;

	// Inputs
	reg A;
	reg B;
	reg C;
	reg Pin;
	reg X;
	reg Y;
	reg Z;

	// Outputs
	wire Ax;
	wire Bx;
	wire Cx;
	wire Pout;
	wire E;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab02_Bonus uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.Pin(Pin), 
		.X(X), 
		.Y(Y), 
		.Z(Z), 
		.Ax(Ax), 
		.Bx(Bx), 
		.Cx(Cx), 
		.Pout(Pout), 
		.E(E)
	);

	initial begin
		// Initialize Inputs
		A = 0; B = 0; C = 0;	#100;
		A = 0; B = 0; C = 1;	#100;
		A = 0; B = 1; C = 0;	#100;
		A = 0; B = 1; C = 1;	#100;
		A = 1; B = 0; C = 0;	#100;
		A = 1; B = 0; C = 1;	#100;
		A = 1; B = 1; C = 0;	#100;
		A = 1; B = 1; C = 1;	#100;
		
		Pin = 0; X = 0; Y = 0; Z = 1;	#100;
		Pin = 0; X = 0; Y = 1; Z = 0;	#100;
		Pin = 0; X = 0; Y = 1; Z = 1;	#100;
		Pin = 0; X = 1; Y = 0; Z = 0;	#100;
		Pin = 0; X = 1; Y = 0; Z = 1;	#100;
		Pin = 0; X = 1; Y = 1; Z = 0;	#100;
		Pin = 0; X = 1; Y = 1; Z = 1;	#100;
		Pin = 1; X = 0; Y = 0; Z = 0;	#100;
		Pin = 1; X = 0; Y = 0; Z = 1;	#100;
		Pin = 1; X = 0; Y = 1; Z = 0;	#100;
		Pin = 1; X = 0; Y = 1; Z = 1;	#100;
		Pin = 1; X = 1; Y = 0; Z = 0;	#100;
		Pin = 1; X = 1; Y = 0; Z = 1;	#100;
		Pin = 1; X = 1; Y = 1; Z = 0;	#100;
		Pin = 1; X = 1; Y = 1; Z = 1;	#100;
        
		// Add stimulus here

	end
      
endmodule

