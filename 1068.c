#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a1;
    int n=1;
    int S;
    scanf("%d",&a1);
    S=((a1+n)*(abs(a1-n)+n))/2;
    printf("%d",S);
    return 0;
}
