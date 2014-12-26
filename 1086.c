#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;

int main()
{
	scanf("%d",&N);


	int prime_index[N];
	int prime[N];


	for (int i=0;i<N;i++) {scanf("%d", &prime_index[i]);}

	for (int j1=0;j1<N;j1++)
	{
		prime[j1]=2;
		int j2=1;
		while (j2<prime_index[j1])
		{
			prime[j1]++;
			int div_num=0;
			for (int divisor=1;divisor<=sqrt(prime[j1]);divisor++)
			{
				if (prime[j1]%divisor==0){div_num++;}
			}
			if (div_num==1){j2++;}
		}
	}

	for (int k=0;k<N;k++) {printf("%d\n",prime[k]);}
}
