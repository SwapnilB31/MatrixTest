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

/**
*@func rotate() returns the rotated matrix of orginal version . It accepts four arguments 
@parm m : number of row 
@parm n : number of column 
@orginalArray : orginal array  
@rotateArray : Extra one array for storing rotate version of array element 

*/

void rotate(int m , int n, int orginalArray[][m],int rotateArray[][n])
{
	for(int j = 1; j < m; j++)
	{
		for (int i = m-1 ,int  k = 0; i >= 0, k < m; i--, k++)
		{
			rotateArray[j][k] = orginalArray[j][i];
		}
	}
}


int main(int argc, char **argv) 
{
  return 0;
}
