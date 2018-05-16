#include <iostream>

using namespace std;

/**
*@func GCD() returns the greatest common divisors of two integers. It accepts two arguments
@param a : The first integer
@param b : The second integer
*/

int GCD(int a, int b) {
  if(a == 0)
    return b;
  else
    return (b%a,a);
}

int main(int argc, char **argv) 
{
  return 0;
}
