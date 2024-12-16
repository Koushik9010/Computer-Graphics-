#include<graphics.h>

void winkinEmoji(){
    //main face
    circle(300,240,100);

    //lest eye
    arc(260,210,0,180,10);
    //right eye
    fillellipse(340,210,10,20);
    //mouth
    arc(300,240,180,300,50);
}

int main(){
    initwindow(600,600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    winkinEmoji();
    getch();
    closegraph();
    return 0;
}
