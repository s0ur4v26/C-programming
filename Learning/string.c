 /* declaration and defination part  

#include <stdio.h>
     int main ()
     
     {
       char string[1000]="sourav paul \n sourav is not a good boy "; 
                           
       printf("string = %s",string);

      
      }
     
*/




/* 
PART:2 HOW TO TAKE INPUT AND SHOW THE STRING IN CONSOLE 




#include <stdio.h>
#include <string.h>
     int main ()
     
     {
      char string[30];
      printf("input the full name :");
     // scanf("%s",&string); scanf function can not handle space as a character for that caase we use gets() function 

    
     gets(string);

     printf("the given name is -------------------------->>%s",string);
     
      }

      

      */





/*PART:3 HOW TO DISPLAY A STING IN CHARACTERWISE FORMAT :





#include <stdio.h>
#include <string.h>
     int main ()
     
     {
      char string[100];int i=0 ;
      printf("input the full name :");

     gets(string);

     printf("the given name is ---->>%s",string); printf("\n");
     
     printf("printing the string in characterwise :\n---------------------------------------\n");

     for(i=0;string[i]!='\0';i++)
     {
          printf("[%c]\n ",string[i]);
     
     }
      }


*/


/*PART :4  COUNTING THE LENGTH WITH strlen( ) function 




#include <stdio.h>
#include <string.h>
     int main ()
     
     {
      char string[100];int i=0 ;
      printf("input the full name :");

     gets(string);

     int length = strlen(string);  // strlen( ) function is used to calculate the sting length ..
     printf("the length of the string  is %d \n ",length);

     printf("the given name is ---->>%s",string); printf("\n");
     
     printf("printing the string in characterwise :\n---------------------------------------\n ");

     for(i=0;string[i]!='\0';i++)
     {
          printf("[%c]\n ",string[i]);
     
     }
      }



*/






/*PART:5  COPY STRING USING strcpy() function 






#include <stdio.h>
#include <string.h>
     int main ()
     
     {
      char source_string[100];
      char target_string [100];
      printf("input the full name :");
      gets(source_string);
      strcpy(target_string,source_string);
      printf("the source string is [%s]",source_string);
      printf ("\n");
      printf("the target string is [%s]",target_string);

      }



*/




/*PART:6   String | concatenation using strcat() -->adding two string 



#include <stdio.h>
#include <string.h>
     int main ()
     
     {
     char string1[100];

     char string2[100];
     printf("input the string1-->");
     gets(string1);
     printf("\n");
     printf("input the string2-->");
     gets(string2);
     printf("\n");

     strcat(string1,string2); //strcat() function is used to add two string in one and the 1st parameter will be the resultant string 

     printf("adding two string = %s",string1); //after adding 2 string the resultant string is string1 

      }



      */






     /*PART:6   adding tow string not using strcat() function  



 #include <stdio.h>
 #include <string.h>
     int main ()
     
     {
     char string1[100];
     char string2[100];
     int length=0,i=0,j=0;
     printf("input the string1-->");
     gets(string1);
     printf("\n");
     printf("input the string2-->");
     gets(string2);
     printf("\n");
     while (string1[i]!='\0')
     {
          i++;
          length++;
     }
     printf("the length of the string1 is %d \n",length);

   while (string2[j]!='\0')
   {
        string1[length+j]  =string2[j];

             j++;
   }
   
     printf("adding two string = %s",string1);            //after adding 2 string the resultant string is string1 

      }


 */








/*PART:7  String compare using strcmp() function  





 #include <stdio.h>
 #include <string.h>
     void  main ()
     
     {
     char string1[100];
     char string2[100];
     int length=0,i=0,j=0;
     printf("input the string1-->");
     gets(string1);
     printf("\n");
     printf("input the string2-->");
     gets(string2);
     printf("\n");

    int  d=  strcmp(string1,string2);
    if (d==0)
     {
        printf("the two string are equal");
     }
     else
    printf("the two string are not equal");

     }


    */





   
/*PART:8  String reverse using strrev()  

#include <stdio.h>
 #include <string.h>
     void  main ()
     
     {
     char string1[100];
     char string2[100];
     int length=0,i=0,j=0;
     printf("input the string1-->");
     gets(string1);
     
     printf("\n");
     strrev(string1); // reversing the string value 

     printf("printing the input in reverse order  %s",string1);

     }


  */    










 /*PART:8  String reverse  without  using strrev() function




 #include <stdio.h>
 #include <string.h>
     void  main ()
     
     {
     char string1[100];
     char string2[100];
     int length=0,i=0,j=0;
     printf("input the string1-->");
     gets(string1);
     printf("\n");
     for(i=0;string1[i]!='\0';i++)
     {
          length++;
     }
     printf( " the length of the string is %d",length); printf("\n");

     for(i=0,j=length-1;j>=0;i++,j--)
     {
          string2[i]=string1[j];
     }     
              string2[i]='\0';  //this line is written to avoid printing some garbage character 

        printf("\n the reverse order string is %s",string2);

     }


      */ 







 /*PART:9 | string palindrome   



      


 #include <stdio.h>
 #include <string.h>
     void  main ()
     
     {
     char string1[100];
     char string2[100];
     int length=0,i=0,j=0,c;
     printf("input the string1-->");
     gets(string1);
     printf("\n");
     for(i=0;string1[i]!='\0';i++)
     {
          length++;
     }
    // printf( " the length of the string is %d",length); printf("\n");

     for(i=0,j=length-1;j>=0;i++,j--)
     {
          string2[i]=string1[j];
     }     
              string2[i]='\0';  //this line is written to avoid printing some garbage character 

        printf("\n the reverse order string is %s",string2); printf("\n");


        if ((c=strcmp(string1,string2))==0)
        {
             printf("the string is palindrome ");
        }
        
else printf("the sting is not palindrome ");
     }

   */ 




  
 /*PART:10 |    String | string swapping 



#include <stdio.h>
 #include <string.h>
     void  main ()
     
     {
     char string1[100];
     char string2[100];
     char temp[100];
     int length=0,i=0,j=0;
     printf("input the string1-->");
     gets(string1);
     printf("\n");
     printf("input the string2-->");
     gets(string2);
     printf("\n"); 
     strcpy(temp, string1);
     strcpy(string1,string2);
     strcpy(string2,temp);
     printf("string 1 is %s \n ",string1);
      printf("string 2 is %s",string2);

     }
*/ 




/*PART:11     |  String | functions



      strupr()--> this function is used to make all the letter in a string in upper case letter.

      strlwr()--> this function is used to make all the letter in a string in lower case letter
      
      gets()--> this function is used to take the input string

      puts()--> this function is used to show the output string in console format

      strcpy()--> this function is used to copy strings one strings  to another

      strcpm()--> this function is used to to  compare two strings if two string is equal then the return value will be 0 otherwise the value will be 1

      strcat()--> this function is used to add two string and make one string 

      strrev()--> this function is used to reverse the string 

      strlen( )--> this function is used to calculate the length of the string



*/    
 






/*PART:12 the user give a input string and it will count and print the  Number of vowels, consonants, words, number  and other in that string 





#include <stdio.h>
#include <string.h>
     void  main ()

     {
     int vowel,consonants,words,digits,i,other,j;
     char string1[1000]; char ch,chare;
     char vowel_[100];
     char consonants_[500];
     char digit_[100];
     char other_[50];


     START:
     system("color 80");


      printf("----------------------------------------------------------------------------------------------------");printf("\n");
      printf("                                          THE VCDO.EXE \n");
      printf("----------------------------------------------------------------------------------------------------");printf("\n");
      printf("                                                                                 created by sv \n");
      printf("----------------------------------------------------------------------------------------------------"); printf("\n");printf("\n");printf("\n");


     printf("input the text file:\n");
     printf("--------------------\n");
     gets(string1);

     i=vowel=consonants=words=digits=other=0;

       while((ch=string1[i])!='\0')
       {
          if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')  //fow vowel
          {
               vowel_[vowel]=string1[i];
               vowel++;
          }


          else if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) // for consonants
          {
               consonants_[consonants]=string1[i];
               consonants++;
          }

          else if (ch==' ') // for words
          {
               words++;
          }

          else if (ch>='0'&&ch<='9') // for numbers
          {
               digit_[digits]=string1[i];
               digits++;
          }

          else
          {
               other_[other]=string1[i];
                other ++;
          }

          i++;

       }

        printf("\n");printf("\n");printf("\n");

      printf("---------------------------------------------------------------------------------------------------- \n");
      printf("----->The numbers of words are [%d] ",words);printf("\n");

      printf("---------------------------------------------------------------------------------------------------- \n\n");
      printf("\n");printf("\n");printf("\n");

      printf("----->PRINTING THE VOWEL : \n"); printf("---------------------------------------------------------------------------------------------------- \n\n");
      printf("----->The number of vowels are  %d",vowel); printf("\n");

             for(j=0;j<vowel;j++)
             {
              printf("   [%C]   ",vowel_[j]);
              if (j%10== 0)
              {
                printf("\n"); printf("\n");
              }


             }printf("\n");printf("\n");printf("\n");



      printf("----->PRINTING THE CONSONANTS : \n"); printf("---------------------------------------------------------------------------------------------------- \n\n");
      printf("----->The number of consonants  are  %d",consonants); printf("\n");

             for(j=0;j<consonants;j++)
             {
              printf("   [%C]   ",consonants_[j]);

              if (j%10==0)
              {
                printf("\n"); printf("\n");
              }
             }printf("\n"); printf("\n");printf("\n");







      printf("----->PRINTING THE DIGITS : \n"); printf("---------------------------------------------------------------------------------------------------- \n\n");
      printf("----->The number of digits  are  %d",digits); printf("\n");

             for(j=0;j<digits;j++)
             {
              printf("   [%C]   ",digit_[j]);

              if (j%10==0)
              {
                printf("\n"); printf("\n");
              }
             }printf("\n"); printf("\n");printf("\n");





     printf("----->PRINTING THE OTHER CHARACTERS  : \n"); printf("---------------------------------------------------------------------------------------------------- \n\n");
      printf("----->The number of special characters  are  %d",other); printf("\n");

             for(j=0;j<other;j++)
             {
              printf("   %C   ",other_[j]);

              if (j%10==0)
              {
                printf("\n"); printf("\n");
              }
             }printf("\n"); printf("\n");printf("\n");


             printf("press q to  exit the program ");
             scanf(" %c",&chare);
             if(chare=='q')
             {
                 printf("press any key to exit ");
             }
             else
                printf("\n\n\n\n\n\n\n\n\n");
                goto START;



     }
*/








