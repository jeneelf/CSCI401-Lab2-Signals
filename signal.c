/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler for SIGALRM
void handler(int signum) {
    printf("Hello World!\n");
    alarm_triggered = 1;
}

int main(int argc, char * argv[])
{
  signal(SIGALRM,handler); //register handler to handle SIGALRM
  alarm(5); //Schedule a SIGALRM for 5 seconds
  while(1); {//busy wait for signal to be delivered
    if (alarm_triggered) {  // Check if alarm was triggered
        printf("Turing was right!\n");
        alarm_triggered = 0; // Reset flag
        alarm(5);            // Re-arm the alarm for another 5 seconds
    }
}

  return 0;
}
