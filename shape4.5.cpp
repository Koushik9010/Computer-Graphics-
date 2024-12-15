#include<graphics.h>

void drawShowerHead() {

    line(347, 80, 347, 177); // Top line
    line(347, 80, 376, 80); // Bottom line
    line(376, 80, 376, 177); // left line

    // Draw the shower head
    arc(345, 235, 90, 180, 60);
    arc(375, 235, 0, 90, 60);
    line(285, 235, 435, 235);

    // Draw the water droplets
    for (int x = 280 + 30; x <= 380 + 30; x += 20) {
        // Each droplet as a small circle
        circle(x, 260, 5); // First droplet (adjust y for vertical position)
        circle(x, 300, 5); // Second droplet
        circle(x, 340, 5); // Third droplet
    }
}
int main() {
    initwindow(700, 700);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);

    drawShowerHead();
    getch();
    closegraph();
    return 0;
}
