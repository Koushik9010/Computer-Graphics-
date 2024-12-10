#include <graphics.h>
#include <conio.h>

int main() {
    initwindow(700, 700);

    // Set background color and clear the screen
    setbkcolor(WHITE); // Background color
    cleardevice(); // Clear the device to apply background color
    setcolor(BLACK);   // Foreground color

    // Set line style once for all lines
    //setlinestyle(SOLID_LINE, 0, 5);

    // Drawing lines
    line(60, 300, 227, 150);
    line(394, 300, 227, 150);

    // 2nd sloping lines
    line(130, 270, 227, 180);
    line(324, 270, 227, 180);

    line(130, 270, 130, 450);
    line(324, 270, 324, 450);

    // Base line
    line(60, 450, 394, 450);

    line(60, 365, 130, 300); // Left lower slope
    line(394, 365, 324, 300); // Right lower slope

    line(60, 365, 60, 450);
    line(394, 365, 394, 450);

    // Door
    rectangle(197, 360, 247, 450);

    getch();

    return 0;
}
