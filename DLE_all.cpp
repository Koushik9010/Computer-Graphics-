#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int x1, y1, x2, y2;
    float m, c;
    int gdrive = DETECT, gmode;

    // Initialize graphics mode
    initgraph(&gdrive, &gmode, "");

    // Set coordinates (Change these to draw different lines)
    x1 = 100;
    y1 = 200;
    x2 = 300;
    y2 = 100;

    printf("Drawing a Line Based on the Line Equation\n");

    // Check if the line is vertical (parallel to y-axis)
    if (x1 == x2) {
        int x = x1;
        for (int y = y1; y <= y2; y++) {
            putpixel(x, y, GREEN); // Draw vertical line in green
        }
    }
    // Check if the line is horizontal (parallel to x-axis)
    else if (y1 == y2) {
        int y = y1;
        for (int x = x1; x <= x2; x++) {
            putpixel(x, y, BLUE); // Draw horizontal line in blue
        }
    }
    // Check for 45-degree angle line
    else if (abs(y2 - y1) == abs(x2 - x1)) {
        int x = x1;
        int y = y1;
        if (y2 > y1) { // 45-degree up-right
            while (x <= x2 && y <= y2) {
                putpixel(x, y, RED);
                x++;
                y++;
            }
        } else { // 45-degree down-right
            while (x <= x2 && y >= y2) {
                putpixel(x, y, YELLOW);
                x++;
                y--;
            }
        }
    }
    // General case for other slopes
    else {
        m = (float)(y2 - y1) / (x2 - x1);
        c = y1 - m * x1;

        if (m <= 1) { // For slopes <= 1
            int x = x1;
            while (x <= x2) {
                int y = m * x + c;
                putpixel(x, y, CYAN); // Slope <= 1 in cyan
                x++;
            }
        } else { // For slopes > 1
            int y = y1;
            while (y <= y2) {
                int x = (y - c) / m;
                putpixel(x, y, MAGENTA); // Slope > 1 in magenta
                y++;
            }
        }
    }

    getch();
    closegraph();
    return 0;
}


