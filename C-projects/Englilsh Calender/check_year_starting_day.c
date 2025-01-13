#include<stdio.h>



int year_starting_day_value(int year)
{
  int difference=0,extra_days=0,total_days=0,rem,year_starting_day=0,leap_year=0;
  
 //referance year set to  1900
  int ref_year_starting_day=1;
  int ref_year_ending_day=7;      // its 1999 ending day 
  int ref_year=2000;
  
   // ref_year< actual year 
  if(ref_year<year)
  {
       
      difference=year-ref_year;
      for(ref_year=2000;ref_year<year;ref_year++)
       {
         if(((ref_year%4==0) && (ref_year%100!=0))||(ref_year%400==0)){extra_days++;}
       }
      total_days=((difference*365)+extra_days);
      rem=total_days%7;                            //rem contain the the ending day value before the desired year 
      year_starting_day=rem+ref_year_starting_day;
      return year_starting_day; 
  }

  //ref_year is > actual year 

  if(ref_year>year)
   {   
      ref_year=1999;
      difference=ref_year-(year);
      if(((year%4==0) && (year%100!=0))||(year%400==0)) leap_year=1;
       
      for(ref_year=1999;ref_year>(year);ref_year--)
       {
         if(((ref_year%4==0) && (ref_year%100!=0))||(ref_year%400==0)){extra_days++;}
       }
      total_days=((difference*365)+extra_days);   // this total year contain the value of the next year starting day 
      total_days=total_days-(364-leap_year);
      rem=total_days%7;                            //rem contain the days backward trough 1999 friday
      year_starting_day=(7-rem);
      return year_starting_day;    
    }
    
      if(year=1999) 
     {
         year_starting_day=7;return year_starting_day;
     }
  
     
}

int  main()
{
  int y,i;
  printf("input the year:");
  scanf("%d", &y);
  i=year_starting_day_value(y);
  printf("%d",i);
}