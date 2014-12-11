#include <stdio.h>

int main()
{
    char xpos_human; //вертикаль a-h
    int xpos; //вертикаль a-h => 0-7
    int ypos_human;// горизонталь 1-8
    int ypos; //горизонталь 0-7
    int movenum=0;

    int N;
    for (N=0;N<100;N++)
    {
        if (0==scanf("%c%d",&xpos_human,&ypos_human)) break;
        xpos = xpos_human-'a';
        ypos = ypos_human-1;
        if(xpos>=0&&ypos>=0&&xpos<=7&&ypos<=7)
        {
            if(xpos+2<=7&&ypos+1<=7)
            {
                movenum=movenum+1;
            }
            if(xpos+1<=7&&ypos+2<=7)
            {
                movenum=movenum+1;
            }
            if(xpos-2>=0&&ypos+1<=7)
            {
                movenum=movenum+1;
            }
            if(xpos+1<=7&&ypos-2<=7)
            {
                movenum=movenum+1;
            }
            if(xpos+2<=7&&ypos-1>=0)
            {
                movenum=movenum+1;
            }
            if(xpos-1>=0&&ypos+2<=7)
            {
                movenum=movenum+1;
            }
            if(xpos-2>=0&&ypos-1>=0)
            {
                movenum=movenum+1;
            }
            if(xpos-1>=0&&ypos-2>=0)
            {
                movenum=movenum+1;
            }
            printf("%d\n",movenum);
        }
        movenum=0;
        xpos_human=-1;
        ypos_human=-1;
    }

    return 0;
}
