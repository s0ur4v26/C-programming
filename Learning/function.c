/*part: 1 calculating the area of a ractangle using function 





#include<stdio.h>



 float area_( float a,float b)
{
      float area ;
      area =(.5*a*b);

   return area;
}
int main ( )
{

 float  base,height,tri;
 printf("input the value of base:");
 scanf("%f",&base);printf("\n");
 printf("input the value of height:");
 scanf("%f",&height);printf("\n");
 
 tri = area_(base,height);
 printf(" the area is %.6f ",tri);

}
*/




/*PART:2  passing a array to a function


#include <stdio.h>


void display_array(int x[],int a)
{
   int i;
for(i=0;i<a;i++)
   {
      printf("%d  ",x[i]);
   }
}

int main()
{  
   int i,n;
   
   printf("HOW MANY NUMBER DO YOU WANT TO PRINT:");
   scanf("%d",&n);printf("\n\n\n\n\n");
   int array[n];
 
   for(i=0;i<n;i++)
   {
      printf("input the [%d] element of array ",i+1);
      scanf("%d",&array[i]);
   }
  
   printf("printing the array :\n---------------------------\n");
   display_array(array,n);
}
 */





/*PART:2  passing a array to a function and calculate the maximum value of the array 


#include <stdio.h>


//dispalying the array elememt 
void display_array(int x[],int a)
{
   int i;
for(i=0;i<a;i++)
   {
      printf("%d  ",x[i]);
   }
  
}
//calculating the maximum value of the given array 

int max_value(int x[],int a)
{
   int i=0, max=x[0];
   
   for(i=1;i<a;i++)
   {
      
      if (max<x[i])
      {
         max=x[i];
      }
      
      
   }
   return max;
}
//calculating the minnimum value of the  given array

int min_value(int x[],int a)
{
   int i=0, min=x[0];
   
   for(i=1;i<a;i++)
   {
      
      if (min>x[i])
      {
         min=x[i];
      }
      
      
   }
   return min;
}



int main()
{  
   int i,n,maximum,minimum;
   
   printf("HOW MANY NUMBER DO YOU WANT TO compare:");
   scanf("%d",&n);printf("\n\n\n\n\n");
   int array[n];
 
   for(i=0;i<n;i++)
   {
      printf("input the [%d] number: ",i+1);
      scanf("%d",&array[i]);
   }
     printf("\n\n\n");
  printf("printing the array :\n---------------------------\n");
  display_array(array,n);
   printf("\n\n\n");

 printf("printing maximum value of the array :\n------------------------------------\n");
  maximum= max_value(array,n);
  printf(" %d \n\n\n\n",maximum);


  printf("printing minimum value of the array : \n------------------------------------\n");
  minimum= min_value(array,n);
  printf("%d\n",minimum);
  
}

*/



/*PART:3  passing a string  to a function  


#include <stdio.h>

void display(char s[])// dispalying the string in this function 
{
   printf("%s",s);
}

int main()
{
   char str[]="sourav paul ";
   display(str);
}

*/




/*PART:3  factrial using recursion 
 

 #include <stdio.h>
 

 int factroial(int a)
 {
  int result;
  if(a ==1)
  {
     return 1;
  }
  else
  {
   result =a*factroial(a-1);
   return result;
  }
  

 }


int main()
{
   int n,result;

   printf("input nuber that you want to count the Factroial:");
   scanf("%d",&n);
   result = factroial(n);
   printf("the factroial of %d is %d",n,result);

}

*/