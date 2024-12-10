#include <graphics.h>

void drawHouseWithGarage() {
    // Main house structure
    rectangle(90, 200, 250, 350); // House body
    rectangle(250, 200, 400, 350); // Garage body

    // Roof (bigger)
    line(90, 200, 175, 130); // Left slope
    line(175, 130, 260, 200); // Right slope

    // Chimney on roof
    line(100, 145, 100, 190);  // Left line (extended to connect to the roof)
    line(100, 145, 125, 145); // Top line
    line(125, 145, 125, 170); // Right line
    rectangle(95, 130, 130, 145); // Smaller and moved upward

    // Door and window in the house
    rectangle(140, 280, 180, 350); // Door
    rectangle(200, 290, 240, 320); // Window moved right and downward

    // Garage door
    rectangle(270, 270, 370, 350); // Garage opening

    // Circle in the roof
    circle(175, 170, 15); // Circular window

    // Rectangle above garage without left line
    line(175, 130, 410, 130); // Top line
    line(410, 130, 410, 200); // Right line
    line(400, 200, 410, 200); // Bottom line
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setbkcolor(WHITE); // Background color
    cleardevice();
    setcolor(BLACK);   // Foreground color

    drawHouseWithGarage();

    getch();
    closegraph();
    return 0;
}
