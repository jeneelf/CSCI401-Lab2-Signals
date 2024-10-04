/*timer.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>

volatile sig_atomic_t alarm_count = 0; // Counter for alarms
volatile sig_atomic_t alarm_triggered = 0;
time_t start_time; 

void handler(int signum)
{ //signal handler
  printf("Hello World!\n");
  exit(1); //exit after printing
}

int main(int argc, char * argv[])
{
    time_t seconds;
     
    seconds = time(NULL);
    printf("Seconds since January 1, 1970 = %ld\n", seconds);
     
    return(0);
}
{
  signal(SIGALRM,handler); //register handler to handle SIGALRM
  alarm(5); //Schedule a SIGALRM for 5 seconds
  while(1); {//busy wait for signal to be delivered
    if (alarm_Trig){
    printf("Turing was right!\n");
    alarm_triggered = 0; 
    }
  }
  return 0; //never reached
}