#include<graphics.h>

void circle(){
    arc(300,240,180,350,80);
    line(220,240,278, 240);
    arc(300,240,360,530,80);
    line(311, 240, 380,240);

    rectangle(280,235,290,245);
    rectangle(300,235,310,245);
    rectangle(290,220,300,230);
    rectangle(290,250,300,260);
}

int main(){
    initwindow(600,600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    circle();
    getch();
    closegraph();
    return 0;
}
