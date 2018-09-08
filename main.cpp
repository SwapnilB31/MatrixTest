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
@param mat : The matrix
@ret upper_sum = Integer Value , Sum.
*/
int Uppersum(int r, int c, int mat[m][n]) {
    int i, j;
    int upper_sum = 0;
    /*to calculate sum of upper triangle*/
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            if (i <= j) {
                upper_sum += mat[i][j]; 
            }
        }
  return upper_sum;
}

// function to rotate matrix anticlockwise
int rotateMatrix(mat[m][n])
{
   for (int x = 0; x < m / 2; x++)
    {
        for (int y = x; y < n-x-1; y++)
        {
            int temp = mat[x][y];
            mat[x][y] = mat[y][n-1-x];
            mat[y][n-1-x] = mat[n-1-x][n-1-y];
            mat[n-1-x][n-1-y] = mat[n-1-y][x];
            mat[n-1-y][x] = temp;
        }
    }
  return mat[m][n];
}
int main(int argc, char **argv) 
{
  return 0;
}


