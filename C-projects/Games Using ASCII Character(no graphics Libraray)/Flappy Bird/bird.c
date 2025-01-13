

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>



void loading();
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
void writeN (int r);
void writeB (int r);
void writeS (int r);





int p1_posx,p1_posy,p2_posx,p2_posy,p3_posx,p3_posy,gameover,position;
int end1,end2,end3,start1,start2,start3;     // height(y)=30 and width(x)=80
static int bposx,bposy,score=0;
int main()
{    
     
     writeintro();
   
     printf("\n\n\nWellcome to the SHITIEST GAME you never played before. \n \n\n");
     printf("INSTRUCTION:  Move the BIRD(%c)   >> PRESS W,S,A,D KEY << AND SAVE IT FROM HITTING THE PILLAR.  press space to pause the game and press x to quit.\n \n \n ",157);
     printf("press any  key to start the game--  ");
              getch();
              start:
              loading(); 
              score=0;srand(time(NULL));

        bposx=5;
      bposy =15;
     p1_posx=20;
     p2_posx=44;
     p3_posx=68;

              start1=(rand()%23);end1=start1+7;
              start2=(rand()%23);end2=start2+7;
              start3=(rand()%23);end3=start3+7;
    

            while(gameover!=1)

                {  
                   system("cls"); 
                   printf("score=%d ( space to pause ) ( x to quit) \n",score+1);
                   barrier();
                   input();
                   logic();
                   
                   if(p1_posx==0) {p1_posx=72;start1=(rand()%23);end1=start1+7;}                  
                   if(p2_posx==0) {p2_posx=72;start2=(rand()%23);end2=start2+7;}
                   if(p3_posx==0) {p3_posx=72;start3=(rand()%23);end3=start3+7;}
                   
                   if(score<100)
                    {
                      p3_posx=p3_posx-1;
                      p2_posx=p2_posx-1;
                      p1_posx=p1_posx-1; 
                    }

                   
                   if(score>100)
                    {
                      p3_posx=p3_posx-2;
                      p2_posx=p2_posx-2;
                      p1_posx=p1_posx-2; 
                    } 

                      score++;                   
                }
                    
      printf("  GAME OVER!\n");            
      printf("\033[1;31m"); printf("\n \n FUCK YOU!");printf("\033[1;33m"); printf("Your score is only [%d]\n DON'T PLAY THIS SHIT AGAIN.",score);
      printf("\n\nDo you want to play this (SHIT) again ? --> Then press (Y) twice.........");

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
      for(x=1;x<=92;x++)
        {
          if(y==1||y==30)  { printf("\033[1;32m"); printf("%c",178);}
           else
            {      
                       
                          //1st pillar
               printf("\033[1;35m");
               if((y<=start1||y>=end1)&&(x==p1_posx)) printf("%c",178);
               if((y>start1&&y<end1)&&(x==p1_posx))printf(" ");
               if((y<=start1||y>=end1)&&(x==p1_posx)) printf("%c",178);
               if((y>start1&&y<end1)&&(x==p1_posx))printf(" ");
               if((y<=start1||y>=end1)&&(x==p1_posx)) printf("%c",178);
               if((y>start1&&y<end1)&&(x==p1_posx))printf(" ");
               if((y<=start1||y>=end1)&&(x==p1_posx)) printf("%c",178);
               if((y>start1&&y<end1)&&(x==p1_posx))printf(" ");
               
                          // 2nd pillar      
                          printf("\033[1;31m") ;        
                 if((y<=start2||y>=end2)&&(x==p2_posx)) printf("%c",178);
                 if((y>start2&&y<end2)&&(x==p2_posx))  printf(" "); 
                 if((y<=start2||y>=end2)&&(x==p2_posx)) printf("%c",178);
                 if((y>start2&&y<end2)&&(x==p2_posx))  printf(" "); 
                 if((y<=start2||y>=end2)&&(x==p2_posx)) printf("%c",178);
                 if((y>start2&&y<end2)&&(x==p2_posx))  printf(" "); 
                 if((y<=start2||y>=end2)&&(x==p2_posx)) printf("%c",178);
                 if((y>start2&&y<end2)&&(x==p2_posx))  printf(" "); 
               
                         // 3rd pillar 
                         printf("\033[0;34m");
                 if((y<=start3||y>=end3)&&(x==p3_posx)) printf("%c",178);
                 if((y>start3&&y<end3)&&(x==p3_posx))  printf(" ");
                 if((y<=start3||y>=end3)&&(x==p3_posx)) printf("%c",178);
                 if((y>start3&&y<end3)&&(x==p3_posx))  printf(" ");
                 if((y<=start3||y>=end3)&&(x==p3_posx)) printf("%c",178);
                 if((y>start3&&y<end3)&&(x==p3_posx))  printf(" ");
                 if((y<=start3||y>=end3)&&(x==p3_posx)) printf("%c",178);
                 if((y>start3&&y<end3)&&(x==p3_posx))  printf(" ");
                
                 
                 if(y==(bposy)&&x==(bposx)){printf("\033[1;31m"); printf("%c",157);}  // for printing the bird position
                 else printf(" ");
            }
        }
                 printf("\n");
     }

}




void logic()
{ 
    
  if(position==1)  bposx=bposx-1;  
  if(position==2)  bposy=bposy+1;
  if(position==3)  bposx=bposx+1;     
  if(position==4)  bposy=bposy-1;

  if(((bposx==p1_posx-1)&&(bposy<=start1||bposy>=end1))) gameover=1;
  if(((bposx==p2_posx-1)&&(bposy<=start2||bposy>=end2))) gameover=1;
  if(((bposx==p3_posx-1)&&(bposy<=start3||bposy>=end3))) gameover=1;

  if(((bposx-p1_posx==-2)&&(bposy<=start1||bposy>=end1))){gameover=1;}
  if(((bposx-p2_posx==-2)&&(bposy<=start2||bposy>=end2))){gameover=1;} 
  if(((bposx-p3_posx==-2)&&(bposy<=start3||bposy>=end3))){gameover=1;}
  
  if(bposx==1||bposy==1||bposx==80||bposy==30) gameover=1;

  

}

  


void input ()

{
   if (kbhit())
     {
        char key;
        key=getch();
         
       if(key=='a'||key=='A') position=1; 
       if(key=='s'||key=='S') position=2;
       if(key=='d'||key=='D') position=3;
       if(key=='w'||key=='W') position=4;
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
       for(c=1;c<=2;c++) printf(" ");    
   }

void writeW (int r)
{
    int c,i;
    for(i=1;i<=2;i++)
    {
        for(c=1;c<=9;c++)
        {   
         if((r<=7)&&(c==1||c==2||c==8||c==9)) printf("%c",177); 
         else if((r==8)&&(c==2||c==3||c==4||c==5||c==6||c==7||c==8)) printf("%c",177);
         else if(r==9 &&(c==3||c==4||c==4||c==5||c==6||c==7))  printf("%c",177);
         else printf(" ");
        }
     }
}

void writeE (int r)
{
        int c;
        for(c=1;c<=9;c++)
        { 
          if((r==1||r==2||r==8||r==9)&&(c<=9))  printf("%c",177);
          else if((r==3||r==7)&&(c==1||c==2))  printf("%c",177);
          else if((r==4||r==6)&&(c==1||c==2||c==7))  printf("%c",177);
          else if((r==5)&&c<=7)  printf("%c",177);
          else printf(" ");
        }

}


void writeL (int r)
{
        int c;
        for(c=1;c<=9;c++)
        { 
          if(r<=7&&c<=2)  printf("%c",177);
          else if((r==8||r==9)&&c<=9) printf("%c",177);
          else printf(" ");
        }


}

void writeC (int r)
{
        int c;
        for(c=1;c<=9;c++)
        { 
          if((r==3||r==4|r==5||r==6||r==7)&&(c==1||c==2)) printf("%c",177);
          else if((r==2||r==8)&&c<=9)  printf("%c",177);
          else if((r==1||r==9)&&(c==2||c==3||c==4||c==5||c==6||c==7||c==8||c==9))  printf("%c",177);
          else printf(" ");
        }

}
  
  
void writeO (int r)
{
        int c;
      
        for(c=1;c<=9;c++)
        {
          if((r==3||r==4||r==5||r==6||r==7)&&(c==1||c==2||c==8||c==9))  printf("%c",177);
          else if((r==1||r==2||r==8||r==9)&&c<=9)  printf("%c",177);
          else printf(" ");
        }

}
void writeM (int r)
{
        int c;
         
        for(c=1;c<=9;c++)
        {    
          if(r==1 &&(c==1||c==2||c==8||c==9))  printf("%c",177);
          else if((r==2)&&(c==1||c==2||c==3||c==7||c==8||c==9)) printf("%c",177);
          else if((r==3)&&(c==1||c==2||c==3||c==4||c==6||c==8||c==7||c==9)) printf("%c",177);
          else if((r==4)&&(c==1||c==2||c==4||c==5||c==6||c==8||c==9)) printf("%c",177);
          else if((r==5)&&(c==1||c==2||c==5||c==8||c==9))  printf("%c",177);
          else if((r==6||r==7||r==8||r==9)&&(c==1||c==2||c==8||c==9))  printf("%c",177);
          else printf(" ");
        }

}



void writeN(int r)
{
      int c;
      for(c=1;c<=9;c++)
        {  
          if((r==1||r==8||r==9)&&(c==1||c==2||c==8||c==9)) printf("%c",177);
          else if(r==7&&(c==1||c==2||c==7||c==8||c==9))  printf("%c",177);
          else if(r==6&&(c==1||c==2||c==6||c==7||c==8||c==9)) printf("%c",177);
          else if(r==5&&(c==1||c==2||c==5||c==6||c==8||c==9))  printf("%c",177);
          else if(r==4&&(c==1||c==2||c==4||c==5||c==8||c==9)) printf("%c",177);
          else if(r==3&&(c==1||c==2||c==3||c==4||c==8||c==9)) printf("%c",177);
          else if(r==2&&(c==1||c==2||c==3||c==8||c==9)) printf("%c",177);
          else printf(" ");
        }

}



void writeB (int r)
{
    int c;
    for(c=1;c<=7;c++)
     {
       if((r==3||r==4||r==6||r==7)&&(c==1||c==2||c==6||c==7))  printf("%c",177);
       else if((r==2||r==8)&&c<=7)  printf("%c",177);
       else if((r==1||r==5||r==9)&&c<=6)   printf("%c",177);
       else printf(" ");
     }
}



void writeS (int r)
{
    int c;
    for(c=1;c<=9;c++)
    {
     if((r==3||r==4)&&(c<=2))  printf("%c",177);
     else if((r==1||r==2||r==8||r==9||r==6||r==5)&&c<=9) printf("%c",177);
     else if(r==7&&(c==8||c==9))  printf("%c",177);
     else printf(" ");
    }
       
}

void writeintro()

{      printf("\n\n");
       int row,k=0;
     for(row=1;row<=10;row++)
    {
        for(k=1;k<=15;k++)         // this loop print the patteRn horizontally
       {   
          if(k==1||k==10){printf("  "); writegap(row);}

          else if(k==2){printf(" "); writeW(row);}
          else if(k==3){printf(" "); writeE(row);}
          else if(k==4){printf(" "); writeL(row);}
          else if(k==5){printf(" "); writeL(row);}
          else if(k==6){printf(" "); writeC(row);}    
          else if(k==7){printf(" "); writeO(row);}  
          else if(k==8){printf(" "); writeM(row);}
          else if(k==9){printf(" "); writeE(row);}

          else if(k==11){printf(" ");writeN(row);}
          else if(k==12){printf(" ");writeO(row);}
          else if(k==13){printf(" ");writeO(row);}
          else if(k==14){printf(" ");writeB(row);}
          else if(k==15){printf(" ");writeS(row);}
          
        }    printf("\n");
        
       } 
}                 

  void loading  (){
  int row,col,r,c,q;
   system("cls");
   printf("\033[1;32m"); printf("\n\n\n\nloading...\n \n"); 
   for(r=1;r<=100;r++){
   for(q=0;q<=100000000;q++);//to display the character slowly
   printf("\033[1;35m"); printf("%c",219);}
   printf("\033[1;34m") ; printf("\n\n\n-->game loaded successfully press any key to start the game");
   getch(); 
}




