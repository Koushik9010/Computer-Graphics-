#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int x1, y1, x2, y2;
    int gdriver = DETECT, gmode;

    // Initialize graphics
    initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

    // Set coordinates here to change the line type
    x1 = 1;
    y1 = 1;
    x2 = 680;
    y2 = 570;

    printf("Drawing a line with specified coordinates\n");

    if (y1 == y2) { // Horizontal line check (parallel to x-axis)
        int x = x1;
        while (x <= x2) {
            putpixel(x, y1, GREEN); // Drawing a horizontal line
            x += 1;
        }
    } else if (x1 == x2) { // Vertical line check (parallel to y-axis)
        int y = y1;
        while (y <= y2) {
            putpixel(x1, y, GREEN); // Drawing a vertical line
            y += 1;
        }
    } else if (abs(x2 - x1) == abs(y2 - y1)) { // 45-degree angle check
        int x = x1;
        int y = y1;
        if (y2 > y1) { // 45-degree line from bottom-left to top-right
            while (x <= x2 && y <= y2) {
                putpixel(x, y, GREEN); // Drawing the 45-degree line
                x += 1;
                y += 1;
            }
        } else { // 45-degree line from top-left to bottom-right
            while (x <= x2 && y >= y2) {
                putpixel(x, y, GREEN); // Drawing the 45-degree line
                x += 1;
                y -= 1;
            }
        }
    } else { // General slope (any other line)
        float m = (float)(y2 - y1) / (x2 - x1); // Slope calculation
        float c = y1 - m * x1;

        if (m <= 1) { // Slope <= 1
            int x = x1;
            float y = y1;
            while (x <= x2) {
                putpixel(x, (int)y, BLUE);
                x += 1;
                y = m * x + c; // Calculate y using line equation
            }
        } else { // Slope > 1
            int y = y1;
            float x = x1;
            while (y <= y2) {
                putpixel((int)x, y, BLUE);
                y += 1;
                x = (y - c) / m; // Calculate x using line equation
            }
        }
    }

    getch();
    closegraph();
    return 0;
}
