#include<graphics.h>

void drawBank(int x, int y, int width, int baseBarHeight, int topBarHeight, int middleBarHeight, int columnWidth, int columnHeight, int spacing){
    setfillstyle(SOLID_FILL, BLACK); //set the fill color to black

    //roof
    line(x + width / 2, y - 50, x, y + baseBarHeight); //left side
    line(x + width / 2, y - 50, x + width, y + baseBarHeight); //right side
    line(x, y + baseBarHeight, x + width, y + baseBarHeight); //roof base
    floodfill(x + width / 2, y, BLACK); //fill the triangle with black

    //bar under the roof
    int barY = y + baseBarHeight + spacing;
    rectangle(x + width / 8, barY, x + width * 7/8, barY + topBarHeight);
    floodfill(x + width / 2, barY + topBarHeight / 2, BLACK); //fill the bar

    //vertical column
    int columnShift = 18; //shift the line to the right
    int columnY = barY + topBarHeight + spacing;
    for(int i = 0; i < 3; i++){
        int columnX1 = x + width / 8 + columnShift + i * (width / 4);
        int columnX2 = columnX1 + columnWidth;
        rectangle(columnX1, columnY, columnX2, columnY + columnHeight);
        floodfill(columnX1 + columnWidth / 2, columnY + columnHeight / 2, BLACK);
    }

    //bar under the column
    int secondBarY = columnY + columnHeight + spacing;
    rectangle(x + width / 8, secondBarY, x + width * 7 / 8, secondBarY + middleBarHeight);
    floodfill(x + width / 2, secondBarY + middleBarHeight / 2, BLACK);

    //base bar
    int baseBarY = secondBarY + middleBarHeight + spacing;
    int thinnerBaseBarHeight = 10;
    rectangle(x, baseBarY, x + width, baseBarY + thinnerBaseBarHeight);
    floodfill(x + width / 2, baseBarY + thinnerBaseBarHeight / 2, BLACK);
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setbkcolor(WHITE); //background color white
    cleardevice();
    setcolor(BLACK); //drawing color

    int width = 300;
    int baseBarHeight = 20;
    int topBarHeight = 10;
    int middleBarHeight = 10;
    int columnWidth = 40;
    int columnHeight = 120;
    int spacing = 10;

    int x = (getmaxx() - width) / 2;
    int y = 50;

    drawBank(x, y, width, baseBarHeight, topBarHeight, middleBarHeight, columnWidth, columnHeight, spacing);

    getch();
    closegraph();
    return 0;
}


