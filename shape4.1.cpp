#include <graphics.h>

void drawShowerHead() {
    // horizontal pipe
    line(100, 100, 300, 100); // Top line
    line(100, 130, 300, 130); // Bottom line
    line(100, 100, 100, 130); // left line

    //connecting the pipe to the showerhead
    arc(300, 169, 0, 90, 70);
    arc(300, 179, 0, 90, 50);

    // Draw the shower head
    arc(345, 235, 90, 180, 60);
    arc(375, 235, 0, 90, 60);
    line(285, 235, 435, 235);


    // Draw the water droplets
    for (int x = 280+30; x <= 380+30; x += 20) {
        // each droplets
        line(x, 250, x, 270);
        line(x, 290, x, 310);
        line(x, 330, x, 350);
    }
}
int main() {
    initwindow(700, 700);
    drawShowerHead();
    getch();
    closegraph();
    return 0;
}
