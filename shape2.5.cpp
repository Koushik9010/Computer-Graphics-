#include<graphics.h>

void object(){
    //main rectangle
   rectangle(200, 150, 400, 300);
   //base
   rectangle(160, 300, 440, 370);
   line(160,330,440,330);

   //middle parts
   line(170, 200, 290, 200);
   line(299, 200, 430, 200);
   line(430, 200, 430, 220);
   line(430, 220, 460, 220);

   //middle bucket
   line(295, 150, 295, 220);
   line(260, 220, 330, 220);
   line(270, 260, 320, 260);
   line(260,  220,270, 260);
   line(330,  220,320, 260);

   //upper box
   line(160,150,440,150);
   line(190,110,410,110);
   line(190, 110, 160, 150);
   line(410, 110, 440, 150);
   line(250,90,330,90);
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    object();
    getch();
    closegraph();
    return 0;
}
