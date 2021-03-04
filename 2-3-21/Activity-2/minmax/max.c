#include "maxmin.h"

int arr[1000] = {0}, maxarray[10] = {0};

void *task_body_max(void *pv)
{
  int i, threadn = (__intptr_t)pv, tmax = 0;  
  for(i=0; i<100; ++i)
  {
    /* Searching maximum in 100 array values*/
    if(arr[thread_n * 100 + i] > tmax)
    {
      tmax = arr[i];
    }
  }
  maxarray[thread_n] = tmax;
}

int findMax()
{
  int n=10, i, tmax = 0;
  pthread_t ptrarr[n];

  srand(time(0));

  for(i=0; i<1000; i++)
  {
    /* Assigning random value to Array */
    arr[i] = random()%100;
  }
  for(i=0; i<n ; ++i)
  {
    /* Create a thread to search 100 array values */
    pthread_create(&ptrarr[i], NULL, task_body_max, (void*)(__intptr_t) i);
  }
  for(i=0; i<n ; ++i)
  {
    pthread_join(ptrarr[i], NULL);
  }
  for(i=0; i < n; ++i)
  {
    /* Find Minimum from thread results*/
    if(maxarray[i] > tmax)
    {
      tmax = maxarray[i];
    }
  }
  return tmax;
}
