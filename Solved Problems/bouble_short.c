#include<stdio.h>


void swap(int *ptr1,int *ptr2)
{
   int  temp;
   temp = *ptr1;
   *ptr1=*ptr2;
   *ptr2=temp;
}


  int main( )
 {
   int array_size ;
   printf("input the array size:");
   scanf("%d",&array_size);
   int array[array_size];
   printf("input the array elements: \n");
   for(int i=0;i<array_size;i++)
   {
     printf("->");scanf("%d",&array[i]);
   }
     system("cls");
   printf("Entered array is :");
   for(int i=0;i<array_size;i++)
   {
    printf("%3d,",array[i]);
   }

   //shorting the arrray

  
   for(int i=1; i<=array_size; i++)
   {
      for(int j=0; j<(array_size-1-i); j++)
      {
        if(array[j]>array[j+1])
         {
             swap(&array[j],&array[j+1]);
         }
      }
   }
    printf("\n\nThe sorted array is: {");
    
    for(int i=0;i<array_size;i++)
    {
       printf("%3d,",array[i]);
    }
    printf("}");
 }