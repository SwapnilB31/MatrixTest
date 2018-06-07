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

/**
*@func Uppersum() returns the sum of the upper triangle. It accepts three arguments
@param r : No of rows
@param c : No of columns
@param mat[m][n] : The matrix
@ret upper_sum = Integer Value , Sum.
*/
int Uppersum(int r, int c,mat[m][n]){
    int i, j;
    int upper_sum = 0;
    /*to calculate sum of upper triangle*/
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            if (i <= j) {
                upper_sum += mat[i][j]; }
        }
  return upper_sum;
}

int main(int argc, char **argv) 
{
  return 0;
}
