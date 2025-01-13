#include <stdio.h>
#include<windows.h>
#include<conio.h>

void barrier();
void logic();
void input();
void writeintro();
void writegap(int r);
void writeW (int r);
void writeE (int r);
void writeL (int r);
void writeC (int r);
void writeO (int r);
void writeM (int r);
void writeN(int r);
void writeB (int r);
void writeS (int r);


int fposx,fposy,position,gameover;
int display_height=30,display_width=80;     // height(y)=30 and width(x)=80
static int sposx,sposy,score=0;
int main()
{  
     system("color 0A");
     writeintro();
     printf("\n\n\nWellcome to the SHITIEST GAME you never played before. The more SHIT  you eat , you will get more points.\n \n\n");
     printf("INSTRUCTION: TO MOVE your mouth   >> PRESS W,S,A,D KEY <<   press space to pause the game and press x to quit.\n \n \n");
     printf("\033[1;35m");printf("->press any  key to start the game !                                                                                   ");
              getch();
              start:
              score=0;

     sposx=display_width/2;
     sposy =display_height/2;
     fposx=(display_width/2)-10;
     fposy=(display_height/2)-10;

            while(gameover!=1)

                {  system("cls");
                   printf("score=%d ( space to pause ) ( x to quit) \n",score);
                   barrier();
                   input();
                   logic();                    
                }
                    
                  
      printf("\n \n YOU SUCK!  Your score is only [%d]\n DON'T PLAY THIS GAME AGAIN.",score);
      printf("\n\nDo you want to play this shit again ? --> Then press (Y) twice.........");

                   getch();
                   char key1;
                   key1=getch();
                   if(key1=='y'||key1=='Y') 
                       { 
                          gameover=0;
                          goto start;   
                       }
  
}



void barrier()
{
 int x, y;

 for(y=1;y<=30;y++)                                                 // display height is taken 30 and display width is taken 80
    {
      for(x=1;x<=80;x++)
        {   
            if(y==1||y==30||x==1||x==80){ printf("\033[1;36m");printf("%c",219);}
            else
            {
               if(y==fposy&&x==fposx){ printf("\033[1;32m"); printf("%c",254);}
               else if(y==(sposy)&&x==(sposx)) { printf("\033[1;35m"); printf("%c",254);}
               else printf(" ");
            }
        }
                 printf("\n");
     }

}




void logic()
{ 
    
  if(position==1)
    {
      sposx--;
    }
  if(position==2)
    {
       sposy++;
    }
  if(position==3)
     {
       sposx++;
     }
  if(position==4)
    {
       sposy--;
    }
  if((sposx==fposx)&&(sposy==fposy))
   {      
         score=score+10;
         food:
         fposx=(rand()%78)+1 ;
         fposy =(rand()%29)+1;
        if(fposx==0||fposy==0||fposx==80||fposy==30)
          {
             goto food ;
          }
    }

   if(sposx==1||sposy==1||sposx==80 || sposy==30)
     {
        gameover =1;
     }


}

  


void input ()

{
   if (kbhit())
     {
        char key;
        key=getch();
         
       if(key=='a'||key=='A')  position=1;
       
       if(key=='s'||key=='S') position=2;
            
       if(key=='d'||key=='D') position=  position=3;
            
       if(key=='w'||key=='W') position =4;

       if(key=='x'||key=='X') gameover=1;

       if(key==32)
       {
         printf("\npress any key to continue...");
         getch();
       }
         
     }
            
} 


void writegap(int r)
   {
       int c;

        for(c=1;c<=3;c++)
        {
         printf(" ");
        }
   }

void writeW (int r)
{
    int c,i;

    for(i=1;i<=2;i++)
    {
        for(c=1;c<=9;c++)
        {
          if((r<=7)&&(c==1||c==2||c==8||c==9))
          {
            printf("%c",222);
          }
         else if((r==8)&&(c==2||c==3||c==4||c==5||c==6||c==7||c==8))
         {
             printf("%c",222);
         }
         else if(r==9 &&(c==3||c==4||c==4||c==5||c==6||c==7))
         {
             printf("%c",222);
         }
         else printf(" ");
        }
     }



}

void writeE (int r)
{
    int c;

        for(c=1;c<=9;c++)
        {
          if((r==1||r==2||r==8||r==9)&&(c<=9))
          {
            printf("%c",222);
          }
         else if((r==3||r==7)&&(c==1||c==2))
         {
             printf("%c",222);
         }
         else if((r==4||r==6)&&(c==1||c==2||c==7))
         {
             printf("%c",222);
         }
         else if((r==5)&&c<=7)
         {
             printf("%c",222);
         }
         else printf(" ");
        }

}


void writeL (int r)
{
    int c;

        for(c=1;c<=9;c++)
        {
          if(r<=7&&c<=2)
          {
              printf("%c",222);
          }
          else if((r==8||r==9)&&c<=9)
          {
              printf("%c",222);
          }
         else printf(" ");
        }


}

void writeC (int r)
{
    int c;

        for(c=1;c<=9;c++)
        {
          if((r==3||r==4|r==5||r==6||r==7)&&(c==1||c==2))
          {
            printf("%c",222);
          }
         else if((r==2||r==8)&&c<=9)
         {
             printf("%c",222);
         }
         else if((r==1||r==9)&&(c==2||c==3||c==4||c==5||c==6||c==7||c==8||c==9))
         {
             printf("%c",222);
         }
         else printf(" ");
        }

}
  
  
void writeO (int r)
{
    int c;

        for(c=1;c<=9;c++)
        {
          if((r==3||r==4||r==5||r==6||r==7)&&(c==1||c==2||c==8||c==9))
          {
            printf("%c",222);
          }
         else if((r==1||r==2||r==8||r==9)&&c<=9)
         {
             printf("%c",222);
         }

         else printf(" ");
        }

}
void writeM (int r)
{
    int c;
    for(c=1;c<=9;c++)
        {
          if(r==1 &&(c==1||c==2||c==8||c==9))
          {
              printf("%c",222);
          }
          else if((r==2)&&(c==1||c==2||c==3||c==7||c==8||c==9))
          {
              printf("%c",222);
          }
          else if((r==3)&&(c==1||c==2||c==3||c==4||c==6||c==8||c==7||c==9))
          {
              printf("%c",222);
          }
          else if((r==4)&&(c==1||c==2||c==4||c==5||c==6||c==8||c==9))
          {

              printf("%c",222);
          }
          else if((r==5)&&(c==1||c==2||c==5||c==8||c==9))
          {
                 printf("%c",222);
               
          }
         else if((r==6||r==7||r==8||r==9)&&(c==1||c==2||c==8||c==9))
         {
             printf("%c",222);
         }
         else printf(" ");
        }

}



void writeN(int r)
{
    int c;
      for(c=1;c<=9;c++)
        {
          if((r==1||r==8||r==9)&&(c==1||c==2||c==8||c==9))
          {
            printf("%c",222);

          }
          else if(r==7&&(c==1||c==2||c==7||c==8||c==9))
          {
              printf("%c",222);
          }
          else if(r==6&&(c==1||c==2||c==6||c==7||c==8||c==9))
          {
              printf("%c",222);
          }
          else if(r==5&&(c==1||c==2||c==5||c==6||c==8||c==9))
          {
              printf("%c",222);
          }
          else if(r==4&&(c==1||c==2||c==4||c==5||c==8||c==9))
          {
              printf("%c",222);
          }
          else if(r==3&&(c==1||c==2||c==3||c==4||c==8||c==9))
          {
              printf("%c",222);
          }
          else if(r==2&&(c==1||c==2||c==3||c==8||c==9))
          {
              printf("%c",222);
          }
         else printf(" ");
        }

}



void writeB (int r)
{
    int c;
   for(c=1;c<=7;c++)
        {
          if((r==3||r==4||r==6||r==7)&&(c==1||c==2||c==6||c==7))
          {
            printf("%c",222);
          }
         else if((r==2||r==8)&&c<=7)
         {
             printf("%c",222);
         }
         else if((r==1||r==5||r==9)&&c<=6)
         {
             printf("%c",222);
         }
         else printf(" ");
        }
}



void writeS (int r)
{
    int c;

        for(c=1;c<=9;c++)
        {
          if((r==3||r==4)&&(c<=2))
          {
            printf("%c",222);
          }
         else if((r==1||r==2||r==8||r==9||r==6||r==5)&&c<=9)
         {
             printf("%c",222);
         }
         else if(r==7&&(c==8||c==9))
         {
           printf("%c",222);
         }

         else printf(" ");
        }


}

void writeintro()

{      printf("\n\n \n");
       int row,k=0;
     for(row=1;row<=10;row++)
    {
        for(k=1;k<=15;k++)         // this loop print the patteRn horizontally
       {   
           if(k==10)
         {
           writegap(row);
         }

         else if(k==2)
         {
            printf("  "); writeW(row);
         }

         else if(k==3)
          {
             printf("  "); writeE(row);
          }
          else if(k==4)
          {
             printf("  "); writeL(row);
          }
          else if(k==5)
          {
             printf("  "); writeL(row);
          }
          else if(k==6)
          {
              printf("  ");writeC(row);
          }else if(k==7)
          {
              printf("  ");writeO(row);
          }else if(k==8)
          {
              printf("  ");writeM(row);
          }else if(k==9)
          {
              printf("  ");writeE(row);
          }else if(k==11)
          {
              printf("  ");writeN(row);
          }else if(k==12)
          {
              printf("  ");writeO(row);
          }
          else if(k==13)
          {
              printf("  ");writeO(row);
          }
          else if(k==14)
          {
              printf("  ");writeB(row);
          }
          else if(k==15)
          {
              printf("  ");writeS(row);
          }

        }    printf("\n");
        
       } 
}                 

