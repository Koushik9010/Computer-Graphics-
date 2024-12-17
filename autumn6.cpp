#include<graphics.h>

void mobile(){
    //body
    rectangle(180, 200, 330, 440);

    //display
    rectangle(200, 220, 310, 330);

    //buttons
    rectangle(210, 340, 225, 355);
    rectangle(245, 340, 260, 355);
    rectangle(280, 340, 295, 355);

    rectangle(210, 370, 225, 385);
    rectangle(245, 370, 260, 385);
    rectangle(280, 370, 295, 385);

    rectangle(210, 400, 225, 415);
    rectangle(245, 400, 260, 415);
    rectangle(280, 400, 295, 415);

    //antenna
    line(320, 170, 320, 200);
    arc(330, 170, 290, 430, 15);
    arc(320, 170, 290, 430, 15);
    arc(320, 170, 470, 610, 15);
    arc(310, 170, 470, 610, 15);
}

int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    mobile();
    getch();
    closegraph();
    return 0;
}
