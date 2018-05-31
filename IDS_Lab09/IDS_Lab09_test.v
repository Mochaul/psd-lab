`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:34:54 12/02/2016
// Design Name:   IDS_Lab09
// Module Name:   F:/PSD Workspace 2016/IDS_Lab09/IDS_Lab09_test.v
// Project Name:  IDS_Lab09
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IDS_Lab09
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IDS_Lab09_test;

	// Inputs
	reg Shift;
	reg Load;
	reg Serial_input;
	reg Clock;
	reg D0;
	reg D1;
	reg D2;
	reg D3;
	reg D4;

	// Bidirs
	wire out0;
	wire out1;
	wire out2;
	wire out3;
	wire out4;

	// Instantiate the Unit Under Test (UUT)
	IDS_Lab09 uut (
		.Shift(Shift), 
		.Load(Load), 
		.Serial_input(Serial_input), 
		.Clock(Clock), 
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.D4(D4), 
		.out0(out0), 
		.out1(out1), 
		.out2(out2), 
		.out3(out3), 
		.out4(out4)
	);

	initial begin
		// Initialize Inputs
		Shift = 0;
		Load = 0;
		Serial_input = 0;
		Clock = 0;
		D0 = 0;
		D1 = 0;
		D2 = 0;
		D3 = 0;
		D4 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

