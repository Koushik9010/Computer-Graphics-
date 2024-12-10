//works for all condition (increase/decrease/up/down/left/right)
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Initial circle properties
    int centerX = 200, centerY = 200; // Center of the circle
    int radius = 100;                // Initial radius of the circle
    int color = RED;                 // Circle color

    while (true) {
        // Clear previous circle (black background)
        setfillstyle(SOLID_FILL, BLACK);
        bar(0, 0, getmaxx(), getmaxy());

        // Draw the circle
        setfillstyle(SOLID_FILL, color);
        circle(centerX, centerY, radius);
        floodfill(centerX + 2, centerY + 2, WHITE);

        // Check for keyboard input
        if (kbhit()) {
            char key = getch(); // Get the pressed key

            // Increase or decrease the radius based on key press
            if (key == 'i' || key == 'I') {
                radius += 15; // Increase the radius by 15 pixels
            } else if (key == 'd' || key == 'D') {
                if (radius > 15) { // Prevent radius from becoming negative or too small
                    radius -= 15; // Decrease the radius by 15 pixels
                }
            }

            // Move the circle based on key press
            if (key == 'l' || key == 'L') {
                centerX += 20; // Move the circle to the right
            } else if (key == 'r' || key == 'R') {
                centerX -= 20; // Move the circle to the left
            } else if (key == 'u' || key == 'U') {
                centerY -= 20; // Move the circle upwards
            } else if (key == 'n' || key == 'N') {
                centerY += 20; // Move the circle downwards
            }
        }

        // Add a delay to reduce CPU usage
        delay(50);
    }

    closegraph();
    return 0;
}
