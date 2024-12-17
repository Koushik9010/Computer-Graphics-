#include <graphics.h>

void cycle(){
    // back tire
    circle(100, 400, 70);

    // front tire
    circle(350, 400, 70);

    // middle paddle circle
    circle(225, 400, 20);

    // lines from back tire
    line(100, 400, 205, 400);
    line(100, 400, 135, 300);

    // lines from paddle
    line(210, 385, 90, 250);
    line(235, 385, 280, 300);


    line(350, 400, 250, 250);

    line(250, 250, 290, 240);

    line(60, 250, 120, 250);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    cycle();
    getch();
    closegraph();
    return 0;
}
