#include <stdio.h>

int main()
{
    int debug=0;
    int debug_input=0;
    int N=100;
    if(1==debug){N=4;}
    char xpos_human[N]; //вертикаль a-h
    int ypos_human[N];// горизонталь 1-8
    int pos[N][2]; //координата N:x и N:y
    int movenum[N];

    int i;
    int j;
    int k;

    for (i=0;i<N;i++)
    {
        pos[i][0]=0;pos[i][1]=1;ypos_human[i]=0;
        if(EOF==scanf("\n%c%d",&xpos_human[i],&ypos_human[i])){break;}
        if(1==debug_input){printf("i=[%d] ; xh:%c ; yh:%d\n",i,xpos_human[i],ypos_human[i]);}
        pos[i][0] = xpos_human[i]-'a';
        pos[i][1] = ypos_human[i]-1;
    }

    if(1==debug_input)
    {
        for (j=0;j<i;j++)
        {
            printf("x[%d] : %d ; y[%d] : %d\n",j,pos[j][0],j,pos[j][1]);
        }
        return 0;
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
