#include<graphics.h>

void symbol(){
    //main rectangle
    rectangle(100, 200, 400, 400);

    //circle
    circle(250, 300, 90);

    //inner lines
    line(250, 220, 250, 300);
    line(200, 300, 300, 300);
    line(220, 320, 280, 320);
    line(230, 340, 270, 340);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    symbol();
    getch();
    closegraph();
    return 0;
}
