
 
 
 
 
 #include <iostream>
#include "graphics.h"

using namespace std;

int main()

 {
    {initwindow(1000,800);
    settextjustify(CENTER_TEXT,TOP_TEXT);
    settextstyle(4,0,8);
    outtextxy(2500,2200,"Scrolling Text");
    }
    while(!kbhit());
 }
