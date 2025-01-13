#include <stdio.h> 


 
 int main()
  {

      int n,i,j,fact=1;
      printf("input the value of  n-->  ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          fact=fact*i; 
      }
      printf( "the value of the factrial number is %d ", fact );
      
  }