#include <graphics.h>

void drawMicrophone() {
    // upper arc of mic
    arc(300, 180, 0, 180, 40);
    line(260, 180, 260, 220);


    //lower arc of the mic
    arc(300, 220, 180, 360, 40);
    line(339, 180, 339, 220);

    arc(300,220,180,350,55);

    // stand
    line(300, 275, 300, 320);
    line(275, 320, 320, 320);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    drawMicrophone();
    getch();
    closegraph();
    return 0;
}
