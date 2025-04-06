#include<graphics.h>
#include<windows.h>

// controls 

// f1-f9 = 1-9
// ESC = 0
// correct password = 1111


int flag=0;
void welcome (void)
{
	cleardevice();
	setcolor(LIGHTBLUE);
 settextstyle(1,HORIZ_DIR,3);
 outtextxy(100,20,"W E L C O M E  S I R !");

 line(20,50,580,50);
 system("pause");
}
void draw(void)
{
	
	setcolor(LIGHTCYAN);
	for(int i=0,d=0;i<4;i++,d=d+60)
	{
		rectangle(200,300+d,250,350+d);
		rectangle(260,300+d,325,350+d);
		rectangle(335,300+d,385,350+d);
	}
	rectangle(200,175,385,250);

	settextstyle(1,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(210,310,"1");
	outtextxy(280,310,"2");
	outtextxy(345,310,"3");
	outtextxy(210,370,"4");
	outtextxy(280,370,"5");
	outtextxy(345,370,"6");
	outtextxy(210,430,"7");
	outtextxy(280,430,"8");
	outtextxy(345,430,"9");
	outtextxy(210,490,"<");
	outtextxy(280,490,"0");
	outtextxy(345,490,">");
	
}

void access_granted(void)
{
	cleardevice();
	for(int j=0;j<5;j++)
	{

    setcolor(LIGHTGREEN);
    for(int i=0;i<3;i++)
    {
	
	rectangle(175+i,310+i,400-i,365-i);
	settextstyle(1,HORIZ_DIR,1);
	outtextxy(190,325,"Access Granted");
	line(20+i,20,20+i,100);
	line(20,20+i,100,20+i);
	line(20,630-i,100,630-i);
	line(20+i,630,20+i,550);
	line(580-i,630,580-i,550);
	line(580,630-i,500,630-i);
	line(580-i,20,580-i,100);
	line(580,20+i,500,20+i);
    } 
	delay(700);
	cleardevice();
	delay(700);
	flag=0;
	if(j==4)
	welcome();
    }
}

// access denied 

void access_denied(void)
{
	cleardevice();
	for(int i=0;i<5;i++)
	{
    setcolor(LIGHTRED);
   for(int i=0;i<3;i++)
    {
	
	rectangle(175+i,310+i,400-i,365-i);
	settextstyle(1,HORIZ_DIR,1);
	outtextxy(200,325,"Access Denied");
	line(20+i,20,20+i,100);
	line(20,20+i,100,20+i);
	line(20,630-i,100,630-i);
	line(20+i,630,20+i,550);
	line(580-i,630,580-i,550);
	line(580,630-i,500,630-i);
	line(580-i,20,580-i,100);
	line(580,20+i,500,20+i);
    } 
	delay(700);
	cleardevice();
	delay(700);
	
	
    }
    flag=1;
    
}


// Password retrive

void number_select(int a[],int n,int i)
{

while(1)
{

    if(GetAsyncKeyState(VK_F1))
	{	
		a[i]=1;
		break;

	}
    if(GetAsyncKeyState(VK_F2))
	{	
		a[i]=2;
		break;
	}
    if(GetAsyncKeyState(VK_F3))
	{	
		a[i]=3;
		break;
	}
    if(GetAsyncKeyState(VK_F4))
	{	
		a[i]=4;
		break;
	}
    if(GetAsyncKeyState(VK_F5))
	{	
		a[i]=5;
		break;
	}
    if(GetAsyncKeyState(VK_F6))
	{	
		a[i]=6;
		break;
	}
   if(GetAsyncKeyState(VK_F7))
	{	
		a[i]=7;
		break;
	}
   if(GetAsyncKeyState(VK_F8))
	{	
		a[i]=8;
		break;
	}
    if(GetAsyncKeyState(VK_F9))
	{	
		a[i]=9;
		break;
	}
    if (GetAsyncKeyState(VK_ESCAPE))
	{	
		a[i]=0;
		break;
	}
 }
}

// print star	

void star(int i)
{
	if(i==1)
	{
	 outtextxy(339+10,200,"*");
	}
	if(i==2)
	{
		outtextxy(293+10,200,"*");
	}
	if(i==3)
	{
	outtextxy(247+10,200,"*");	
	}
	if(i==4)
	{
	outtextxy(200+10,200,"*");	
	}

}

// Password check

void check(int a[],int n)
{
	if(a[1]==1&&a[2]==1&&a[3]==1&&a[4]==1)
	{
		access_granted();
	}
	else
	access_denied();
}



// Driver Program

int main()
{
	int n=4;
	int pin[n];
	initwindow(600,650,"LOG-IN",150,10);
	start:
	draw();
	for(int i=1;i<=4;i++)
	{
   	number_select(pin,n,i);
   	star(i);
   	delay(500);
	}
	delay(100);
	check(pin,n);
	if(flag==1)
	goto start;

	getch();
	closegraph();
}
