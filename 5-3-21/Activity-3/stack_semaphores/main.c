int main()
{

    int i,value;
	pthread_t pt1,pt2;	//thread handle
    sem_init(&s2,0,0);
    sem_init(&s1,0,0);
    for(i=0;i<10;i++){
           pthread_create(&pt1,NULL,push,(void*)i);
    }
	 for(i=0;i<10;i++){ 	
         pthread_create(&pt2,NULL,pop,NULL);
     }

	pthread_join(pt1,NULL);
	pthread_join(pt2, NULL );
   sem_destroy(&s1);
	sem_destroy(&s2);
   // pthread_mutex_destroy(&m1);
	//printf("VAlue:%d",value);
	return 0;	//exit(0);
}
