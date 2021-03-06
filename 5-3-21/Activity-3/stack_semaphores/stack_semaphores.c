#include"stacksemaphore.h"

//const int max=10;
int m_arr[20];
int m_top=-1;
sem_t s1;
sem_t s2;
//pthread_mutex_t m1=PTHREAD_MUTEX_INITIALIZER;


void* push(void* pv)	//consumer
{
    int val=(int*)pv;
	sem_wait(&s1);
   // pthread_mutex_lock(&m1);
	if(m_top<=18){
        m_arr[++m_top]=val;
         printf("pushed val:%d\n",val);
    }
    pthread_mutex_unlock(&m1);
    sem_post(&s1);
   sem_post(&s2);
   
}
void* pop(void* pv)	//producer
{
    int temp=0;
   sem_wait(&s2);
    sem_wait(&s1);
   // pthread_mutex_lock(&m1);
	if(m_top!=-1){
        //temp+=1;
        temp=m_arr[m_top--];
        printf("VAlue:%d\n",temp);
    }
    //pthread_mutex_unlock(&m1);
    sem_post(&s1);
	//pthread_exit(temp);
}
