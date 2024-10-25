//for 45 degree

#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;

    dx = abs(x1 - x0);  // Calculate absolute difference in x
    dy = abs(y1 - y0);  // Calculate absolute difference in y

    x = x0;
    y = y0;

    p = 2 * dy - dx;  // Initial decision parameter

    // Loop until x reaches x1 (for a rightward line)
    while(x <= x1)
    {
        putpixel(x, y, GREEN);  // Draw pixel at (x, y)

        if(p >= 0)
        {
            // Adjust y depending on slope direction (upwards or downwards)
            if(y1 > y0)
                y = y + 1;  // Upward slope (increase y)
            else
                y = y - 1;  // Downward slope (decrease y)

            p = p + 2 * dy - 2 * dx;
        }
        else
        {
            p = p + 2 * dy;
        }
        x = x + 1;  // Increase x to move right
        delay(100);  // Delay for visualization
    }
}

int main()
{
    int gdriver = DETECT, gmode, x0, y0, x1, y1;
    initgraph(&gdriver, &gmode, "");

    // Input coordinates for starting and ending points
    cout << "Enter x-coordinate of the first point: ";
    cin >> x0;
    cout << "Enter y-coordinate of the first point: ";
    cin >> y0;

    cout << "Enter x-coordinate of the second point (x1 > x0): ";
    cin >> x1;

    // For a perfect 45-degree line, set y1 such that the difference between x and y is equal
    cout << "Enter y-coordinate of the second point: ";
    cin >> y1;

    // Check for 45-degree slope: abs(x1 - x0) must equal abs(y1 - y0)
    if(abs(x1 - x0) != abs(y1 - y0)) {
        cout << "Warning: Not a 45-degree line. Ensure abs(x1 - x0) == abs(y1 - y0)!" << endl;
    }

    // Call the function to draw the line
    drawline(x0, y0, x1, y1);

    getch();  // Wait for key press
    closegraph();  // Close the graphics window
    return 0;
}
