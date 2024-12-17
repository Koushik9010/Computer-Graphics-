#include<graphics.h>

void billboard(){
    //display
    rectangle(100, 100, 300, 220);

    //lights
    line(150, 100, 150, 110);
    line(140,110,160,110);
    line(200, 100, 200, 110);
    line(190,110,210,110);
    line(250, 100, 250, 110);
    line(240,110,260,110);

    //middle light
    rectangle(160, 140, 200, 170);
    line(200, 140, 220, 130);
    line(200, 170, 220, 180);
    line(220, 130, 220, 180);
    circle(152, 155, 8);

    //light handle
    line(180, 170, 190, 190);
    line(190, 170, 200, 190);
    line(190,190,200,190);

    //stand
    line(180, 220, 180, 270);
    line(220, 220, 220, 270);
    line(160, 270, 240, 270);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    billboard();
    getch();
    closegraph();
    return 0;
}
