#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int x1, y1, x2, y2;
    float m, x, y;
    int gdriver = DETECT, gmode;

    /* initialize graphics */
    initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
    //printf("Using DDA Algorithm");

    // Reversed points to change direction
    x1 = 300;  // End point
    y1 = 350;
    x2 = 100;  // Start point
    y2 = 100;
    //x1 = 300;
    //y1 = 350;
    //x2 = 200;
    //y2 = 300;

    m = (float)(y2 - y1) / (x2 - x1); // Calculate slope
    x = x1;
    y = y1;

    if (m <= 1)
    {
        while (x >= x2)  // Notice reverse direction
        {
            putpixel(x, y, 9);  // Draw pixel
            x = x - 1;  // Decrement x to reverse
            y = y - m;  // Adjust y
        }
    }
    else
    {
        while (y >= y2)  // Reverse y if needed
        {
            putpixel(x, y, 9);  // Draw pixel
            x = x - (1 / m);  // Adjust x for reverse slope
            y = y - 1;  // Decrement y
        }
    }

    getch();
    closegraph();
    return 0;
}
