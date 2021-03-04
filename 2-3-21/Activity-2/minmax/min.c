#include "minmax.h"

int arr1[1000] = {0}, minarray[10] = {0};

void *task_body_min(void *pv)
{
  int i, thread_num = (__intptr_t)pv, tmin = 0;  
  for(i=0; i<100; ++i)
  {
    /* Searching minimum in 100 array values*/
    if(arr1[thread_num * 100 + i] < tmin)
    {
      tmin = arr1[i];
    }
  }
  minarr[thread_num] = tempmin;
}

int findMin()
{
  int n=10, i, tmin = 0;
  pthread_t ptrarr[n];

  srand(time(0));

  for(i=0; i<1000; i++)
  {
    /* Assigning random value to Array */
    arr1[i] = random()%100;
  }
  for(i=0; i<n ; ++i)
  {
    /* Create a thread to search 100 array values */
    pthread_create(&ptrarr[i], NULL, task_body_min, (void*)(__intptr_t) i);
  }
  for(i=0; i<n ; ++i)
  {
    pthread_join(ptrarr[i], NULL);
  }
  for(i=0; i < n; ++i)
  {
    /* Find Maximum from thread results*/
    if(minarray[i] < tmin)
    {
      tmin = minarray[i];
    }
  }
  return tmin;
}
