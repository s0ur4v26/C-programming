#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int year_starting_day_value(int check_year);

//font color
void Black()   {printf("\033[1;30m");} 
void red()     {printf("\033[1;31m");}
void white()   {printf("\033[1;37m");}
void green()   {printf("\033[1;32m");}
  

int months,days; int count = 0;int week_st_days=1,starting_days,check=0;  int year;
char *month[]={"January","Feburary","March","April","May","June","July","August","September","October","November","December"};
int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main()
 {   
     system("color 0F");
     start:
     printf("\n\n\ninput your desired year:");
     scanf("%d",&year);
     if(year==1971){system("color A4");}
     system("cls");
     if(year ==2000)week_st_days=1;
     else{week_st_days=year_starting_day_value(year);}
     printf("\n YEAR: %d\n",year);
     if(((year%4==0) && (year%100!=0))||(year%400==0)){monthdays[1]=29;} 
     for(months=0;months<12;months++)
      {   count=1;
      printf("\033[1;35m") ; printf("\n\n-------------------%s---------------------\n",month[months]);
       printf("\033[1;32m"); printf("\n   sat    sun   mon   twe   wed   thu   ");printf("\033[1;31m");printf("fri\n\n");

        for(starting_days=1;starting_days<week_st_days;starting_days++) //for printing space 
         {printf("      ");count++;}       
        for(days=1;days<=monthdays[months];days++)
          {  
            if(count<=6){white();printf("%6d",days);} 
            if(count==7){red(); printf("%6d",days);printf("\n");count=0;}            
             count++; 
         }
         printf("\n");  // after the loop ecution the count variable will be set to +1 but the desired value is count-1
        // printf("\n%d\n",week_st_days);
         
      }  
         goto start;
 }

 
 
int year_starting_day_value(int check_year)

{
  int difference=0,extra_days=0,total_days=0,rem,year_starting_day=0,leap_year=0;
  int ref_year_starting_day=1;
  int ref_year_ending_day=7;      // its 1999 ending day 
  int ref_year=2000;
  
  if(check_year==1999) {year_starting_day=7;return year_starting_day;}
   // ref_year< actual year 
  if(ref_year<check_year)
   {  
      difference=check_year-ref_year;
      for(ref_year=2000;ref_year<check_year;ref_year++)
       {
         if(((ref_year%4==0) && (ref_year%100!=0))||(ref_year%400==0)){extra_days++;}
       }
      total_days=((difference)+extra_days);
      rem=total_days%7;                            //rem contain the the ending day value before the desired year 
      year_starting_day=rem+ref_year_starting_day;
      return year_starting_day; 
   }

  //ref_year is > actual year 

  if(ref_year>check_year)
   {   
      ref_year=1999;
      difference=ref_year-(check_year);
      if(((check_year%4==0) && (check_year%100!=0))||(check_year%400==0)) leap_year=1;
       
      for(ref_year=1999;ref_year>(check_year);ref_year--)
       {
         if(((ref_year%4==0) && (ref_year%100!=0))||(ref_year%400==0)){extra_days++;}
       }
      total_days=((difference)+extra_days);   // this total year contain the value of the next year starting day 
      total_days=total_days-(364);
      rem=total_days%7;                           //rem contain the days backward trough 1999 friday=7
      year_starting_day=(7-rem-leap_year);       // in every year the 1st day is  backward by 1 position from the froward year and if there was leap year the 1st day  
      return year_starting_day;                 // then backward by 2 positions from the forward year 
    }  
}
