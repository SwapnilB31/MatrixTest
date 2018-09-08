#include<iostream>
#include<cstdlib>
using namespace std;
void swap (int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
int main()
{
	int n;	
	cout<<"Enter No of row/col :";
	cin>>n;	
	int **a=(int **)malloc(sizeof(int*)*n);	
	for(int i=0;i<n; a[i]=(int *)malloc(sizeof(int)*n),i++);
	
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;a[i][j]=rand()%10,j++);
	   	   
	for(int i=0;i<n;cout<<endl,i++)
	   for(int j=0;j<n;cout<<a[i][j]<<" ",j++);	   
//Anti_clock	  
    for(int i=0;i<n;i++)
	   for(int j=i+1;j<n; swap(a[i][j],a[j][i]),j++);	 
	        	  	   
    for(int i=0;i<n;i++)
	   for(int j=0,k=n-1;j<k;swap(a[j][i],a[k][i]),j++,k--);  
	   
	cout<<"\nAfter 90 deg anti-clock rot:\n";
		 	      
	for(int i=0;i<n;cout<<endl,i++)
	   for(int j=0;j<n;cout<<a[i][j]<<" ",j++);  

//Clock	  
   cout<<"\n";

     for(int i=n;i>=0;i--)
	   for(int j=0,k=n-1;j<k;swap(a[j][i],a[k][i]),j++,k--);  
	  
	   
     for(int i=0;i<n;i++)
	   for(int j=i+1;j<n;swap(a[i][j],a[j][i]),j++); 
	   
	cout<<"\nAfter 90 deg clock rot:\n";
		 	      
	 for(int i=0;i<n;cout<<endl,i++)
	   for(int j=0;j<n;cout<<a[i][j]<<" ",j++);  
	         
	   delete a;    	
return 0;	
}
