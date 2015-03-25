/*************************************************************************
	> File Name: backup.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月24日 星期二 10时49分10秒
 ************************************************************************/

#include<cstdio>
#include<string.h>
#define MAXN 1000000+1000
int prime[MAXN];
int main()
{
    int k = 1;
    int i, j, n;
    memset(prime,0,sizeof(prime)); //initialize the array with 0

    for(i = 2; i < MAXN; i++) // cause prime[0] = 1, so start from 2
    {
        if (!prime[i]) // if prime[i] not been assigned
        {
            prime[i] = k;
            for(j = i; j < MAXN; j+=i) // all fators come from i, such i=2, j=2,4,6,8.., i=3, j=3,6,9,12..
            {
                prime[j] = k;
            }
            k++;
        }
    }

    while(~scanf("%d", &n))
    {
        printf("%d\n", prime[n]);
    }
    return 0;
}
