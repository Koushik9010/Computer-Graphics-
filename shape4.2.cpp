#include <graphics.h>

void drawMicrophone() {
    // upper arc of mic
    arc(300, 200, 0, 180, 40); // Top arc (centered at 300,200, radius 50)
    line(260, 200, 340, 200);

    //lower arc of the mic
    line(260, 220, 340, 220);
    arc(300, 220, 180, 360, 40);

    arc(300,220,180,350,55);

    // Draw the stand
    line(300, 275, 300, 320); // Vertical stand
    line(275, 320, 320, 320); // Horizontal base
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
