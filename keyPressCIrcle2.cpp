#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Initial circle properties
    int centerX = 200, centerY = 200; // Center of the circle
    int radius = 100;                // Radius of the circle
    int color = RED;                 // Circle color

    while (true) {
        // Draw the circle at the new position
        setfillstyle(SOLID_FILL, BLACK);
        bar(0, 0, getmaxx(), getmaxy()); // Clear previous circle (black background)

        // Draw the circle
        setfillstyle(SOLID_FILL, color);
        circle(centerX, centerY, radius);
        floodfill(centerX + 2, centerY + 2, WHITE);

        // Check for keyboard input
        //if (kbhit()) {
            char key = getch(); // Get the pressed key

            // Update circle position based on key press
            if (key == 'r' || key == 'R') {
                centerX += 20; // Move right
            } else if (key == 'l' || key == 'L') {
                centerX -= 20; // Move left
            } else if (key == 'u' || key == 'U') {
                centerY -= 20; // Move up
            } else if (key == 'd' || key == 'D') {
                centerY += 20; // Move down
            }
        //}

        // Add a delay to reduce CPU usage
        delay(50);
    }

    closegraph();
    return 0;
}
