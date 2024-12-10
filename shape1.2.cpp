#include <graphics.h>

void drawBuilding() {
    // Top triangle (roof)
    line(100, 190, 250, 100); // Left slope
    line(250, 100, 400, 190); // Right slope
    line(100, 190, 400, 190); // Roof base

    // Upper horizontal bar (spaced below the roof)
    rectangle(100, 200, 400, 210);

    // Columns
    rectangle(150, 230, 190, 300); // Left column
    rectangle(230, 230, 270, 300); // Middle column
    rectangle(310, 230, 350, 300); // Right column

    // Smaller base rectangle (spaced below the columns)
    rectangle(120, 310, 380, 320); // Moved 20 pixels lower

    // Main base rectangle (spaced below the smaller base)
    rectangle(100, 330, 400, 340);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setbkcolor(WHITE); // Background color
    cleardevice();
    setcolor(BLACK);   // Foreground color

    drawBuilding();

    getch();
    closegraph();
    return 0;
}
