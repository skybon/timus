#include <stdio.h>

int main()
{
    char xpos_human; //вертикаль a-h
    int xpos; //вертикаль a-h => 0-7
    int ypos_human;// горизонталь 1-8
    int ypos; //горизонталь 0-7
    int movenum;

    int N;
    for (N=0;N<100;N++)
    {
        if (0==scanf("%c%d",&xpos_human,&ypos_human)) break;
        xpos = xpos_human-'a';
        ypos = ypos_human-1;
        if(xpos>=0&&ypos>=0&&xpos<=7&&ypos<=7)
        {
            printf("Location: %d : %d\n",xpos,ypos);
        }
        xpos_human=-1;
        ypos_human=-1;
    }


    return 0;
}
