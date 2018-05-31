`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:44:29 09/23/2016
// Design Name:   IDS_Lab01_Module1
// Module Name:   D:/ISEMAAP/IDS_Lab01/PSD_Lab01_Module1_test.v
// Project Name:  IDS_Lab01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab01_Module1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PSD_Lab01_Module1_test;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire and_;
	wire nand_;
	wire nor_;
	wire or_;
	wire xnor_;
	wire xor_;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab01_Module1 uut (
		.a(a), 
		.b(b), 
		.and_(and_), 
		.nand_(nand_), 
		.nor_(nor_), 
		.or_(or_), 
		.xnor_(xnor_), 
		.xor_(xor_)
	);

	initial begin
		// Initialize Inputs
		a = 0; b = 0; #100;
		a = 1; b = 0; #100;
		a = 0; b = 1; #100;
		a = 1; b = 1; #100;
		
		// Add stimulus here

	end
      
endmodule

