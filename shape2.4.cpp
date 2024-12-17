
#include<graphics.h>

void camera(){
    //body
    rectangle(170, 150, 320, 250);
    //front part
    rectangle(320, 170, 340, 220);
    rectangle(340, 180, 360, 210);
    line(360, 180, 420, 160);
    line(360, 210, 420, 230);
    line(420, 160, 420, 230);

    //upper circle
    circle(210,110, 40);
    circle(210, 110, 10);
    circle(290,110, 40);
    circle(290,110, 10);

    //stand
    //line(250, 250, 250, 330);
    line(250, 250, 210, 300);
    line(240, 250, 200, 300);
    line(200, 300, 210, 300);

    line(250, 250, 290, 300);
    line(260, 250, 300, 300);
    line(290, 300, 300, 300);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    camera();
    getch();
    closegraph();
    return 0;
}
