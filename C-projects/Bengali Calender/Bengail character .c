#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>





int year_starting_day_value(int check_year);
void red();
void white();
void black();
void green();
void loading();


int months,days; int count = 0;int week_st_days=0,starting_days,check=0;  int check_year;
char *month[]={"(Boishakh)","(Joishtho)","(Ashaar)","(Srabon)","(Vadro)","(Ashsin)","(Kartik)","(Ogrohaeon)","(Poush)","(Magh)","(Falgun)","(Choitro)"};
int monthdays[12]={31,31,31,31,31,31,30,30,30,30,29,30};

int main()
 {   
       system("color 00");
       start:
       red();printf("\n\n\nBOCHOR:");
       scanf("%d",&check_year);
       week_st_days=4;
       loading();
       system("cls");
     
     red();printf("\n BOCHOR: %d\n",check_year);
     if((((check_year+594)%4==0) && ((check_year+594)%100!=0))||((check_year+594)%400==0)){monthdays[10]=30;} //cheaking if the entered year  is leapyear or not 
     for(months=0;months<12;months++)
     { 
        count=1;
        green(); printf("\n\n                  %s               ",month[months]); white();printf("\n---------------------------------------------------");
        white(); printf("\n    soni   robi  som  mongol budh  brios "); red(); printf("sukro\n\n");
        for(starting_days=1;starting_days<week_st_days;starting_days++){printf("      ");count++;}//for printing space         
        for(days=1;days<=monthdays[months];days++)
          {  
            if(count<=6){white();printf("%6d",days);} 
            if(count==7){red(); printf("%6d",days);printf("\n");count=0;}            
             count++; 
         }
         printf("\n");
         week_st_days=count; 
      } 
      red(); printf("\nDo you want to see the calender of another year?\npress [C] to see the calender of another year and [E] to exit.\n");
       char key;
       check: 
       sleep(1);
       scanf("%c",&key);
       if(key=='c'||key=='C'){goto start;}
       if(key=='e'||key=='E'){return 0;}
       else{goto check;}      

  }  


// this function retun the  value of the desired starting day of the given year 
  
int year_starting_day_value(int check_year)

{
   check_year=check_year +594;
  int difference=0,extra_days=0,total_days=0,rem,year_starting_day=0,leap_year=0;
  int ref_year_starting_day=1;
  int ref_year_ending_day=7;      // its 1999 ending day 
  int ref_year=1400;
  
  if(check_year==1999) {year_starting_day=7;return year_starting_day;}
   // ref_year< actual year 
  if(ref_year<check_year)
   {  
      difference=check_year-ref_year;
      for(ref_year=2000;ref_year<check_year;ref_year++)
       {
         if(((ref_year%4==0) && (ref_year%100!=0))||(ref_year%400==0)){extra_days++;}
       }
      total_days=((difference*365)+extra_days);
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
      total_days=((difference*365)+extra_days);   // this total year contain the value of the next year starting day 
      total_days=total_days-(364);
      rem=total_days%7;                           //rem contain the days backward trough 1999 friday=7
      year_starting_day=(7-rem-leap_year);       // in every year the 1st day is  backward by 1 position from the froward year and if there was leap year the 1st day  
      return year_starting_day;                 // then backward by 2 positions from the forward year 
    }  
}    
 

//font color
void Black()   {printf("\033[1;30m");} 
void red()     {printf("\033[1;31m");}
void white()   {printf("\033[1;37m");}
void green()   {printf("\033[1;32m");}
  //loading animation
void loading  (){
  int row,col,r,c,q;
   system("cls");
   printf("\033[1;32m"); printf("\n\n\n\nloading...\n \n"); 
   for(r=1;r<=80;r++){
   for(q=0;q<=10000000;q++);//to display the character slowly
   red(); printf("%c",254);}
   green();printf("\n\n\n---->Your calender is ready.Press any key to continue...");
   getch(); 
}
