#include<graphics.h>

void smiley(){
    //main face
    circle(320, 320, 80);

    //eyes
    circle(290, 300, 5);
    circle(350, 300, 5);

    //mouth
    line(275, 330, 365, 330);
    arc(320, 330, 180, 360, 45);
}

int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    smiley();
    getch();
    closegraph();
    return 0;
}
