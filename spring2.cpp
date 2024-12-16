#include<graphics.h>
#include<graphics.h>

void glassFace(){
    //face
    circle(200,300,60);
    //eyes
    line(180, 280, 175, 280);
    line(230, 280, 225, 280);

    //glass
    circle(165,270,30);
    circle(240,270,30);
    arc(203,260,0,180,10);

    //mouth
    arc(200, 310, 180, 360, 15);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    glassFace();
    getch();
    closegraph();
    return 0;
}
