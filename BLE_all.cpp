#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void drawLine(int x0, int y0, int x1, int y1) {
    int dx = abs(x1 - x0);  // Calculate absolute difference in x
    int dy = abs(y1 - y0);  // Calculate absolute difference in y
    int p = 2 * dy - dx;    // Initial decision parameter for Bresenham's
    int x = x0, y = y0;

    int xIncrement = (x1 > x0) ? 1 : -1;  // Determine direction for x
    int yIncrement = (y1 > y0) ? 1 : -1;  // Determine direction for y

    // Check if line is vertical
    if (dx == 0) {
        // Draw vertical line by incrementing y
        for (y = y0; y != y1 + yIncrement; y += yIncrement) {
            putpixel(x0, y, GREEN);
            delay(50);
        }
    }
    // Check if line is horizontal
    else if (dy == 0) {
        // Draw horizontal line by incrementing x
        for (x = x0; x != x1 + xIncrement; x += xIncrement) {
            putpixel(x, y0, GREEN);
            delay(50);
        }
    }
    // For diagonal lines (45 degrees)
    else if (dx == dy) {
        // Loop through x while adjusting y based on the direction
        while (x != x1 + xIncrement && y != y1 + yIncrement) {
            putpixel(x, y, GREEN);
            x += xIncrement;
            y += yIncrement;
            delay(50);
        }
    }
    // For other lines using Bresenham's algorithm
    else {
        while (x != x1 + xIncrement) {
            putpixel(x, y, GREEN);  // Blue for general case lines

            if (p >= 0) {
                y += yIncrement;
                p -= 2 * dx;
            }
            p += 2 * dy;
            x += xIncrement;
            delay(50);
        }
    }
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");

    int x0, y0, x1, y1;
    cout << "Enter x-coordinate of the starting point: ";
    cin >> x0;
    cout << "Enter y-coordinate of the starting point: ";
    cin >> y0;
    cout << "Enter x-coordinate of the ending point: ";
    cin >> x1;
    cout << "Enter y-coordinate of the ending point: ";
    cin >> y1;

    drawLine(x0, y0, x1, y1);

    getch();        // Wait for key press
    delay(100000);
    closegraph();   // Close the graphics window
    return 0;
}
