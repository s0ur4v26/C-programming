/* structure is a collection of variables in different data types
   A sturcture is user define data type 

   THE METHOD OF MAKING A structure
    
       struct_name{ data };

*/





/*PART:1 defination , decleartion, accessing struct element of structure (only folat and integer data type )

#include <stdio.h>

//this is global  structure

struct person           //defination of structure person 
 {  
    int age;
    float salary;  //age and salary are the member of struct person data type 
    
};

int main ()
{
  struct person  person1,person2;  //method of  decleartion  in main function ||this varriable is local varrriable 

  //for person 1

   person1.age=20;
   person1.salary=10000;  //acessig element of the structure person


   printf("printing all the information about person1:\n\n");
   printf("AGE=%d \n\n",person1.age);
   printf("SALARY=%f\n\n",person1.salary);

   person2.age=27;
   person2.salary=104000;  //acessig element of the structure person


   printf("printing all the information about person1:\n\n");
   printf("AGE=%d \n\n",person2.age);
   printf("SALARY=%f",person2.salary);
}
 */







/*PART:3 taking input and print the whole thing using struct   


#include <stdio.h>

//this is global  structure

struct person           //defination of structure person 
 {  
    int age;
    float salary;
    
};

int main ()
{
  struct person  person1,person2; //method of  decleartion  in main function ||this varriable is local varrriable 

  //for person 1

     printf("give the age of person1:\n");
     scanf("%d",&person1.age);
     printf("give the salary of person1:\n");
     scanf("%f",&person1.salary);

    printf("printing all the information about person1:\n\n");
    printf("AGE=%d \n\n",person1.age);
    printf("SALARY=%f\n\n",person1.salary);

   
}

 */



/*PART:3 store sturcture information in an array    



#include <stdio.h>

//this is global  structure

struct person           //defination of structure person 
 {  
    int age;
    float salary;
    
};

int main ()
{
   int i;
  struct person  array[7]; //storing all the information of person structure in array 

  printf("give all the information of all persons:\n\n");

  for(i=0;i<7;i++)
  {
   printf("input all the information of person%d:",i+1);printf("\n");
   printf("iput the age:");scanf("%d",&array[i].age);printf("\n");
   printf("iput the salary:");scanf("%f",&array[i].salary);printf("\n");
   
   printf("\n");printf("\n");printf("\n");

  }
   
   for(i=0;i<7;i++)
  {
    printf("information for person%d : \n\n",i+1);
   printf(" age:%d",array[i].age);printf("\n");
   printf("salary:%f",array[i].salary);printf("\n");
   
   printf("\n");printf("\n");

  }
}
  */






/*PART:4 array in structure ( stroing name ) 
 



#include <stdio.h>
#include<string.h>

//this is global  structure

struct person           //defination of structure person 
 {  
    int age;
    float salary;
    char name[50];
    
};

int main ()
{
   int i,n;
   printf("How many person's data do you want to store:");
   scanf("%d",&n);

  struct person  array[n]; //storing all the information of person structure in array 

  printf("give all the information of all persons:\n\n");

  printf("please don't use space in name use under score for space !\n\n");

  for(i=0;i<n;i++)
  {
     
   printf("input all the information of person%d:",i+1);printf("\n");printf("-------------------------------------------------\n");

    printf("input the name:");scanf("%s",array[i].name);  printf("\n"); //while inputing the name dont use space for space use under score
   printf("-------------------------------------------------\n");
   printf("iput the age:");scanf("%d",&array[i].age);printf("\n");
   printf("-------------------------------------------------\n");
   printf("iput the salary:");scanf("%f",&array[i].salary);printf("\n");
  printf("-------------------------------------------------\n");
  // gets(array[i].name); there is a problem in gets function . it is nor working here 
   
   printf("\n");printf("\n");printf("\n");

  }
   
   for(i=0;i<n;i++)
  {
    printf("information for person%d : \n\n",i+1);printf("-------------------------------------------------\n");
    printf(" name:"); printf("%s ",array[i].name); printf("\n");printf("-------------------------------------------------\n");
   
   printf(" age: %d",array[i].age);printf("\n");printf("-------------------------------------------------\n");
   printf("salary: %f",array[i].salary);printf("\n");printf("-------------------------------------------------\n");
   
   printf("\n");printf("\n");

  }
}

 */


/*PART:5 passing structure varriable in a function


 

 #include <stdio.h>
#include<string.h>

//this is global  structure

struct person           //defination of structure person 
 {  
    int age;
    int salary;
    char name[50];
    
};

void dispaly(struct person p)
{
   
  printf("name:");puts(p.name);printf("\n \n\n");

  printf("age:");printf("%d",p.age);printf("\n");

  printf("salary:");printf("%d $",p.salary);printf("\n \n\n");printf("\n \n\n");

}

int main ()
{
   
   
  struct person  person1,person2; //storing all the information of person structure in array 

  printf("give all the information of all persons:\n\n");

  printf("please don't use space in name use under score for space !\n\n"); 
 
  printf("input person1 information:\n");
  printf("name:");scanf("%s",person1.name);printf("\n \n\n");
  printf("age:");scanf("%d",&person1.age);printf("\n");
  printf("salary:");scanf("%d",&person1.salary);printf("\n \n\n");printf("\n \n\n");


 printf("input person2 information:\n");
  printf("name:");scanf("%s",person2.name);printf("\n \n\n");
  printf("age:");scanf("%d",&person2.age);printf("\n");
  printf("salary:");scanf("%d",&person2.salary);printf("\n \n\n");printf("\n \n\n");
   

   printf("All the information for person1: \n\n");
   dispaly(person1);
printf("All the information for person2: \n\n");
   dispaly(person2);

} 
 */
 
 