#include<graphics.h>
void symbol(){
    line(200, 150, 200, 330);
    line(100, 250, 300, 250);
    line(120, 250, 200, 150);
    line(100, 250, 200, 120);
    line(200, 150, 280, 250);
    line(198, 115, 300, 250);
    line(300, 250, 200, 350);
    line(280, 250, 180, 350);
    line(100, 250, 200, 350);
    line(120, 250, 220, 350);
    line(140, 190, 200, 250);
    line(200, 250, 250, 300);
    line(200, 250, 150, 300);
    line(200, 250, 250, 185);
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
