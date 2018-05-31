`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:28:00 11/25/2016 
// Design Name: 
// Module Name:    IDS_Lab08 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module IDS_Lab08(
    input X,
    input CLK,
	 input RESET,
    output Y
    );

	 wire[4:1]a;
	 wire[4:1]at;
	 reg[4:1]an;
	 wire temp;
	 
	 initial begin
		 an[1] = 0;
		 an[2] = 0;
		 an[3] = 0;
		 an[4] = 1;
	 end
	 
assign a[1] = ~(~(an[3]&X));
assign a[2] = ~(~(an[3]&~X)&~(an[2]&~X));
assign a[3] = ~(~(an[4]&~X)&~(an[1]&~X));
assign a[4] = ~(~(~an[2]&X));
assign temp = ~(~(an[1]&X));

dff_v U1(.CLK(CLK), .RESET(RESET), .D(an[1]), .Q(at[1]));
dff_v U2(.CLK(CLK), .RESET(RESET), .D(an[2]), .Q(at[2]));
dff_v U3(.CLK(CLK), .RESET(RESET), .D(an[3]), .Q(at[3]));
dff_v U4(.CLK(CLK), .RESET(RESET), .D(an[4]), .Q(at[4]));
dff_v U5(.CLK(CLK), .RESET(RESET), .D(temp), .Q(Y));

always @*
begin
	an[4] <= at[4];
	an[3] <= at[3];
	an[2] <= at[2];
	an[1] <= at[1];
end

endmodule
