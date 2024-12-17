#include <graphics.h>

void eye() {
    arc(300, 260, 30, 150, 100);
    arc(300, 160, 210, 330, 100);

    circle(300, 210, 20);

    line(240, 270, 360, 150);
}

int main() {
    // Initialize graphics window
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    eye();
    getch();
    closegraph();
    return 0;
}

