#include<graphics.h>

void mobile(){
    //body
    rectangle(150, 200, 350, 450);

    //display
    rectangle(180, 220, 320, 330);

    //buttons
    rectangle(210, 340, 225, 355);
    rectangle(245, 340, 260, 355);
    rectangle(280, 340, 295, 355);

    rectangle(210, 370, 225, 385);
    rectangle(245, 370, 260, 385);
    rectangle(280, 370, 295, 385);

    rectangle(210, 400, 225, 415);
    rectangle(245, 400, 260, 415);
    rectangle(280, 400, 295, 415);

    //antenna
    line(320, 180, 320, 200);
    //arc(350, 190, 0, 180, 40);  // First (largest) arc
    //arc(350, 190, 180, 270, 30);  // Second (smaller) arc
    //arc(350, 190, 0, 180, 20);
}

int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    mobile();
    getch();
    closegraph();
    return 0;
}
