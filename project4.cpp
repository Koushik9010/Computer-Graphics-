#include<graphics.h>
#include<conio.h>

void human() {
    float scale = 0.5; // Scaling factor (50% of the original size)
    int offsetX = 290;  // Move 290px to the right
    int offsetY = 110;  // Move 110px down

    setcolor(WHITE);

    // Scaled and offset coordinates
    line(595 * scale + offsetX, 170 * scale + offsetY, 680 * scale + offsetX, 170 * scale + offsetY); // base
    line(610 * scale + offsetX, 130 * scale + offsetY, 595 * scale + offsetX, 170 * scale + offsetY); // left
    arc(648 * scale + offsetX, 118 * scale + offsetY, 110, 200, 40 * scale); // back
    line(633 * scale + offsetX, 70 * scale + offsetY, 633 * scale + offsetX, 80 * scale + offsetY); // neck
    line(643 * scale + offsetX, 70 * scale + offsetY, 643 * scale + offsetX, 80 * scale + offsetY); // neck
    line(643 * scale + offsetX, 80 * scale + offsetY, 655 * scale + offsetX, 100 * scale + offsetY);
    line(655 * scale + offsetX, 100 * scale + offsetY, 685 * scale + offsetX, 85 * scale + offsetY); // left hand
    line(658 * scale + offsetX, 107 * scale + offsetY, 690 * scale + offsetX, 92 * scale + offsetY); // left hand
    line(700 * scale + offsetX, 75 * scale + offsetY, 685 * scale + offsetX, 85 * scale + offsetY);
    line(700 * scale + offsetX, 75 * scale + offsetY, 690 * scale + offsetX, 93 * scale + offsetY);
    line(658 * scale + offsetX, 107 * scale + offsetY, 650 * scale + offsetX, 130 * scale + offsetY);
    line(650 * scale + offsetX, 130 * scale + offsetY, 680 * scale + offsetX, 120 * scale + offsetY); // down hand
    line(650 * scale + offsetX, 135 * scale + offsetY, 680 * scale + offsetX, 125 * scale + offsetY); // down hand
    line(680 * scale + offsetX, 125 * scale + offsetY, 700 * scale + offsetX, 110 * scale + offsetY);
    line(680 * scale + offsetX, 120 * scale + offsetY, 700 * scale + offsetX, 110 * scale + offsetY);
    line(650 * scale + offsetX, 135 * scale + offsetY, 640 * scale + offsetX, 145 * scale + offsetY);
    line(640 * scale + offsetX, 145 * scale + offsetY, 680 * scale + offsetX, 170 * scale + offsetY);
    line(615 * scale + offsetX, 170 * scale + offsetY, 625 * scale + offsetX, 195 * scale + offsetY); // leg left
    line(635 * scale + offsetX, 170 * scale + offsetY, 635 * scale + offsetX, 195 * scale + offsetY);
    line(625 * scale + offsetX, 193 * scale + offsetY, 615 * scale + offsetX, 220 * scale + offsetY);
    line(635 * scale + offsetX, 195 * scale + offsetY, 625 * scale + offsetX, 220 * scale + offsetY);
    line(650 * scale + offsetX, 170 * scale + offsetY, 660 * scale + offsetX, 195 * scale + offsetY); // leg right
    line(670 * scale + offsetX, 170 * scale + offsetY, 670 * scale + offsetX, 195 * scale + offsetY);
    line(660 * scale + offsetX, 195 * scale + offsetY, 657 * scale + offsetX, 220 * scale + offsetY);
    line(670 * scale + offsetX, 195 * scale + offsetY, 667 * scale + offsetX, 220 * scale + offsetY);
    circle(640 * scale + offsetX, 45 * scale + offsetY, 25 * scale); // head
}

void bullet() {
    int startX = 334;  // Starting x-coordinate of the first bar
    int endX = 605;    // Ending x-coordinate of the last bar
    int y = 120 + 30;  // Y-coordinate of the bullets with an offset of 50px
    int barWidth = 10; // Width of each bar
    int gap = 10;      // Gap between bars

    for (int x = startX; x <= endX; x += (barWidth + gap)) {
        // Reset all bars to white
        for (int resetX = startX; resetX <= endX; resetX += (barWidth + gap)) {
            setcolor(WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            bar(resetX, y, resetX + barWidth, y + 5);
        }

        // Highlight the current bar in red
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        bar(x, y, x + barWidth, y + 5);

        delay(20);
    }
}

void helicopter() {
    int yOffset = 30; // Offset to move the helicopter down

    setcolor(WHITE);
    line(45, 150 + yOffset, 334, 150 + yOffset); // base line
    line(60, 130 + yOffset, 160, 130 + yOffset); // upper base
    line(26, 100 + yOffset, 46, 150 + yOffset); // left tail
    line(40, 100 + yOffset, 60, 130 + yOffset); // right tail
    line(26, 100 + yOffset, 40, 100 + yOffset); // tail up

    // skids
    line(110, 200 + yOffset, 290, 200 + yOffset);
    line(110, 190 + yOffset, 290, 190 + yOffset);
    line(110, 190 + yOffset, 110, 200 + yOffset);
    line(170, 150 + yOffset, 170, 190 + yOffset);
    line(180, 150 + yOffset, 180, 190 + yOffset);
    line(300, 150 + yOffset, 280, 190 + yOffset);
    line(290, 150 + yOffset, 270, 190 + yOffset);
    arc(290, 170 + yOffset, 270, 350, 30);
    arc(290, 165 + yOffset, 270, 350, 25);
    circle(38, 110 + yOffset, 3);

    // body
    line(190, 80 + yOffset, 315, 80 + yOffset); // body base
    line(220, 60 + yOffset, 280, 60 + yOffset); // upper
    line(220, 60 + yOffset, 200, 80 + yOffset); // side
    line(280, 60 + yOffset, 300, 80 + yOffset); // side
    arc(210, 130 + yOffset, 110, 180, 52);      // left
    arc(300, 122 + yOffset, 320, 430, 45);      // right

    // door
    line(230, 100 + yOffset, 230, 140 + yOffset);
    line(270, 100 + yOffset, 270, 140 + yOffset);
    line(260, 100 + yOffset, 270, 100 + yOffset);
    line(260, 140 + yOffset, 270, 140 + yOffset);
    circle(260, 120 + yOffset, 3);
    line(230, 100 + yOffset, 230, 130 + yOffset);

    // front
    line(290, 80 + yOffset, 290, 120 + yOffset);
    line(290, 120 + yOffset, 345, 120 + yOffset);

    // rotor
    line(250, 40 + yOffset, 250, 60 + yOffset); // vertical
    line(254, 40 + yOffset, 254, 60 + yOffset); // vertical
    line(140, 70 + yOffset, 252, 40 + yOffset); // blade
    line(252, 40 + yOffset, 348, 70 + yOffset); // blade
}


//building and road
void building(){
    // Sky
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(0, 0, 850, 600);

    // Ground
    setfillstyle(SOLID_FILL, BLACK);
    bar(0, 600, 800, 800);

    //road
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(20, 700, 100, 710);
    floodfill(60, 705, WHITE);
    rectangle(140, 700, 220, 710);
    floodfill(180, 705, WHITE);
    rectangle(260, 700, 340, 710);
    floodfill(300, 705, WHITE);
    rectangle(380, 700, 460, 710);
    floodfill(420, 705, WHITE);
    rectangle(500, 700, 580, 710);
    floodfill(540, 705, WHITE);
    rectangle(620, 700, 700, 710);
    floodfill(640, 705, WHITE);
    rectangle(740, 700, 800, 710);
    floodfill(770, 705, WHITE);

    //building 1
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    rectangle(350, 270, 470, 600);
    floodfill(360, 280, RED);
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(380, 300, 440, 350);
    floodfill(400, 325, YELLOW);
    rectangle(380, 390, 440, 440);
    floodfill(400, 415, YELLOW);
    rectangle(380, 480, 440, 530);
    floodfill(400, 505, YELLOW);

    //building 2
    setcolor(BLUE);
    rectangle(470, 220, 610, 600);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(475, 225, BLUE);
    setcolor(YELLOW);
    rectangle(500, 250, 570, 300);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(505, 255, YELLOW);
    rectangle(500, 320, 570, 360);
    floodfill(505, 325, YELLOW);
    rectangle(500, 380, 570, 420);
    floodfill(505, 385, YELLOW);
    rectangle(500, 440, 570, 490);
    floodfill(505, 445, YELLOW);
    rectangle(500, 510, 570, 550);
    floodfill(505, 515, YELLOW);

    //building 3
    setcolor(BLACK);
    rectangle(610, 220, 800, 600);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(615, 225, BLACK);
    setcolor(YELLOW);
    rectangle(620, 240, 680, 290);//w1
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(625, 245, YELLOW);
    rectangle(710, 240, 770, 290);//w2
    floodfill(715, 245, YELLOW);
    rectangle(620, 310, 680, 360);//w3
    floodfill(625, 315, YELLOW);
    rectangle(710, 310, 770, 360);//w4
    floodfill(715, 315, YELLOW);
    rectangle(620, 380, 680, 430);//w5
    floodfill(625, 385, YELLOW);
    rectangle(710, 380, 770, 430);//w6
    floodfill(715, 385, YELLOW);
    rectangle(620, 450, 680, 500);//w7
    floodfill(625, 455, YELLOW);
    rectangle(710, 450, 770, 500);//w8
    floodfill(715, 455, YELLOW);
    //display text
     //setcolor(LIGHTCYAN);
    //settextstyle(SMALL_FONT, HORIZ_DIR, 8);
    //outtextxy(40, 10, "The True Cost of Conflict");
}

void ScrollingText() {
    static int textX = 0; // Text position
    char message[] = "The cost of conflict: A tribute to Riya Martyr of the July Revolution";

    // Ensure the background for the text is clear, set black background here
    setfillstyle(SOLID_FILL, BLACK);
    bar(0, 0, getmaxx(), 50);  // Clear area for scrolling text

    // Draw the first scrolling text
    setcolor(WHITE);
    settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
    outtextxy(textX, 10, message);

    textX += 150; // Increase movement to 10 for faster scrolling (you can increase this value further)

    if (textX > getmaxx()) {
        textX = -textwidth(message); // Reset position when it goes off-screen
    }
}

int main() {
    initwindow(850, 800);
    building();
    helicopter();
    human();

    while (!kbhit()) {  // The loop runs until a key is pressed
        bullet();         // Continue displaying the bullet animation
        ScrollingText();  // Continuously scroll the text

        delay(50);  // Add a small delay to allow for smooth animation
    }

    getch();
    closegraph();
}

