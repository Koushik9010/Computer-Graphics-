#include<graphics.h>

void camera(){
    //body
    rectangle(170, 150, 320, 250);
    //front part
    line(320, 150, 380, 130);
    line(320, 250, 380, 280);
    line(380, 130, 380, 280);

    //upper circle
    circle(210,110, 40);
    circle(290,110, 40);

    //stand
    line(250, 250, 250, 330);
    line(250, 250, 210, 330);
    line(250, 250, 290, 330);
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
