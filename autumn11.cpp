#include<graphics.h>

void table(){
    rectangle(140, 120, 320, 140);
    //left
    line(150, 140, 150, 250);
    //right
    line(310, 140, 310, 250);
    //horizontal middle line
    line(150, 175, 310, 175);
    //middle vertical 1
    line(200, 175, 200, 220);
    //middle vertical 2
    line(240, 175, 240, 230);
    //horizontal bottom line
    line(240, 230, 310, 230);
    //handle
    line(280, 210, 260, 210);
    line(240, 160, 220, 160);

    //upper box
    rectangle(200, 80, 240, 120);
    line(210, 90, 210, 110);
    line(220, 90, 220, 110);
    line(230, 90, 230, 110);

}

int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    table();
    getch();
    closegraph();
    return 0;
}
