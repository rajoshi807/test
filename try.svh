// Define a macro in the header file
`define WIDTH 8
`define HEIGHT 16

// Include other SystemVerilog files
`include "<path_to_file/definitions.svh>"

// Define a parameter in the header file
parameter BIT_WIDTH = 32;

// You could also define commonly used types or functions
typedef logic [BIT_WIDTH-1:0] data_t;
