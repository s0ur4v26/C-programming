/* 

--> POINTER  is a special kind of varriable . in normal varriable we just assign value . 
but in pointer , it can take  both memory address and value ,

as mentioned before pointer is a special varriable , we put the desired varriable's   address in pointer variable

 like this *ptr=&x ;

 -->> here (ptr)pointer varriable holding the address of x varriable 
 -->>but *ptr holds the content in x varriable 
  
 -->> as ptr is a pointer varriable so it has it's own memory address and it is differnt from address of x varriable 


*/

/* 
#include <stdio.h>

int main()
{
    int x=3;
    int *p;
    p=&x;
    printf( "value of x= %d     ",x); // the value of x 

    printf( "\naddress of x= %d    " ,&x);//the address of x varriable 

    printf( " \naddress of p  = %d   \n  ",p);// the address of x that has been put in p pointer 


    printf( "content of p=%d \n   ",*p);//the value that has been put in p  pointer 

    
    printf( "address of p varriable=%d        " ,&p); // the address of p varriable  --> pointer varriable takes the address of x varrriable and its value as 
                                                      //   a input .but it has its own address that has been shown in output part 
    

}
*/

/*
  >>OUTPUT:

  value of x= 3     
  address of x= 6422300     
  address of p  = 6422300   
  content of p=3 
  address of p varriable=6422296 
  */




 
/*part:1 Pointer | pointer pointing to different variable 

#include <stdio.h>

int main()
{
    int x=0; int y=9; int z=20;
    int *ptr;
    
   
    ptr=&x;
    printf("x=%d\n",*ptr);

     ptr=&y;
    printf("y=%d\n",*ptr);

     ptr=&z;
    printf("z=%d\n",*ptr);
}

*/



/*part:2 Pointer | Adding two numbers using pointer 



#include <stdio.h>

int main()
{
    int x=10; int y=9; 
    int *ptr1,*ptr2;
    int sum;
    
   
    ptr1=&x;
    printf("x=%d\n",*ptr1);

     ptr2=&y;
    printf("y=%d\n",*ptr2);

     sum= *ptr1+*ptr2;
     printf("sum= %d",sum);
}

*/



/* swapping two numbers using a function passing address of the varriable 

#include <stdio.h>

void swapping(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int main()
{
    int x=10; int y=9; 
    printf("before swapping x=%d, y=%d \n \n ",x,y);
    swapping(&x,&y); //passing the address to the  swapping function 


    printf("after swapping x=%d, y=%d",x,y);
}

*/


/*part 4: acessing array using pointer

#include <stdio.h>

int main()
 {

  int array[4]={2,3,4,5};
  int i;
  int *ptr;
  ptr=&array[0];
  for(i=0;i<4;i++)
  {
      printf(" %d \n",*ptr);
       ptr++;
  }
 }

  */