#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//This C program is code of basic digital clock.

void writeClock(struct tm currentTime){

int hour = currentTime.tm_hour;
int minute = currentTime.tm_min;
int seconds = currentTime.tm_sec;

printf("%02d :%02d :%02d",hour,minute,seconds);}


int  waitFor(unsigned int secs)
{

    unsigned int retTime = time(0) + secs;   // Get finishing time.
    while (time(0) < retTime);               // Loop until it arrives.
}

int main()
{


while(1){
   time_t s, val = 1;
   struct tm* current_time;
   s = time(NULL);
   current_time = localtime(&s);
 //  printf("%02d:%02d:%02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
   //Delay_ms(8000);
   writeClock(*current_time);
   waitFor(1);
   system("cls");
            }


    return 0;
}
