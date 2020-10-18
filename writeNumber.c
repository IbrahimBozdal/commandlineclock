#include<stdio.h>
#include<string.h>
#define AS 40
#define Y 100
#define  paster(a) figure->line##a

char TN[AS] = "###########";
char LT[AS] = "\t###";
char ST[AS] = "###\t     ";
char BT[AS] = "###\t###";
char ON[AS] = "      ###      ";

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

void lineAdd(numberSt* a,numberSt* b){

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

    strcpy(line2,a->line2);
    strcat(line2,"\t");
    strcat(line2,b->line2);

    strcpy(line3,a->line3);
    strcat(line3,"\t");
    strcat(line3,b->line3);

    strcpy(line4,a->line4);
    strcat(line4,"\t");
    strcat(line4,b->line4);

    strcpy(line5,a->line5);
    strcat(line5,"\t");
    strcat(line5,b->line5);

    strcpy(line6,a->line6);
    strcat(line6,"\t");
    strcat(line6,b->line6);

    strcpy(line7,a->line7);
    strcat(line7,"\t");
    strcat(line7,b->line7);

    strcpy(line8,a->line8);
    strcat(line8,"\t");
    strcat(line8,b->line8);

    strcpy(line9,a->line9);
    strcat(line9,"\t");
    strcat(line9,b->line9);

    strcpy(line10,a->line10);
    strcat(line10,"\t");
    strcat(line10,b->line10);

    for(int i = 0; i<10;i++)
        printf("%s\n",all_lines[i]);



}

void writeNumber(numberSt *figure){
	printf("%s\n", paster(1));
	printf("%s\n", paster(2));
	printf("%s\n", paster(3));
	printf("%s\n", paster(4));
	printf("%s\n", paster(5));
	printf("%s\n", paster(6));
	printf("%s\n", paster(7));
	printf("%s\n", paster(8));
	printf("%s\n", paster(9));
	printf("%s\n\n", paster(10));

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

    if(figure->a==1){
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

    if(figure->a==2){
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



}


int main(){
numberSt zero ;
numberSt one ;
numberSt two ;
numberSt three ;
numberSt four ;
numberSt five ;
numberSt six ;
numberSt seven ;
numberSt eight ;
numberSt nine ;
numberSt semi ;



zero.a = 0;
makeNumbers(&zero);
//writeNumber(&zero);

one.a = 1 ;
makeNumbers(&one);
//writeNumber(&one);

two.a = 2 ;
makeNumbers(&two);
//writeNumber(&two);

lineAdd(&two,&zero);
lineAdd(&zero,&two);
lineAdd(&one,&two);
lineAdd(&two,&one);
lineAdd(&zero,&one);
lineAdd(&one,&zero);
return 0;
}
