#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //header file for sleep
#include <windows.h>
#include <stdbool.h>
#define AS 40
#define Y 500


char TN[AS] = "###########";
char LT[AS] = "\t###";
char ST[AS] = "###\t     ";
char BT[AS] = "###\t###";
char ON[AS] = "      ###      ";
char EM[AS] = "            ";

typedef struct numberSt {
int a;
char line1[AS];
char line2[AS];
char line3[AS];
char line4[AS];
char line5[AS];
char line6[AS];
char line7[AS];
char line8[AS];
char line9[AS];
char line10[AS];
} numberSt;

void lineAdd(numberSt* a,numberSt* b,numberSt* c,numberSt* d\
             ,numberSt* e,numberSt* f,numberSt* g,numberSt* h){

char line1[Y];
char line2[Y];
char line3[Y];
char line4[Y];
char line5[Y];
char line6[Y];
char line7[Y];
char line8[Y];
char line9[Y];
char line10[Y];
char *all_lines[]={line1,line2,line3,line4,line5,line6,line7,line8,line9,line10};


    strcpy(line1,a->line1);
    strcat(line1,"\t");
    strcat(line1,b->line1);
    strcat(line1,"\t");
    strcat(line1,c->line1);
    strcat(line1,"\t");
    strcat(line1,d->line1);
    strcat(line1,"\t");
    strcat(line1,e->line1);
    strcat(line1,"\t");
    strcat(line1,f->line1);
    strcat(line1,"\t");
    strcat(line1,g->line1);
    strcat(line1,"\t");
    strcat(line1,h->line1);

    strcpy(line2,a->line2);
    strcat(line2,"\t");
    strcat(line2,b->line2);
    strcat(line2,"\t");
    strcat(line2,c->line2);
    strcat(line2,"\t");
    strcat(line2,d->line2);
    strcat(line2,"\t");
    strcat(line2,e->line2);
    strcat(line2,"\t");
    strcat(line2,f->line2);
    strcat(line2,"\t");
    strcat(line2,g->line2);
    strcat(line2,"\t");
    strcat(line2,h->line2);

    strcpy(line3,a->line3);
    strcat(line3,"\t");
    strcat(line3,b->line3);
    strcat(line3,"\t");
    strcat(line3,c->line3);
    strcat(line3,"\t");
    strcat(line3,d->line3);
    strcat(line3,"\t");
    strcat(line3,e->line3);
    strcat(line3,"\t");
    strcat(line3,f->line3);
    strcat(line3,"\t");
    strcat(line3,g->line3);
    strcat(line3,"\t");
    strcat(line3,h->line3);

    strcpy(line4,a->line4);
    strcat(line4,"\t");
    strcat(line4,b->line4);
    strcat(line4,"\t");
    strcat(line4,c->line4);
    strcat(line4,"\t");
    strcat(line4,d->line4);
    strcat(line4,"\t");
    strcat(line4,e->line4);
    strcat(line4,"\t");
    strcat(line4,f->line4);
    strcat(line4,"\t");
    strcat(line4,g->line4);
    strcat(line4,"\t");
    strcat(line4,h->line4);

    strcpy(line5,a->line5);
    strcat(line5,"\t");
    strcat(line5,b->line5);
    strcat(line5,"\t");
    strcat(line5,c->line5);
    strcat(line5,"\t");
    strcat(line5,d->line5);
    strcat(line5,"\t");
    strcat(line5,e->line5);
    strcat(line5,"\t");
    strcat(line5,f->line5);
    strcat(line5,"\t");
    strcat(line5,g->line5);
    strcat(line5,"\t");
    strcat(line5,h->line5);

    strcpy(line6,a->line6);
    strcat(line6,"\t");
    strcat(line6,b->line6);
    strcat(line6,"\t");
    strcat(line6,c->line6);
    strcat(line6,"\t");
    strcat(line6,d->line6);
    strcat(line6,"\t");
    strcat(line6,e->line6);
    strcat(line6,"\t");
    strcat(line6,f->line6);
    strcat(line6,"\t");
    strcat(line6,g->line6);
    strcat(line6,"\t");
    strcat(line6,h->line6);


    strcpy(line7,a->line7);
    strcat(line7,"\t");
    strcat(line7,b->line7);
    strcat(line7,"\t");
    strcat(line7,c->line7);
    strcat(line7,"\t");
    strcat(line7,d->line7);
    strcat(line7,"\t");
    strcat(line7,e->line7);
    strcat(line7,"\t");
    strcat(line7,f->line7);
    strcat(line7,"\t");
    strcat(line7,g->line7);
    strcat(line7,"\t");
    strcat(line7,h->line7);


    strcpy(line8,a->line8);
    strcat(line8,"\t");
    strcat(line8,b->line8);
    strcat(line8,"\t");
    strcat(line8,c->line8);
    strcat(line8,"\t");
    strcat(line8,d->line8);
    strcat(line8,"\t");
    strcat(line8,e->line8);
    strcat(line8,"\t");
    strcat(line8,f->line8);
    strcat(line8,"\t");
    strcat(line8,g->line8);
    strcat(line8,"\t");
    strcat(line8,h->line8);

    strcpy(line9,a->line9);
    strcat(line9,"\t");
    strcat(line9,b->line9);
    strcat(line9,"\t");
    strcat(line9,c->line9);
    strcat(line9,"\t");
    strcat(line9,d->line9);
    strcat(line9,"\t");
    strcat(line9,e->line9);
    strcat(line9,"\t");
    strcat(line9,f->line9);
    strcat(line9,"\t");
    strcat(line9,g->line9);
    strcat(line9,"\t");
    strcat(line9,h->line9);

    strcpy(line10,a->line10);
    strcat(line10,"\t");
    strcat(line10,b->line10);
    strcat(line10,"\t");
    strcat(line10,c->line10);
    strcat(line10,"\t");
    strcat(line10,d->line10);
    strcat(line10,"\t");
    strcat(line10,e->line10);
    strcat(line10,"\t");
    strcat(line10,f->line10);
    strcat(line10,"\t");
    strcat(line10,g->line10);
    strcat(line10,"\t");
    strcat(line10,h->line10);

    for(int i = 0; i<10;i++)
        printf("%s\n",all_lines[i]);



}


void makeNumbers(numberSt *figure){

    if(figure->a==0){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, TN);
      strcpy(figure->line3, BT);
      strcpy(figure->line4, BT);
      strcpy(figure->line5, BT);
      strcpy(figure->line6, BT);
      strcpy(figure->line7, BT);
      strcpy(figure->line8, BT);
      strcpy(figure->line9, TN);
      strcpy(figure->line10,TN);
    }

   else if(figure->a==1){
      strcpy(figure->line1, ON);
      strcpy(figure->line2, ON);
      strcpy(figure->line3, ON);
      strcpy(figure->line4, ON);
      strcpy(figure->line5, ON);
      strcpy(figure->line6, ON);
      strcpy(figure->line7, ON);
      strcpy(figure->line8, ON);
      strcpy(figure->line9, ON);
      strcpy(figure->line10,ON);
    }

    else if(figure->a==2){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, TN);
      strcpy(figure->line3, LT);
      strcpy(figure->line4, LT);
      strcpy(figure->line5, TN);
      strcpy(figure->line6, TN);
      strcpy(figure->line7, ST);
      strcpy(figure->line8, ST);
      strcpy(figure->line9, TN);
      strcpy(figure->line10,TN);
    }
   else if(figure->a==3){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, TN);
      strcpy(figure->line3, LT);
      strcpy(figure->line4, LT);
      strcpy(figure->line5, TN);
      strcpy(figure->line6, TN);
      strcpy(figure->line7, LT);
      strcpy(figure->line8, LT);
      strcpy(figure->line9, TN);
      strcpy(figure->line10,TN);
    }

  else if(figure->a==4){
      strcpy(figure->line1, BT);
      strcpy(figure->line2, BT);
      strcpy(figure->line3, BT);
      strcpy(figure->line4, BT);
      strcpy(figure->line5, TN);
      strcpy(figure->line6, TN);
      strcpy(figure->line7, LT);
      strcpy(figure->line8, LT);
      strcpy(figure->line9, LT);
      strcpy(figure->line10,LT);
    }

   else if(figure->a==5){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, TN);
      strcpy(figure->line3, ST);
      strcpy(figure->line4, ST);
      strcpy(figure->line5, TN);
      strcpy(figure->line6, TN);
      strcpy(figure->line7, LT);
      strcpy(figure->line8, LT);
      strcpy(figure->line9, TN);
      strcpy(figure->line10,TN);
    }

   else if(figure->a==6){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, TN);
      strcpy(figure->line3, ST);
      strcpy(figure->line4, ST);
      strcpy(figure->line5, TN);
      strcpy(figure->line6, TN);
      strcpy(figure->line7, BT);
      strcpy(figure->line8, BT);
      strcpy(figure->line9, TN);
      strcpy(figure->line10,TN);
    }

  else  if(figure->a==7){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, TN);
      strcpy(figure->line3, LT);
      strcpy(figure->line4, LT);
      strcpy(figure->line5, LT);
      strcpy(figure->line6, LT);
      strcpy(figure->line7, LT);
      strcpy(figure->line8, LT);
      strcpy(figure->line9, LT);
      strcpy(figure->line10,LT);
    }


  else  if(figure->a==8){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, BT);
      strcpy(figure->line3, BT);
      strcpy(figure->line4, BT);
      strcpy(figure->line5, TN);
      strcpy(figure->line6, TN);
      strcpy(figure->line7, BT);
      strcpy(figure->line8, BT);
      strcpy(figure->line9, BT);
      strcpy(figure->line10,TN);
    }

  else  if(figure->a==9){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, BT);
      strcpy(figure->line3, BT);
      strcpy(figure->line4, BT);
      strcpy(figure->line5, TN);
      strcpy(figure->line6, LT);
      strcpy(figure->line7, LT);
      strcpy(figure->line8, LT);
      strcpy(figure->line9, TN);
      strcpy(figure->line10,TN);
    }

 else if(figure->a==10){
      strcpy(figure->line1, TN);
      strcpy(figure->line2, ON);
      strcpy(figure->line3, ON);
      strcpy(figure->line4, ON);
      strcpy(figure->line5, TN);
      strcpy(figure->line6, LT);
      strcpy(figure->line7, ON);
      strcpy(figure->line8, ON);
      strcpy(figure->line9, ON);
      strcpy(figure->line10,TN);
    }
    else;
}



int main(){
system("mode 80,25");   //Set mode to ensure window does not exceed buffer size
  SMALL_RECT WinRect = {0, 0, 80, 25};   //New dimensions for window in 8x12 pixel chars
  SMALL_RECT* WinSize = &WinRect;
  SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, WinSize);
    numberSt numbers[10];

    for(int i = 0; i<10;i++){
    numbers[i].a=i;
    makeNumbers(&numbers[i]);
    }


    while(1){
    time_t s, val = 1;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);


    int a = (current_time->tm_hour)/10;
    int b = (current_time->tm_hour)%10;
    int c = (current_time->tm_min)/10;
    int d = (current_time->tm_min)%10;
    int e = (current_time->tm_sec)/10;
    int f = (current_time->tm_sec)%10;
    lineAdd(&numbers[a],&numbers[b],&numbers[10],&numbers[c],&numbers[d],&numbers[10],&numbers[e],&numbers[f]);
    sleep(1);
    system("cls");
           }




return 0;
}
