#include<graphics.h>

void id(){
    rectangle(100, 100, 300, 200);

    arc(180, 170, 0, 180, 30);
    line(150, 170, 210, 170);

    circle(180, 130, 10);

    line(220, 140, 260, 140);
    line(220, 150, 260, 150);
    line(220, 160, 260, 160);
    line(220, 170, 250, 170);
}

int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    id();
    getch();
    closegraph();
    return 0;
}
