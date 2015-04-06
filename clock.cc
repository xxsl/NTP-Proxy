#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

void cls()
{
    printf("\033[2J");
    printf("\033[H");
}

int main ()
{
  time_t timet_now;
  struct tm * timeinfo_now;
  timeval t_now;

  while(1) {
      time (&timet_now);
      timeinfo_now = localtime(&timet_now);
    
      
      gettimeofday(&t_now, NULL);


      cls();
      printf ("Time_t                : %ld\n", timet_now);
      printf ("Time_t (gettimeofday) : %ld\n", t_now.tv_sec);
      
      printf ("Timeinfo              : %s", asctime(timeinfo_now));
      printf ("           -> tm_hour : %d\n", timeinfo_now->tm_hour);
      printf ("           -> tm_min  : %d\n", timeinfo_now->tm_min);
      printf ("           -> tm_sec  : %d\n", timeinfo_now->tm_sec);
      usleep(500000);
  }
  return 0;
}
