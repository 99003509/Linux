#include "sum.h"

int arr[100] = {};
int psum[10] = {};

void *task_body(void *pv) {
  int i, ps, thread_num = (__intptr_t)pv;
  for (i = 0; i <= 100; i++)
    /* Adding 100 array values */
    psum[i] += arr[ thread_num * 100 + i]; 
}

int psum() {

  int i, k = 0, n = 10, finalsum = 0;
  pthread_t ptarr[n];
  srand(time(0));

  for(i=0; i<1000; i++) {
    /* Assigning random value to Array */
    arr[i] = random()%10;
  }

  for (i = 0; i < n; i++) {
    /* Create a thread to add 100 array values */
    pthread_create(&ptarr[i], NULL, task_body, (void *)(__intptr_t)i);
  }

  for (i = 0; i < n; i++)
    pthread_join(ptarr[i], NULL);

  for(i=0; i<100; i++)
  {
    /* Adding the results from thread to get final value */
    finalsum += psum[i]; 
  }
  return finalsum; 
}
