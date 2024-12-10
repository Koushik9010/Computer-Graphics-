#include<graphics.h>
#include<math.h>

void drawHouseWithSun(){
    //ground line
    setcolor(BLACK);
    line(50,350,150,350); //left side line
    line(300,350,400,350); //right side line

    //house rectangle
    rectangle(150,200,300,370);

    //triangle of the roof
    line(130,200,225,80); //left
    line(225,80,320,200); //right
    line(130,200,320,200); //roof base

    //door
    rectangle(200,290,250,370);

    //door handle
    circle(245,330,5);

    //window
    circle(175,280,20); //left window
    circle(275,280,20); //right window

    //sun
    circle(350,100,30);

    //sun rays
    for(int i = 0; i < 360; i+= 15){
        int x1 = 350 + 30*cos(i*M_PI/180.0); //start of the ray
        int y1 = 100 + 30*sin(i*M_PI/180.0);

        int rayLength = (i/15)%2 == 0 ? 50:40; //for different size of the ray

        int x2 = 350 + rayLength*cos(i*M_PI/180.0); //end of the ray
        int y2 = 100 + rayLength * sin(i * M_PI / 180.0);

        line(x1,y1,x2,y2); //draw the ray
    }

    // Draw the vertical ground lines (beside the house)
    line(150, 370, 150, 350); // Left side ground line
    line(300, 370, 300, 350); // Right side ground line
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    drawHouseWithSun();
    getch();
    closegraph();
    return 0;
}
