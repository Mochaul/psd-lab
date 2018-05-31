`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:12:56 12/02/2016 
// Design Name: 
// Module Name:    MUX4to1 
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
module MUX4to1(D0, D1, D2, D3, select0, select1, Y);

input D0, D1, D2, D3, select0, select1;
output Y;

reg Y;
wire D0, D1, D2, D3, select0, select1;

always @* begin
	if(select0 == 0) begin
			if(select1 == 0) begin
				Y <= D0;
		end
		else begin
				Y <= D1;
		end
	end
	else begin
		if(select1 == 0) begin
				Y <= D2;
		end
		else begin
				Y <= D3;
		end
	end
end

endmodule