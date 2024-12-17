#include<graphics.h>

int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);

    //base
    line(150, 300, 280, 300);
    //left
    line(150, 250, 150, 300);
    //right
    line(280, 250, 280, 300);

    //middle lines
    line(150, 250, 190, 250);
    line(240, 250, 280, 250);

    //middle of base and middle line
    line(200, 270, 230, 270);

    //curved line
    line(190,250,200,270);
    line(240,250,230,270);

    //upper left
    line(160, 150, 150, 250);
    //upper right
    line(260, 150, 280, 250);

    //top
    line(160, 150, 200, 150);
    line(230, 150, 260, 150);

    //middle arrow
    line(215, 130, 215, 210);
    line(200,190,215,210);
    line(225,190,215,210);

    getch();
    closegraph();
    return 0;
}
