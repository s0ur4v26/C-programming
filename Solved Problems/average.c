  #include <stdio.h>
  #include<conio.h>        
  int main ( )
  {
       int count=1,number ,n;
       float sum=0 ,Avarage=0;
        printf( " how many number you want to make average :  ");
        scanf( "%d", &n );
        printf( "\n");

         while (count<=n )
         {
             printf( " input the  %d number: ",count);

             scanf(" %d",&number);
              sum =  sum+number ;
              count++;
         }
          Avarage= sum/n ;
          printf(" the sum = %f the total number =%d",sum,n );
          printf( " the average of the given number is %f",Avarage);

           getch();
  }
