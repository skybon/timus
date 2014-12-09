#include <stdio.h>

int main() {
int i, j;
double n[500000];

for(i=0;i<500000;i++)
{
    if(1 != scanf("%lf\n", &n[i])) break;
}

for (j=i-1;j>=0;j--)
{
    printf("%lf\n", sqrt(n[j]));
}
return 0;
}
