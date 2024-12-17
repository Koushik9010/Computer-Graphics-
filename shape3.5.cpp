#include<graphics.h>

void symbol(){
    rectangle(50, 160, 340, 440);
    rectangle(70, 180, 320, 420);
    //top vertical line
    line(200, 200, 200, 300);
    //base line
    line(100, 300, 300, 300);
    //left
    line(100, 300, 190, 400);
    //right
    line(190, 400, 300, 300);
    //circle
    circle(195, 340, 40);
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
