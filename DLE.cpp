#include <graphics.h>
#include <stdlib.h>
#include<math.h>
#include <stdio.h>
#include <conio.h>

	int main( ) {
        int x1, y1, x2, y2;
        float m, c, x, y;

        int gdrive = DETECT, gmode, errorcode;

        initgraph(&gdrive, &gmode, "");

        x1 = 100;
        x2 = 400;
        y1 = 100;
        y2 = 300;

        m=(y2 - y1) / (x2 - x1);
        c=y1 - m * x1;
        printf("Direct Use of the Line Equation ");

        if(m <= 1){
            x = x1;
            while(x <= x2)
            {
                y=m*x+c;
                putpixel(x,y,GREEN);
                x=x+1;
            }
        }
        if(m > 1){
            y = y1;
            while(y <= y2){
                y=y+1;
                x=(y-c)/m;
                putpixel(x,y,GREEN);
            }
        }
        getch();
        closegraph();
        return 0;
}
