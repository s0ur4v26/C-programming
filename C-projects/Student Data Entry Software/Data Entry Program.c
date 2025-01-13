
//student data entry programme source codde .

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    char name[1000];
    char instute[1000];
    char roll[1000];
    char mobile_number[1000];
    int n;

    

   
    FILE *file;
     
       start:                                                //fopen("file name ","mode "  works that way and there are so many moods of file
    if (file == NULL)
    {

    file = fopen(" data.txt", "w");
      printf("creating and opening file.. \n");
    }

   else
   {
        file = fopen(" data.txt", "a");
   }
   printf("your file is opened successfully\n\n");

  
        

    printf("input the data:\n=======================\n");
    printf("NOTE:Avoid space for name and institute name. -<use under score>-\n");
    printf("input your name : ");
    scanf("%s",&name);
    printf("\nenter your institute name:");
    scanf("%s",&instute);
    printf("\nenter your roll : ");
    scanf("%s",&roll);
    printf("\nenter your  mobile no : ");
    scanf("%s",&mobile_number);

                     // writting the file

       fputs("                          INFORMATION FOR->",file); fputs(name,file);
       fputs("\n\n\n",file); // printing new line in every excution of code
       fputs("NAME:- ",file);
       fputs(name,file);  fputs("\n",file);fputs("-----\n",file);
       fputs("Institute Name:- ",file);
       fputs(instute,file); fputs("\n",file);fputs("---------------\n",file);
       fputs("Roll:- ",file);
       fputs(roll,file); fputs("\n",file);fputs("-----\n",file);
       fputs("Mobile No:- ",file);
       fputs(mobile_number,file); fputs("\n",file);fputs("----------\n",file);
       fputs("\n\n \n ",file);
       
       
       fclose(file);
       printf("your data has been saved successfully....\n\n\n\n");
        
        goto start;
        


         getch();


}
