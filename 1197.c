#include <stdio.h>

int main()
{
    int N;

    scanf("%d",&N);

    char xpos_human[N]; //вертикаль a-h
    char ypos_human[N];// горизонталь 1-8
    int pos[N][2]; //координата N:x и N:y
    int movenum[N];

    int i;
    int j;
    int k;


    for (i=0;i<N;i++)
    {
        pos[i][0]=0;pos[i][1]=1;ypos_human[i]=0;
        scanf("\n%c%c",&xpos_human[i],&ypos_human[i]);
        pos[i][0] = xpos_human[i]-'a';
        pos[i][1] = ypos_human[i]-'1';
    }

    for (j=0;j<N;j++)
    {
        if(pos[j][0]>=0&&pos[j][1]>=0&&pos[j][0]<=7&&pos[j][1]<=7)
        {
            movenum[j]=0;
            if(pos[j][0]+2<=7&&pos[j][1]+1<=7) {movenum[j]++;}
            if(pos[j][0]+1<=7&&pos[j][1]+2<=7) {movenum[j]++;}
            if(pos[j][0]-2>=0&&pos[j][1]+1<=7) {movenum[j]++;}
            if(pos[j][0]+1<=7&&pos[j][1]-2>=0) {movenum[j]++;}
            if(pos[j][0]+2<=7&&pos[j][1]-1>=0) {movenum[j]++;}
            if(pos[j][0]-1>=0&&pos[j][1]+2<=7) {movenum[j]++;}
            if(pos[j][0]-2>=0&&pos[j][1]-1>=0) {movenum[j]++;}
            if(pos[j][0]-1>=0&&pos[j][1]-2>=0) {movenum[j]++;}
        }
    }
    for(k=0;k<i;k++) {if(movenum[k]>=1&&movenum[k]<=8){printf("%d\n",movenum[k]);}}

    return 0;
}
