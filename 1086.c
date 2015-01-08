#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;

int main()
{
	scanf("%d\n",&N);

	int prime_index[N];

	for (int i=0;i<N;i++) {scanf("%d", &prime_index[i]);}

	int max_prime_index=0;

	for (int i2=0;i2<N;i2++)
	{
		if (prime_index[i2]>max_prime_index) {max_prime_index=prime_index[i2];}
	}

	int prime_table[max_prime_index];
	prime_table[0]=2;

	int test_var=1;

	for (int j=1;j<max_prime_index;j++)
	{
		for (;;)																		//беск цикл чекает до прерывания
		{
			test_var++;
			int div=0;
			int div_num=0;
			while(div<sqrt(test_var))													//повторять до корня test_var
			{
				div++;
				if (test_var%div==0) {div_num++;}
				if (div_num>1) {break;}													//если больше чем 1 делитель - проверять не нужно - число сложное
			}
			if (div_num==1) {prime_table[j]=test_var;break;}
		}
	}

	for (int k=0;k<N;k++) {int k1=prime_index[k]-1;printf("%d\n",prime_table[k1]);}
}
