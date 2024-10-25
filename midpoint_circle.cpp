#include <graphics.h>
#include <iostream>
using namespace std;

void plotPoints(int xc, int yc, int x, int y) {
    // Plot the eight symmetric points in each octant of the circle
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void midpointCircle(int xc, int yc, int r) {
    int x = 0;
    int y = r;
    int p = 1 - r;  // Initial decision parameter

    plotPoints(xc, yc, x, y);

    while (x <= y) {
        x++;

        if (p < 0) {
            p = p + 2 * x + 1;  // Update decision parameter for the inside point
        } else {
            y--;
            p = p + 2 * x - 2 * y + 1;  // Update decision parameter for the outside point
        }

        plotPoints(xc, yc, x, y);
        delay(50);  // Small delay to visualize the circle drawing
    }
}

int main() {
    int gdriver = DETECT, gmode;
    int xc, yc, r;

    // Initialize graphics mode
    initgraph(&gdriver, &gmode, "");

    // Input the circle's center and radius
    cout << "Enter the center of the circle (xc, yc): ";
    cin >> xc >> yc;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    // Draw the circle using the Midpoint Circle algorithm
    midpointCircle(xc, yc, r);

    // Wait for a key press and close the graphics window
    getch();
    closegraph();

    return 0;
}
