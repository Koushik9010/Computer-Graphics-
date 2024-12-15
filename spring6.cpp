#include <graphics.h>

void tv(){
    rectangle(100, 100, 300, 220);
    rectangle(120, 110, 280, 200);

    circle(200, 210, 7);

    line(180, 220, 180, 270);
    line(220, 220, 220, 270);

    rectangle(160, 270, 240, 290);
    //line(170, 250, 220, 250);

}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    tv();
    getch();
    closegraph();
    return 0;
}
