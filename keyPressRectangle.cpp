#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Initial rectangle properties
    int rectX = 200, rectY = 200;  // Top-left corner of the rectangle
    int rectWidth = 100, rectHeight = 50;  // Width and height of the rectangle
    int color = RED;

    while (true) {
        // Clear the screen
        cleardevice();

        // Draw the rectangle
         setfillstyle(SOLID_FILL, color);
        rectangle(rectX, rectY, rectX + rectWidth, rectY + rectHeight);
        floodfill(rectX + 2, rectY + 2, WHITE);

        // Check for keyboard input
        //if (kbhit()) {
            switch (getch()) {
                case 'r': case 'R': rectX += 20; break;  // Move right
                case 'l': case 'L': rectX -= 20; break;  // Move left
                case 'u': case 'U': rectY -= 20; break;  // Move up
                case 'd': case 'D': rectY += 20; break;  // Move down
            }
        //}

        // Add a delay to avoid high CPU usage
        delay(50);
    }

    closegraph();
    return 0;
}
