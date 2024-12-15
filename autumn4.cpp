#include <graphics.h>

int radio(){
    //handle
    rectangle(140, 70, 260, 100);
    //main body
    rectangle(100, 100, 300, 200);

    //outer circle
    circle(140, 150, 30);
    circle(250, 150, 30);

    //inner circle
    circle(140, 150, 15);
    circle(250, 150, 15);

    //middle line
    line(185, 125, 205, 125);
    rectangle(185, 135, 205, 155);
    line(185, 165, 205, 165);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    radio();
    getch();
    closegraph();
    return 0;
}
