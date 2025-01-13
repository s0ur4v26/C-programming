#include<stdio.h>
int array_length;


 void min_max(int a[array_length],int *min,int *max)
 {
    *min = *max =a[0];
    for(int i = 0; i < array_length;i++)
    {
     if(a[i] < *min){*min=a[i];}
     if(a[i] > *max){*max=a[i];}
    }
 } 

 int main( )
 {   
    int array[array_length];int array_element;int min,max;
    printf("input the number of arry elements:");
    scanf("%d",&array_length);
    printf("\n \ninput the array element:");
    for(int i=0;i<array_length;i++) 
    {
       printf("\n-> ");
       scanf("%d",&array_element);
       array[i] = array_element;
    }   
    min_max(array,&min,&max);
    printf(" \n \n-->the minimum value = %d \n-->the maximum value = %d",min,max);
 }