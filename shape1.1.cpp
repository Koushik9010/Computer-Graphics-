#include<graphics.h>

void building(){
    //top rectangle
    rectangle(170, 220, 330, 250);
    rectangle(160, 210, 340, 250);

    //triangle
    line(195, 210, 245, 160);
    line(245, 160, 295, 210);
    line(295, 210, 195, 210);
    //inner triangle
    line(205, 210, 245, 170);
    line(245, 170, 285, 210);
    line(285, 210, 205, 210);

    //flag
    rectangle(250, 80, 320, 130);
    rectangle(250, 90, 310, 120);

    //flag pole
    line(240, 80, 240, 165);
    line(250, 80, 250, 165);
    line(240, 80, 250, 80);

    //main
    rectangle(100, 250, 420, 400);
    rectangle(110, 260, 410, 390);

    //inner column 1
    line(150, 260,150, 390);
    line(160, 260, 160, 390);
    line(110, 290, 150, 290);
    line(110, 300, 150, 300);

    //column 2
    line(190, 260, 190, 390);
    line(200, 260, 200, 390);
    line(240, 260, 240, 390);
    line(250, 260, 250, 390);
    line(200, 290, 240, 290);
    line(200, 300, 240, 300);

    //column 3
    line(290, 260, 290, 390);
    line(300, 260, 300, 390);
    line(340, 260, 340, 390);
    line(350, 260, 350, 390);
    line(300, 290, 340, 290);
    line(300, 300, 340, 300);

    //column 4
    line(370, 260, 370, 390);
    line(380, 260, 380, 390);
    line(380, 290, 410, 290);
    line(380, 300, 410, 300);
}
int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    building();
    getch();
    closegraph();
    return 0;
}
