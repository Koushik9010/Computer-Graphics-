#include<graphics.h>

void houseWithRoof(int x, int y, int width, int height){
    //dimensions of the different parts of the house
    int roofHeight = height / 3; //height of the triangle roof
    int wallHeight = height / 2; //height of the wall
    int garageWidth = width / 2; //width of the garage
    int doorWidth = width / 6; //width of the door
    int doorHeight = wallHeight / 2; //height of the door
    int windowSize = width / 8; //size of the window
    int circleRadius = width / 20;

    //triangular roof
    line(x + width / 4, y, x, y + roofHeight); //left slop of the triangle
    line(x + width / 4, y, x + width / 2, y + roofHeight); //right slop of the triangle

    //rectangle roof
    int roofTopY = y + 10;
    int leftAdjustment = 10;
    int rightExtension = 10;
    line(x + width / 4 + leftAdjustment, roofTopY, x + width + rightExtension, roofTopY);
    line(x + width + 10, roofTopY, x + width + 10, y + roofHeight); //right line of the rectangle
    //base line of the roof
    int roofBaseY = y + roofHeight;
    line(x + width / 4 + leftAdjustment, roofBaseY, x + width + rightExtension, roofBaseY);

    //main wall on the left side
    rectangle(x, y + roofHeight, x + width / 2, y + roofHeight + wallHeight);

    //wall on the right side
    rectangle(x + width / 2, y + roofHeight, x + width, y + roofHeight + wallHeight);

    //door
    int doorX = x + width / 10;
    int doorY = y + roofHeight + wallHeight - doorHeight;
    rectangle(doorX, doorY, doorX + doorWidth, doorY+ doorHeight);

    //window
    int windowX = x + width / 4 + 30;
    int windowY = y + roofHeight + wallHeight / 4 + 40;
    rectangle(windowX, windowY, windowX + windowSize, windowY + windowSize);

    //circle on the triangle
    circle(x + width / 4, y + roofHeight / 2, circleRadius);

    //garage door
    int garageDoorX = x + width * 3 / 4 - garageWidth / 6;
    int garageDoorY = y + roofHeight + wallHeight - doorHeight;
    rectangle(garageDoorX , garageDoorY, x + width - garageWidth / 6, y + roofHeight + wallHeight);

    //chimney
    int chimneyWidth = 20;
    int chimneyHeight = 50;
    int chimneyX = x + width / 4 - 60;
    int chimneyY = y + roofHeight / 3 - 20;
    line(chimneyX, chimneyY, chimneyX, chimneyY + chimneyHeight); //left line of the chimney
    line(chimneyX + chimneyWidth, chimneyY, chimneyX + chimneyWidth, chimneyY + chimneyHeight - 20); //right line of the chimney
    line(chimneyX, chimneyY, chimneyX + chimneyWidth, chimneyY);

    //rectangle over the chimney
    int smallRectWidth = 30;
    int smallRectHeight = 10;
    int smallRectX = chimneyX - 5;
    int smallRectY = chimneyY - 10;
    rectangle(smallRectX, smallRectY, smallRectX + smallRectWidth, smallRectY + smallRectHeight);
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setbkcolor(WHITE);
    cleardevice();

    setcolor(BLACK);

    //draw the house
    int width = 400;
    int height = 300;
    int x = (getmaxx() - width) / 2;
    int y = 50;
    houseWithRoof(x, y, width, height);
    getch();
    closegraph();
    return 0;
}
