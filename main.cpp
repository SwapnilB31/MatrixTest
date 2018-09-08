#include <iostream>
#include<cstdlib>

using namespace std;

/*
*@func swap() - swaps the values of two integer variables
*@param a : Reference to integer - reference to First variable
*@param b : Reference to integer - reference Second variable
*@ret : void - modifies - the values of the arguments passed by reference
*/

void swap (int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}

/*
*@func tan_mat_anti_clock_rot - Rotates the given array, a anticlockwise by 90 degrees
*@param a - is a 2d array of dimensions r x c
*@param r : integer - number of rows in the array
*@param c : integer - number of columns in the array
*@ret : 2d pointer - 2D array 'a', rotated anti-clockwise by 90 degrees
*/
 
int ** tan_mat_anti_clock_rot(int **a,int r,int c)
{
    for(int i=0;i<r;i++)
	   for(int j=i+1;j<c; swap(a[i][j],a[j][i]),j++);	 
	        	  	   
    for(int i=0;i<r;i++)
	   for(int j=0,k=c-1;j<k;swap(a[j][i],a[k][i]),j++,k--);  

   return a;
}

/*
*@func tan_mat_anti_clock_rot - Rotates the given array, 'a' clockwise by 90 degrees
*@param a - is a 2d array of dimensions r x c
*@param r : integer - number of rows in the array
*@param c : integer - number of columns in the array
*@ret : 2d pointer - 2D array 'a', rotated clockwise by 90 degrees
*/

int ** tan_mat_clock_rot(int **a,int r,int c)
{
   for(int i=r;i>=0;i--)
	   for(int j=0,k=c-1;j<k;swap(a[j][i],a[k][i]),j++,k--);  
	  
	   
     for(int i=0;i<r;i++)
	   for(int j=i+1;j<c;swap(a[i][j],a[j][i]),j++); 
 
   return a;
}

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
/* @func getCofactor() will return the matrix that contains element whose determinant has to be find. 
Position p and q is sent to find the cofactor, so the remaing element except the row p and column qwill be considered to find cofactor.
@param mat[m][n]: is the original matrix.
@param temp[m][n]: will store the values for cofactor.
@param p,q: position whose cofactor has to be find.
@param m,n: number of rows and columns.
*/ 
void getCofactor(int mat[m][n], int temp[m][n], int p, int q, int m, int n) 
{ 
    int r = 0, c = 0; 
    for (int i = 0; i < m; i++) 
    { 
        for (int j = 0; j < n; j++) 
        { 
           if (i != p && j != q) 
            { 
                temp[r][c++] = mat[i][j]; 
                 
                if (c == n - 1) 
                { 
		    c = 0; 
                    r++; 
                } 
            } 
        } 
    }
	 
} 
/*
LCM of 2 numbers
lcm: the class which contains the variables and functions used in the program
@func calculate() prints the LCM of two numbers
@param num1: the first integer number
@param num2: the second integer number
@param maximum: the greatest of two numbers
@param answer: lcm of the two numbers is stored in this variable
*/
class lcm
{
    public:
	int num1,num2,maximum,answer;
	void calculate(void);
	 /*
  this function prints the lcm of two user given numbers. The strategy used is the largest number that is divisible by
  two numbers will be the lcm of two numbers. thus the conditional operator used assigns the greatest input number to "maximum".
  then the divisibility check is done in do-while loop. if the "maximum" is not divisible by any of the numbers then it is
  incremented in else part and proceeded until lcm is found.  
  */

};
void lcm::calculate(void)
	{
 
		maximum=(num1>num2)?num1:num2;
		do
		{
			cout<<"enter the first number :";
			cin>>num1;
			cout<<"enter the second number :";
			cin>>num2;
		if((maximum%num1)==0 && (maximum%num2)==0)
		{
			answer=maximum;
			cout<<"the LCM of 2 nos is : "<<answer;
			return;
		}
		else
		maximum++;
		}
		while(true);
	}
	
/*above function perform adjoint opertion */

void adjoint(int A[N][N],int adj[N][N]) 
{ 
    if (N == 1) 
    { 
        adj[0][0] = 1; 
        return; 
    } 
  
    // temp is used to store cofactors of A[][] 
    int sign = 1, temp[N][N]; 
  
    for (int i=0; i<N; i++) 
    { 
        for (int j=0; j<N; j++) 
        { 
            // Get cofactor of A[i][j] 
            getCofactor(A, temp, i, j, N); 
  
            // sign of adj[j][i] positive if sum of row 
            // and column indexes is even. 
            sign = ((i+j)%2==0)? 1: -1; 
  
            // Interchanging rows and columns to get the 
            // transpose of the cofactor matrix 
            adj[j][i] = (sign)*(determinant(temp, N-1)); 
        } 
    } 
} 
int main(int argc, char **argv) 
{
  return 0;
}
