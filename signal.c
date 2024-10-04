/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler(int signum)
{ //signal handler
  printf("Hello World!\n");
  exit(1); //exit after printing
}

int main(int argc, char * argv[])
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