/*pattern type 5 
 1234
  123
   12
    1

    */
 //to change pattern you have swipe the varriable in column  printf function 
 /*
#include <stdio.h>

int main ()
{
  int row ,column,space,n;
  printf("how many row do you want to print :");
  scanf("%d",&n);
  for (row=n;row>=1;row-- )
  {
        for(space=row;space>=row-1;space--)
         {
      printf(" ");
       }
      
      
  for(column=1;column<=row;column++)
  {
    printf("%d",column); 
  } printf("\n");
  }
}
*/

/*
  THIS PATTERN IS PRINTED THE FLLOWING PATTERN 

ABCD
  ABC
   AB
    A

    */

/**/
   #include <stdio.h>

int main ()
{
  int row ,column,space,n;
  printf("how many row do you want to print :");
  scanf("%d",&n);
  for (row=n;row>=1;row-- )
  {
        for(space=row;space>=row-1;space--)
         {
      printf(" ");
       }
      
      
  for(column=1;column<=row;column++)
  {
    printf("%C",column+64); 
  } printf("\n");
  }
}


  


  /* write the code of the back arrow pattern 

     1
    12
   123
  1234
   123
    12
     1  

     */
 /*
 #include <stdio.h>

int main ()
{
  int row ,column,space,n;
  printf("how many row do you want to print :");
  scanf("%d",&n);
// upper part of the arrow 
for (row=0;row<=n;row++)
{
    for(space=n-row;space>=1;space--)
    {
        printf(" ");
    }
    for(column=1;column<=row;column++)
     {
         printf ("%c",40);
     }
     printf("\n");
} 
//lower part of this arrow 
   for (row=n-1;row>=1;row-- )
  {
        for(space=1;space<=n-row ;space++)
         {
      printf(" ");
       }
      
      
  for(column=1;column<=row;column++)
  {
    printf("%C",40); 
  } printf("\n");
  }
}
*/

/* printing the piramid  table
      
         1
       1 2 3 
     1 2 3 4 5


     */

/*
    #include <stdio.h>
     int main ()
     {
  int row,n ,column, space;
   printf("input the number of row :");
   scanf("%d",&n);
   for(row=0;row<=n;row++)
   {
//    printing space 
    for(column=1;column<=(n-row);column++)
    {
        printf(" ");
    }
// printing the element of the piramid number
    for(column=1;column<=(2*row -1);column++)
    {
        printf("%d ",row);
    } printf("\n");
   }

    
     }
*/

/* printing the primid table 

      reverse order for that just change the row value and type 
  
 */

/*


 #include <stdio.h>
     int main ()
     {
  int row,n ,column, space;
   printf("input the number of row :");
   scanf("%d",&n);
   for(row=n;row>=1;row--)
   {
//    printing space 
    for(column=1;column<=(n-row);column++)
    {
        printf(" ");
    }
// printing the element of the piramid number
    for(column=1;column<=(2*row -1);column++)
    {
        printf("%d",row);
    } printf("\n");
   }

    
     }
*/



/* print  the piramid 

    *
   * *
  * * * 
 * * * *
* * * * *
*/

/*
#include <stdio.h>
     int main ()
     {
  int row,n ,column, space;
   printf("input the number of row :");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
//    printing space 
    for(column=1;column<=(n-row );column++)
    {
        printf(" ");
    }
// printing the element of the piramid number
    for(column=1;column<=row;column++)
    {
        printf("%d ",row);
    } printf("\n");
   }

    
     }

  */



 /*print the rectangle 
  * * *  *
  *      *
  *      *
  *      *
  * * *  *
 
 */

/*
#include <stdio.h>
     int main ()
     {
  int row,n ,column, space;
   printf("INPUT ANY VALUE  :");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {


    for(column=1;column<=n;column++)
    {
      if(row==1||row==n||column==1||column==n)
      {
        printf("|");
      }
      else printf(" ");

    } printf("\n");
   }
 }

*/







/* TRIANGLE STAR PATTERN 
   *
   * *
   *  *
   *****

*/

/*
#include <stdio.h>
     int main ()
     {
  int row,n ,column, space;
   printf("INPUT ANY VALUE  :");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {


    for(column=1;column<=n;column++)
    {
      if(row==column||row==n||column==1)
      {
        printf(".");
      }
      else printf(" ");

    } printf("\n");
   }
 }
 
*/ 




/* priinting the x pattern */


/*
#include <stdio.h>
     int main ()
     {
  int row,n ,column, space;
   printf("INPUT ANY VALUE  :");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {


    for(column=1;column<=n;column++)
    {
      if(row==column||(row+column)==n+1)
      {
        printf("*");
      }
      else printf(" ");

    } printf("\n");
   }
 }
 
  */


/*print the piramid like this  
        1
      1 2 1
   1  2 3 2 1      */


/*
#include <stdio.h>
     int main ()
     {
  int row,n ,column, space;
   printf("INPUT ANY VALUE  :");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
    //ptinting the space 
    for(column=1;column<=n-row;column++)
    {
      printf (" ") ;
    }
    //printing the  left part 
    for(column=1;column<=row;column++)
    {
      printf ("%d",column);
    }

//printing the right part

for(column=row-1;column>=1;column--)
    {
      printf ("%d",column);
    }


     printf("\n");
   }
  }
   /*



   if you want to priint the diamond shape 

for(row=n;row>=1;row--)
   {
    //ptinting the space 
    for(column=1;column<=n-row;column++)
    {
      printf (" ") ;
    }
    //printing the  left part 
    for(column=1;column<=row;column++)
    {
      printf ("%d",column);
    }

//printing the right part

for(column=row-1;column>=1;column--)
    {
      printf ("%d",column);
    }


     printf("\n");
   }
*/
   
     
 






