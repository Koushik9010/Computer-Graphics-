#include<graphics.h>
void sign(){
    line(202.5, 140, 202.5, 160);
    line(195, 235, 195, 255);
    line(140, 200, 160, 200);
    line(240, 196, 260, 196);
    arc(200, 200, 10, 80, 50);//1st
    arc(200, 200, 90, 170, 50);//2nd
    arc(200, 200, 190, 260, 50);//3rd
    arc(200, 200, 270, 360, 50);//4th
}
int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    sign();
    getch();
    closegraph();
    return 0;
}
