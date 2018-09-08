#include <iostream>
#include<cstdlib>

using namespace std;
void swap (int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
 
int ** tan_mat_anti_clock_rot(int **a,int r,int c)
{
    for(int i=0;i<r;i++)
	   for(int j=i+1;j<c; swap(a[i][j],a[j][i]),j++);	 
	        	  	   
    for(int i=0;i<r;i++)
	   for(int j=0,k=c-1;j<k;swap(a[j][i],a[k][i]),j++,k--);  

   return a;
}

int ** tan_mat_clock_rot(int **a,int r,int c)
{
   for(int i=r;i>=0;i--)
	   for(int j=0,k=c-1;j<k;swap(a[j][i],a[k][i]),j++,k--);  
	  
	   
     for(int i=0;i<r;i++)
	   for(int j=i+1;j<c;swap(a[i][j],a[j][i]),j++); 
 
   return a;
}



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
/*
LCM of 2 numbers
lcm: the class which contains the variables and functions used in the program
@func calculate() prints the LCM of two numbers
@param num1: the first integer number
@param num2: the second integer number
@param maximum: the greatest of two numbers
@param answer: lcm of the two numbers is stored in this variable
object1 : the object for the class "lcm"
*/
class lcm
{
    public:
	int num1,num2,maximum,answer;
	void calculate(void);

};
void lcm::calculate(void)
	{
  /*
  this function prints the lcm of two user given numbers. The strategy used is the largest number that is divisible by
  two numbers will be the lcm of two numbers. thus the conditional operator used assigns the greatest input number to "maximum".
  then the divisibility check is done in do-while loop. if the "maximum" is not divisible by any of the numbers then it is
  incremented in else part and proceeded until lcm is found.  
  */
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
			cout<<"the LCM of 2 nos is : "<<maximum;
			return;
		}
		else
		maximum++;
		}
		while(true);
	}



int main(int argc, char **argv) 
{
  return 0;
}
