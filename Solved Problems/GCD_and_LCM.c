#include<stdio.h>
//  this function is for GREATEST COMMON DEVISIOR
int GCD(int number1,int number2)
{
  int range;
  if(number1<number2) {range=number2;}
  else range=number1;
  for(int i=range;i>=1;i--) 
  {
   if((number1%i==0)&&(number2%i==0)){return(i);}
  }
}
   // this function is for LEAST COMMON MULTIPIIER
int LCM(int number1,int number2,int gcd)
{
   int lcm=(number1*number2)/gcd;
   return(lcm);
}

int main()
{

 int num1,num2;   
 printf("input the frist number:");scanf("%d",&num1);
 printf("input the second number:");scanf("%d",&num2);  
 int gcd = GCD(num1,num2);
 int lcm = LCM(num1,num2,gcd);
 printf("\n\nthe greatest common divisor =%d",gcd);printf("\n");
 printf("\nthe least common multiplier =%d",lcm);printf("\n");
}