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
    memset(prime,0,sizeof(prime));

    for(i = 2; i < MAXN; i++)
    {
        if (!prime[i])
        {
            prime[i] = k;
            for(j = i; j < MAXN; j+=i)
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
