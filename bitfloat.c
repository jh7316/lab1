#include <stdbool.h>
#include <stdio.h>
#include <assert.h>

// Return the bit value (0 or 1) at position pos of unsigned int n
// Note that the least significant bit position is 0. 
int get_bit_at_pos(unsigned int n, int pos)
{
  // TODO: Your code here.
  int value=(n>>pos)&1;
  return value;
}

// Flip the bit value (1->0 or 0->1) at position pos of unsigned int n,
// while leaving other bits unchanged. 
// Return the changed integer.
// Note that the least significant bit position is 0. 
int flip_bit_at_pos(unsigned int n, int pos)
{
  // TODO: Your code here.
    int a = 1<<p;
    return (n^a);
  	
}

// Return the most significant byte of unsigned int n
char get_most_significant_byte(unsigned int n)
{
  // TODO: Your code here.
char x = (n>>24)&0xFF;
return x;
}

// Return true if n1+n2 causes overflow, return false otherwise
bool sum_overflowed(int n1, int n2)
{
  // TODO: Your code here.
 if (n1 >= 0 && n2 >= 0) {
  if (INT_MAX - n1 <= n2) {
   return true;
  }
 }else if(n1 < 0 && n2 < 0){
  if (n1 <= INT_MIN - n2) {
   return true;
  }
 }
 return false;
}

//Extract the 8-bit exponent field of single precision floating point number f 
//and return it as an unsigned byte
unsigned char get_exponent_field(float f) 
{
	//TODO: Your code here.
	unsigned int* r = (unsigned int*) &f;
	*r=*r<<1;
	return *((unsigned char*) r +3);

}

//Bonus problem: Return the precision of floating point number f
//Precision is the difference f'-f such that f' is the 
//smallest *representable* floating point number larger than f  
float get_precision(float f)
{
  //TODO: Your code here
	
}
