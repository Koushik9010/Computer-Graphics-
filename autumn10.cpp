#include<graphics.h>

void house(){
    //main house
    rectangle(130, 150, 330, 250);

    //roof1
    rectangle(140, 120, 320, 140);
    //roof2
    rectangle(110, 140, 350,150);

    //window
    rectangle(155,170,185,200);
    rectangle(270,170,300,200);

    //door
    rectangle(200,170,250,250);
}

int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    house();
    getch();
    closegraph();
    return 0;
}
