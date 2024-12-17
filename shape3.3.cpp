#include<graphics.h>

void symbol(){
    //main rectangle
    rectangle(130, 180, 370, 420);
    rectangle(150, 200, 350, 400);

    //circle
    circle(250, 300, 90);

    //inner lines
    //line(250, 220, 250, 300);
    line(160, 300, 220, 300);
    line(280, 300, 340, 300);
    line(220, 300, 250, 380);
    line(280, 300, 250, 380);
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
