// Program to roate a square matrix by 90deg anticlockwise
#include <bits/stdc++.h>
#define N 4
using namespace std;
 
void displayMatrix(int mat[N][N]);

// Rotating the matrix
void rotateMatrix(int mat[][N])
{
    for (int x = 0; x < N / 2; x++)
    {
        for (int y = x; y < N-x-1; y++)
        {
            int temp = mat[x][y];
            mat[x][y] = mat[y][N-1-x];
            mat[y][N-1-x] = mat[N-1-x][N-1-y];
            mat[N-1-x][N-1-y] = mat[N-1-y][x];
            mat[N-1-y][x] = temp;
        }
    }
}
 
// displaying the matrix
void displayMatrix(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%2d ", mat[i][j]);
 
        printf("\n");
    }
    printf("\n");
}
 
 
// main function
int main()
{
    int mat[N][N] ;
    int i, j, m, n;
    printf("Enter the dimentions of matrix m*n \n");
    scanf("%d %d", &m, &n);
    for(i=0; i<m; i++) {
      for(j=0;j<n;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &mat[i][j]);
      }
   }
 
 
    printf("\n Printing your Given matrix \n ");
    rotateMatrix(mat);
    printf("\n\n\n Printing rotated matrix \n ");
    displayMatrix(mat);
 
    return 0;
}
