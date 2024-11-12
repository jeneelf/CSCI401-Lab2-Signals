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
  alarm_triggered = 1;
  alarm_count++;
}
void sigint_handler(int signum){
  time_t end_time =time(NULL)
  printf("\n Excution Time:\n", end_time-start_time);
  printf("\n Alarms Triggered:\n", alarm_count);
  exit(0);
}
int main()
{
  start_time = time(NULL)   
  signal(SIGALRM,handler); //register handler to handle SIGALRM
  signal(SIGINT, sigint_handler); //register handler to handle SIGALRM
  alarm(5); //Schedule a SIGALRM for 5 seconds
  while(1); {//busy wait for signal to be delivered
    if (alarm_Trig){
    printf("Turing was right!\n");
    alarm_triggered = 0; 
    alarm(5); //Schedule a SIGALRM for 5 seconds
  }
  return 0; //never reached
}