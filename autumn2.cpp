#include <graphics.h>

void wifi() {
    // Draw the first (largest) arc
    arc(300, 300, 0, 180, 80);  // The first arc is the largest

    // Draw the second (smaller) arc
    arc(300, 310, 0, 180, 60);  // The second arc is smaller than the first

    // Draw the third (smallest) arc
    arc(300, 320, 0, 180, 40);  // The third arc is the smallest

    // Draw the circle under the arcs
    circle(300, 340, 20);  // Circle below the arcs
}

int main() {
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    wifi();
    getch();
    closegraph();
    return 0;
}
