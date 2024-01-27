#include <stdio.h>
#include <math.h>
#define SZ 1000

int cnt, primes[SZ], siv[SZ];

void seive()
{
    int limit = sqrt(SZ+1);
    for (int i = 3; i<=limit; i+=2)
        if(!siv[i])
            for (int j = i*i; j<SZ; j+=i+i)
                siv[j]=1;

    primes[cnt++] = 2;
    for (int i = 3; i<SZ; i+=2)
        if(!siv[i]) primes[cnt++] = i;
    return;
}

int main()
{
    seive();
    char s[] = ",\n";
    printf("Number of Generated Primes = %d\n", cnt);
    for (int i = 0; i<cnt; i++)
        printf("%d%c", primes[i], s[i==cnt-1]);

    return 0;
}
