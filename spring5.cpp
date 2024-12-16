
#include<graphics.h>

void house(){
    //left
    line(180, 200, 180, 370);
    //right
    line(400, 200, 400, 370);
    //base
    line(180, 370, 400, 370);
     //door
    rectangle(260,300,310,370);
    //door handle
    circle(270, 340, 5);
    //left window
    rectangle(190,250,240,300);
    line(215, 250, 215, 300);
    line(190, 275, 240, 275);
    //right window
    rectangle(340,250,390,300);
    line(365, 250, 365, 300);
    line(340, 275, 390, 275);
    //upper window
    rectangle(270,200,320,250);
    line(295, 200, 295, 250);
    line(270, 225, 320, 225);

    //right roof
    line(300, 100, 400, 200);
    //line(320,100,420, 200);
    line(300, 90, 415, 200);
    line(400, 200, 415, 200);
    //line(300, 100, 320, 100);

    //left roof
    line(300, 100, 180, 200);
    //line(295, 90, 165, 200);
    line(300, 90, 165, 200);
    line(164, 200, 180, 200);


    //chimney
    line(370, 90, 370, 155);
    line(390, 90, 390, 175);
    rectangle(360, 80, 400, 90);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    house();
    getch();
    closegraph();
    return 0;
}
