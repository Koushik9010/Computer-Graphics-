#include <graphics.h>

void drawMicrophone() {
    // upper arc of mic
    arc(300, 200, 0, 180, 50); // Top arc (centered at 300,200, radius 50)
    line(250, 200, 350, 200);

    //lower arc of the mic
    line(250, 220, 350, 220);
    arc(300, 220, 180, 360, 50);

    //left side arc
    arc(295, 240, 0, 90, 50);
    //right side arc
    //arc(300, 179, 90, 180, 50);

    // Draw the stand
    line(295, 300, 295, 350); // Vertical stand
    line(275, 350, 315, 350); // Horizontal base
}

int main() {
    // Initialize graphics window
    initwindow(600, 600);

    // Set background color
    setbkcolor(WHITE);
    cleardevice();

    // Set drawing color to black
    setcolor(BLACK);

    // Draw the microphone
    drawMicrophone();

    // Wait for a key press
    getch();

    // Close the graphics window
    closegraph();
    return 0;
}
