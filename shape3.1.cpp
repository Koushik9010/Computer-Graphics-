#include<graphics.h>

void molicule(){
    line(200, 300, 200, 350);

    line(170, 370, 200, 350);
    line(200, 350, 230, 370);

    line(200, 300, 250, 270);

    line(250, 270, 250, 230); //vertical

    line(250, 270, 300, 300); //horizontal

    line(300, 300, 300, 350);

    line(300, 350, 340, 380);

    line(340, 380, 380, 340);

    line(380, 340, 380, 300);

    line(340, 380, 340, 430);

    line(340, 430, 380, 460);

    line(380, 460, 420, 430);

    line(420, 380, 420, 430);

}

int main() {
    initwindow(900, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    molicule();
    getch();
    closegraph();
    return 0;
}
