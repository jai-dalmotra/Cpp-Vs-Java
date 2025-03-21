// Java provides a triple right shift operator (>>>) that performs an unsigned shift, filling the leftmost bits with 0.

int x = -8;  // Binary: 1111111111111000 (in 16-bit representation)
int result = x >>> 2;  // Binary: 0011111111111110
System.out.println(result); // Outputs a positive number
