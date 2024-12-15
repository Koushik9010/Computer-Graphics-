#include <graphics.h>

void tv(){
    rectangle(100, 100, 300, 200);

    line(190, 200, 190, 250);
    line(200, 200, 200, 250);

    //rectangle(170, 260, 210, 300);
    line(170, 250, 220, 250);

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
