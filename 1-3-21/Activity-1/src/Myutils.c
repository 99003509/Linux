#include"Myutils.h"


int checkpalindrome(char *str)
{
     int i=0,n=strlen(str),b=0;
    if(i<n/2)
    {
         if(str[i]==str[n-i-1])
    	b++;
    	i++;
    	checkpalindrome(str);
	}
	else
	{
		if(b==i)
        return 1;
        else
        return 0;
	}
 	 
 	
}

int multiplyNumbers(int m) {
    if (m>=1)
        return m*multiplyNumbers(m-1);
    else
        return 1;
}

int prime(int n){
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}

int sum(int N, ...)
{
    int l,s;
    va_list va; /*for argument list*/
     
    va_start(va,N); /*init with number of arguments*/
     
    /*access arguments & calculating sum*/
    s=0;
    for(l=0;l<N;l++){
        s+=va_arg(va,int);
    
    }
    va_end(va);
     
    return s;
     
}

