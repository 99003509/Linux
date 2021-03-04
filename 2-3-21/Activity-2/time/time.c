#include "time.h"

void *task_body_time(void* pv)
{
  int i=0;
  time_t time;
  struct tm* curtime;
  /* Get current time in seconds */
  time = time(NULL);
  /* Change the format to hh : mm : ss*/
  curtime = localtime(&t);
  printf("%02d : %02d : %02d \n",curtime->tm_hour, curtime->tm_min, curtime->tm_sec);

}
void getCurTime()
{
  int i, n=10;
  pthread_t ptrarr[n];

  for(i=0; i<n; ++i)
  {
    /* Create a thread to get current time */
    pthread_create(&ptrarr[i], NULL, task_body_time, (void *)(__intptr_t)i);
    /* Sleep for 3 seconds */
    sleep(3);
  }
  for(i=0; i<n; i++)
  {
    pthread_join(ptrarr[i], NULL);
  }
}
