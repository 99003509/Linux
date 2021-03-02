#include"Bitmask.h"
int set(int p,int setbit)
{
    int m=p|(1<<(setbit-1));
    return m;
}
int reset(int p, int setbit)
{
    int m=p&(~(1<<(setbit-1)));
    return m;
}

int query(int p)
{
    if((p&1)==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int flip(int p)
{
    int m=15-p;
    return m;
}