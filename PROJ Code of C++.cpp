#include<iostream>
#include<windows.h>
#include<string>
#include<conio.h>
#include<graphics.h>
#include<fstream>
using namespace std;

int h = GetSystemMetrics(SM_CYSCREEN);
int w = GetSystemMetrics(SM_CXSCREEN);
int x, y;

void mainmenu();
void studentrecord();
void optiontwoofmainscreen();
void optiononeofmainscreen();
void optionthreeofmainscreen();
void optionfourofmainscreen();
char namkiarray[10];

/// ye mouse click ka function hai is say mouse kiay coordinates pata lagay gayen
void mouseclickkafunction()
{
	while (!ismouseclick(WM_LBUTTONDOWN))
    {
  delay(1);
    }
    getmouseclick(WM_LBUTTONDOWN, x, y);
}
void stringtocharconversion(string jopakray)
{ 
	int n = jopakray.length(); //taking name string length 
    namkiarray[n ]; //creating charcater array of string size with 1 size increased
    strcpy(namkiarray, jopakray.c_str());
}

/// is function may filehandling ho rai hai 
/// view student records use huvi hai 
/// class ka data display karwaye gi 

void file_handle_SR(string filename)
{
	readimagefile("res/msc.jpg",0,0,w,h);
	readimagefile("res/bb.jpg",113,940,365,980);
	ifstream ip(filename.c_str());
	
	if(filename=="TD.csv")
{
		if(!ip.is_open()) cout << "ERROR: File Not Open" << '\n';

  string name;
  string subject;
  string salary;
  string id;
int i=385,j=220;
  while(ip.good()){

    getline(ip,name,',');
    getline(ip,subject,',');
    getline(ip,salary,',');
    getline(ip,id,'\n');
    settextstyle(8,0,2);
    
    outtextxy(i,j+20,"NAME : ");
    stringtocharconversion(name);
    outtextxy(i+75,j+20,namkiarray);
    
    outtextxy(i+255,j+20,"SUBJECT : ");
    stringtocharconversion(subject);
    outtextxy(i+365,j+20,namkiarray);
    
    outtextxy(i+685,j+20,"SALARY : ");
    stringtocharconversion(salary);
    outtextxy(i+795,j+20,namkiarray);
    
    j+=35;
    
	}
	ip.close();
}
	else
{
	
  if(!ip.is_open()) cout << "ERROR: File Not Open" << '\n';

  string name;
  string rollno;
  string age;
  string city;
  string bg;
int i=385,j=250;
  while(ip.good()){

    getline(ip,name,',');
    getline(ip,rollno,',');
    getline(ip,age,',');
    getline(ip,city,',');
    getline(ip,bg,'\n');
    settextstyle(8,0,2);

    
    outtextxy(i,j+20,"NAME : ");
    stringtocharconversion(name);
    outtextxy(i+75,j+20,namkiarray);
    
    outtextxy(i+220,j+20,"ROLL NO : ");
    stringtocharconversion(rollno);
    outtextxy(i+335,j+20,namkiarray);
    
    outtextxy(i+525,j+20,"AGE : ");
    stringtocharconversion(age);
    outtextxy(i+595,j+20,namkiarray);
    
    outtextxy(i+675,j+20,"CITY : ");
    stringtocharconversion(city);
    outtextxy(i+755,j+20,namkiarray);
    
    outtextxy(i+900,j+20,"BLOOD GROUP : ");
    stringtocharconversion(bg);
    outtextxy(i+1085,j+20,namkiarray);
    j+=35;
   
  }

  ip.close();
}
  mouseclickkafunction();
  if(x>=113 && x<=365 && y>=940 && y<=980)
    {
    	//,113,940,365,980
    	cleardevice();
    	
    studentrecord();
	}
}


void studentrecord()
{
	string filename;
		readimagefile("res/SRCS.jpg",0,0,w,h);
	readimagefile("res/bb.jpg",113,940,365,980);
    mouseclickkafunction();
    
    //adding removing updating student choice selection 
	if(x>=509 && x<=832 && y>=278 && y<=371)
    {
    	cleardevice();
    	filename="test.csv";
    	cout<<filename;
    	file_handle_SR(filename);
	}
	else if(x>=509 && x<=832&& y>=426 && y<=519)
    {
    	cleardevice();
    	filename="class2.csv";
    	cout<<filename;
    	file_handle_SR(filename);
	}
	else if(x>=509 && x<=832 && y>=574 && y<=667)
    {
    	cleardevice();
    	filename="class3.csv";
    	cout<<filename;
    	file_handle_SR(filename);
	}
	else if(x>=509 && x<=832 && y>=722 && y<=815)
    {
    	cleardevice();
    	filename="class4.csv";
    	cout<<filename;
    	file_handle_SR(filename);
	}
	else if(x>=509 && x<=832 && y>=870 && y<=963)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"SHOWING CLASS 5 : YOUR CLASS HAS NO RECORD FOR NOW ");
	}
	
	if(x>=1088 && x<=1410 && y>=278 && y<=371)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"SHOWING CLASS 6 : YOUR CLASS HAS NO RECORD FOR NOW ");
	}
	else if(x>=1088 && x<=1410 && y>=426 && y<=519)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"SHOWING CLASS 7 : YOUR CLASS HAS NO RECORD FOR NOW ");
	}
	else if(x>=1088 && x<=1410 && y>=574 && y<=667)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"SHOWING CLASS 8 : YOUR CLASS HAS NO RECORD FOR NOW ");
	}
	else if(x>=1088 && x<=1410 && y>=722 && y<=815)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"SHOWING CLASS 9 : YOUR CLASS HAS NO RECORD FOR NOW ");
	}
	else if(x>=1088 && x<=1410 && y>=870 && y<=963)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"SHOWING CLASS 10 : YOUR CLASS HAS NO RECORD FOR NOW ");
	}
		else if(x>=113 && x<=365 && y>=940 && y<=980)
    {
    	//,113,940,365,980
    	cleardevice();
    return;
	}
}

 	////////// OPTION 1 OF MAIN SCREEN

void optiononeofmainscreen()
{
	
	cleardevice();
	readimagefile("res/SMSop1screen.jpg",0,0,w,h);
		readimagefile("res/bb.jpg",113,940,365,980);
	 mouseclickkafunction();
    
    //adding removing updating student choice selection 
	if(x>=162 && x<=638 && y>=385 && y<=490)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"ADDING STUDENT");
	}
	else if(x>=162 && x<=638 && y>=578 && y<=683)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"REMOVING STUDENT");
	}
	else if(x>=162 && x<=638 && y>=771 && y<=876)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"UPDATIG STUDENT");
	}
	
	//adding removing updating teacher choice selection 
    else if(x>=722 && x<=1198 && y>=385 && y<=490)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"ADDING TEACHER");
	}
	else if(x>=722 && x<=1198 && y>=578 && y<=683)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"REMOVING TEACHER");
	}
	else if(x>=722 && x<=1198 && y>=771 && y<=876)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"UPDATIG TEACHER");
	}
	
	//adding removing updating staff choice selection 
    else if(x>=1282 && x<=1758 && y>=385 && y<=490)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"ADDING STAFF");
	}
	else if(x>=1282 && x<=1758  && y>=578 && y<=683)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"REMOVING STAFF");
	}
	else if(x>=1282 && x<=1758  && y>=771 && y<=876)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"UPDATIG STAFF");
	}
		else if(x>=113 && x<=365 && y>=940 && y<=980)
    {
    	//,113,940,365,980
	}
}

////////// OPTION 2 OF MAIN SCREEN 
void optiontwoofmainscreen()
{
	
	cleardevice();
	readimagefile("res/SMSop2screen.jpg",0,0,w,h);
		readimagefile("res/bb.jpg",113,940,365,980);


        mouseclickkafunction();
    
	if(x>=452 && x<=1467 && y>=308 && y<=477)
    {
    		studentrecord();
    		readimagefile("res/SMSop2screen.jpg",0,0,w,h);
		readimagefile("res/bb.jpg",113,940,365,980);
	}
	else if(x>=452 && x<=1467 && y>=525 && y<=694)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"VIEWING STAFF");
	}
	else if(x>=452 && x<=1467  && y>=742 && y<=911)
    {
    	string filename="TD.csv";
    	file_handle_SR(filename);
	}
	else if(x>=113 && x<=365 && y>=940 && y<=980)
    {
    	//,113,940,365,980
    	return;
	}
	mouseclickkafunction();
if(x>=113 && x<=365 && y>=940 && y<=980)
    {
    	//,113,940,365,980
    	return;
	}
	
}

////////// OPTION 3 OF MAIN SCREEN 
void optionthreeofmainscreen()
{
	
	cleardevice();
	readimagefile("res/SMSop3screen.jpg",0,0,w,h);
		readimagefile("res/bb.jpg",113,940,365,980);
 mouseclickkafunction();
    
	if(x>=283 && x<=1636 && y>=394 && y<=579)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"VIEWING STUDENT ACEDMIC REPORT ");
	}
	else if(x>=283 && x<=1636 && y>=666 && y<=851)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"VIEWING STUDET ATTENDANCE REPORT ");
	}
	else if(x>=113 && x<=365 && y>=940 && y<=980)
    {
    	//,113,940,365,980
    	
	}
}


////////// OPTION 4 OF MAIN SCREEN 
void optionfourofmainscreen()
{
	
	cleardevice();
	readimagefile("res/SMSop4screen.jpg",0,0,w,h);
	readimagefile("res/bb.jpg",113,940,365,980);
	 mouseclickkafunction();
    
	if(x>=542 && x<=1377 && y>=340 && y<=455)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"RECIEVING FEE");
	}
	else if(x>=542 && x<=1377 && y>=495 && y<=610)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"PAYING TEACHER");
	}
	else if(x>=542 && x<=1377 && y>=650 && y<=765)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"PAYING STAFF");
	}
	else if(x>=542 && x<=1377 && y>=805 && y<=920)
    {
    	cleardevice();
    		settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    	outtextxy(200,200,"ACCOUNT BALANCE IS = SALAY GHAREEB INSAN ");
	}
	else if(x>=113 && x<=365 && y>=940 && y<=980)
    {
    	//,113,940,365,980
    
	}
}


void mainmenu()
{

 	
 	initwindow(w,h,"SCHOOL MANAGEMENT SYSTEM");
do
{

	
    readimagefile("res/ms.jpg",0,0,w,h);
    
    readimagefile("res/wwr.jpg",113,374,720,457);
    readimagefile("res/vr.jpg",113,510,720,593);
    readimagefile("res/sa.jpg",113,646,720,729);
    readimagefile("res/f.jpg",113,782,720,865);
    readimagefile("res/exit.jpg",113,940,365,980);
    
     mouseclickkafunction();
    cout << "The mouse was clicked at: ";
    cout << "x=" << x;
    cout << " y=" << y << endl;
    if(x>=113 && x<=720 && y>=374 && y<=457)
    {
    	optiononeofmainscreen();
	}
	else if(x>=113 && x<=720 && y>=510 && y<=593)
    {
    	optiontwoofmainscreen();
	}
	else if(x>=113 && x<=720 && y>=646 && y<=729)
    {
    	optionthreeofmainscreen();
	}
	 else if(x>=113 && x<=720 && y>=782 && y<=865)
    {
    optionfourofmainscreen();
	}
	else if(x>=113 && x<=365 && y>=940 && y<=980)
    {
    	//,113,940,365,980
    	cleardevice();
    exit(0);
	}
	 cleardevice();
}while(true);
 	getch();
 	closegraph();
	
}



 int main()
 {
 	
 	mainmenu();
} 
