#include<graphics.h>

void timeTable(){
    //base
    line(150, 300, 270, 300);
    //left
    line(150, 140, 150, 300);
    //right
    line(320, 140, 320, 220);

    //circle
    circle(310, 270, 50);
    //plus sign
    line(310, 235, 310, 305);
    line(270, 270, 350, 270);

    //middle line
    line(150, 170, 320, 170);

    //top lines
    line(150, 140, 175, 140);
    line(185, 140, 280, 140);
    line(290, 140, 320, 140);

    //holders
    rectangle(175, 130, 185, 150);
    rectangle(280, 130, 290, 150);

    //middle cross bars
    line(190, 200, 280, 200);
    line(190, 225, 280, 225);
    line(190, 250, 260, 250);
    line(190, 270, 255, 270);
    line(190, 200, 190, 270);
    line(215, 200, 215, 270);
    line(245, 200, 245, 270);
    line(265, 200, 265, 250);
    line(281, 200, 281, 225);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    timeTable();
    getch();
    closegraph();
    return 0;
}
