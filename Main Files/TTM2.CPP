/* copyright BHworld creations pvt. ltd.

   TTM2 in your screen.........

*/
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<fstream.h>

class geartool
{
 public:

 inline  void thgt1(int a)
{setcolor(a);
 settextstyle(7,0,1);
 outtextxy(120,180,"\42Death is no more than passing");
 settextstyle(7,0,1);
 outtextxy(160,220,"from one room to another.\42");
 settextstyle(3,0,1);
 outtextxy(330,270,"- Hellen Keler");
}
 inline void thgt2(int a)
{setcolor(a);
 settextstyle(7,0,1);
 outtextxy(120,180,"\42A company is only as good as");
 settextstyle(7,0,1);
 outtextxy(160,220,"the people it keeps.\42");
 settextstyle(3,0,1);
 outtextxy(330,270,"- Mary Kay Ash");
}


 inline void icon1(int a)
{ setcolor(a);
 settextstyle(10,0,8);
 outtextxy(160,140,"BH");
 rectangle(150,300,305,178);
 settextstyle(6,0,8);
 outtextxy(310,208,"world");
 settextstyle(5,0,4);
 outtextxy(255,295,"beyond future...");
}
 void icon2(int a)
{setcolor(a);
 rectangle(90,280,315,160);
 floodfill(101,279,a);
 setcolor(0);
 settextstyle(1,0,9);
 outtextxy(120,160,"TGS");
 settextstyle(6,0,1);
 outtextxy(130,255,"The   Giant   Squirrel");
 setcolor(a);
 settextstyle(7,0,4);
 outtextxy(345,230,"graphics encoder");
 settextstyle(1,0,1);
 outtextxy(210,360,"GRAPHICS PARTNER");
}
inline void icon3(int a)
{setcolor(a);
 settextstyle( 8,0, 2);
 outtextxy(140,230,"BHworld creations studio presents...");
}
inline void icon4(int a)
{setcolor(a);
 settextstyle(8,0,1);
 outtextxy(200,150,"GREAT THANKS TO");
 settextstyle( 8,0, 1);
 line(200,180,385,180);
 outtextxy(100,230,"SEEMA MAM for their excellence guidance,");
 settextstyle(8,0,1);
 outtextxy(125,260,"and to my friends who support me.");
}
inline void icon5(int a)
{setcolor(a);
 settextstyle(8,0,1);
 outtextxy(105,230,"The classical horror");
}
inline void icon6(int a)
{setcolor(a);
 settextstyle(8,0,1);
 outtextxy(322,230,"in a new flavour.");
}
 void icon7(int x)
{ settextstyle(3,0,8);
  setcolor(x);
  outtextxy(150,120,"T");
  settextstyle(3,0,5);
  setcolor(x);
  outtextxy(185,158,"ALK");
  settextstyle(3,0,8);
  setcolor(x);
  outtextxy(280,120,"T");
  settextstyle(3,0,5);
  setcolor(x);
  outtextxy(316,158,"O");
  settextstyle(3,0,8);
  setcolor(x);
  outtextxy(380,120,"M");
  settextstyle(3,0,5);
  setcolor(x);
  outtextxy(425,158,"E");
  }
 void icon8(int a)
{ settextstyle(2,0,7);
  setcolor(a);
  outtextxy(340,220,"UNTIL END");
  settextstyle(1,0,65);
  setcolor(a);
  outtextxy(480,125,"II");
  line(160,218,450,218);
  line(160,248,450,248);
  setcolor(a);
  settextstyle(6,0,4);
  outtextxy(310,270,"Just Beginning");
  setcolor(a);
  circle(525,295,20);
  setfillstyle(1,a);
  floodfill(525,295,a);
  setcolor(0);
  settextstyle(2,0,6);
  outtextxy(507,285,"BETA");
}
inline void icon9()
{settextstyle(1,0,1);
 outtextxy(540,400,"LOADING");
 rectangle(520,450,530,440);
 rectangle(540,450,550,440);
 rectangle(560,450,570,440);
 rectangle(580,450,590,440);
 rectangle(600,450,610,440);
 rectangle(620,450,630,440);
}
 void icon10(int a)
{for(int i=0;i<a;i++)
 {icon9();
  floodfill(521,449,15);
  delay(150);
  cleardevice();
  icon9();
  floodfill(521,449,0);
  floodfill(541,449,15);
  delay(150);
  cleardevice();
  icon9();
  floodfill(541,449,0);
  floodfill(561,449,15);
  delay(150);
  cleardevice();
  icon9();
  floodfill(561,449,0);
  floodfill(581,449,15);
  delay(150);
  cleardevice();
  icon9();
  floodfill(581,449,0);
  floodfill(601,449,15);
  delay(150);
  cleardevice();
  icon9();
  floodfill(601,499,0);
  floodfill(621,449,15);
  delay(150);
  cleardevice();
  icon9();
 }
}


 void icon11(int a)
{setcolor(a);
 rectangle(5,160,190,430);
  setcolor(a);
  settextstyle(3,0,8);
  outtextxy(230,0,"T");
  settextstyle(3,0,5);
  outtextxy(265,38,"ALK");
  settextstyle(3,0,8);
  outtextxy(360,0,"T");
  settextstyle(3,0,5);
  outtextxy(396,38,"O");
  settextstyle(3,0,8);
  outtextxy(460,0,"M");
  settextstyle(3,0,5);
  outtextxy(505,38,"E");

  settextstyle(2,0,7);
  outtextxy(420,100,"UNTIL END");
  settextstyle(1,0,65);
  outtextxy(560,5,"II");
  line(240,98,530,98);
  line(240,128,530,128);
  settextstyle(6,0,4);
  outtextxy(390,150,"Just Beginning");
  setcolor(a);
  circle(605,175,20);
  setfillstyle(1,a);
  floodfill(605,175,a);
  setcolor(0);
  settextstyle(2,0,6);
  outtextxy(587,165,"BETA");
 setcolor(a);
 line(470,340,470,380);
 line(470,400,470,470);
 line(485,340,485,380);
 line(485,400,485,470);
 line(420,380,470,380);
 line(420,400,470,400);
 line(485,380,535,380);
 line(485,400,535,400);
 line(470,340,485,340);
 line(470,470,485,470);
 line(420,380,420,400);
 line(535,380,535,400);


 settextstyle(1,0,4);
 outtextxy(320,342,"W");
 settextstyle(1,0,3);
 outtextxy(350,332,"H");
 outtextxy(370,322,"E");
 outtextxy(390,312,"R");
 outtextxy(410,302,"E");

 settextstyle(1,0,4);
 outtextxy(430,292,"D");
 settextstyle(1,0,3);
 outtextxy(450,300,"E");
 outtextxy(470,300,"V");
 outtextxy(490,300,"I");
 outtextxy(510,300,"L");
 settextstyle(1,0,4);
 outtextxy(530,302,"C");
 settextstyle(1,0,3);
 outtextxy(550,312,"R");
 outtextxy(570,322,"I");
 outtextxy(590,332,"E");
 outtextxy(610,342,"S");

}

icon12(int a)
{setcolor(a);
 rectangle(10,205,185,240);
 floodfill(11,206,a);
 setcolor(0);
 settextstyle(2,0,7);
 outtextxy(20,210,"STORY MODE");

 setcolor(a);
 settextstyle(2,0,6);
 outtextxy(17,270,"TALK TO SPIRITS");
 outtextxy(17,320,"CREDITS");
 outtextxy(17,370,"EXIT");
}

 void icon12A(int a)
{setcolor(a);
 rectangle(8,260,185,295);
 floodfill(9,261,a);
 setcolor(0);
 settextstyle(2,0,7);
 outtextxy(10,265,"TALK TO SPIRITS");

 setcolor(15);
 settextstyle(2,0,6);
 outtextxy(17,220,"STORY MODE");
 outtextxy(17,320,"CREDITS");
 outtextxy(17,370,"EXIT");
}
 void icon12B(int a)
{setcolor(a);
 rectangle(8,310,185,345);
 floodfill(9,311,a);
 setcolor(0);
 settextstyle(2,0,7);
 outtextxy(20,315,"CREDITS");

 setcolor(15);
 settextstyle(2,0,6);
 outtextxy(17,220,"STORY MODE");
 outtextxy(17,270,"TALK TO SPIRITS");
 outtextxy(17,370,"EXIT");
}

 void icon12C(int a)
{setcolor(a);
 rectangle(8,360,185,395);
 floodfill(9,361,a);
 setcolor(0);
 settextstyle(2,0,7);
 outtextxy(20,365,"EXIT");

 setcolor(15);
 settextstyle(2,0,6);
 outtextxy(17,220,"STORY MODE");
 outtextxy(17,270,"TALK TO SPIRITS");
 outtextxy(17,320,"CREDITS");
}
inline void icon13(int a)
{ setcolor(a);
 settextstyle(3,0,5);
 outtextxy(10,20,"CHAPTER SELECTION");

 rectangle(0,80,640,470);
 rectangle(170,85,635,465);

}

 void icon14(int a)
{setcolor(15);
  rectangle(174,89,631,321);
 icon13(a);
 setcolor(a);
 rectangle(6,130,164,195);
 floodfill(7,131,a);
 setcolor(0);
 settextstyle(2,0,7);
 outtextxy(15,135,"CHAPTER - 1");
 outtextxy(30,165,"ESCAPE");

 setcolor(a);
 settextstyle(2,0,6);
 outtextxy(10,220,"CHAPTER - 2");
 outtextxy(25,250,"THE ROOM");

 outtextxy(10,300,"CHAPTER - 3");
 outtextxy(25,330,"DEVIL");

 outtextxy(10,380,"CHAPTER - 4");
 outtextxy(25,410,"ENDING STONE");

  settextstyle(2,0,5);
 outtextxy(120,440,"BACK");

 setcolor(a);
 settextstyle(2,0,4);
 outtextxy(176,325,"You are trapped in a place and don't know how to escape from there, you find a ");
 outtextxy(176,340,"guard taking round around you.");
 outtextxy(176,375,"Try to find information about that place and way to come out from that guard");
 outtextxy(176,390,"through your words that may convince him.");

 setcolor(a);
 line(300,120,300,320);
 line(480,120,480,320);
 line(300,120,480,120);
 rectangle(340,150,440,240);


 line(350,150,350,240);
 line(355,150,355,240);
 floodfill(351,151,a);

  line(375,150,375,240);
 line(380,150,380,240);
 floodfill(376,151,a);

  line(400,150,400,240);
 line(405,150,405,240);
 floodfill(401,151,a);

  line(425,150,425,240);
 line(430,150,430,240);
 floodfill(426,151,a);

 circle(365,215,25);
 line(375,205,390,215);
 line(375,225,385,225);
 line(390,190,390,240);
 line(395,190,395,240);
 line(392.5,170,390,190);
 line(392.5,170,395,190);



}

 void icon14A(int a)
{setcolor(15);
 rectangle(174,89,631,321);
 icon13(15);
 setcolor(a);
 rectangle(6,210,164,275);
 floodfill(7,211,a);
 setcolor(0);
 settextstyle(2,0,7);
 outtextxy(15,215,"CHAPTER - 2");
 outtextxy(30,245,"THE ROOM");

 setcolor(15);
 settextstyle(2,0,6);
 outtextxy(10,140,"CHAPTER - 1");
 outtextxy(25,170,"ESCAPE");

 outtextxy(10,300,"CHAPTER - 3");
 outtextxy(25,330,"DEVIL");

 outtextxy(10,380,"CHAPTER - 4");
 outtextxy(25,410,"ENDING STONE");

  settextstyle(2,0,5);
 outtextxy(120,440,"BACK");

 settextstyle(2,0,4);
 outtextxy(176,325,"After finding a way, it's time to get away from that room and the prison where");
 outtextxy(176,340,"you trapped.");
 outtextxy(176,375,"Make your moves to get out from that place by taking correct steps at time.");
 outtextxy(176,390,"Do or die.");

 setcolor(15);
 line(200,320,330,220);
 line(580,320,450,220);
 line(330,220,330,90);
 line(450,220,450,90);

 circle(365,145,10);
 circle(365,170,15);
 line(360,185,355,220);
 line(370,185,375,220);
 line(350,160,340,180);
 line(380,160,396,160);
 line(396,140,396,220);
 line(399,140,399,220);
 line(396,220,399,220);
 line(397.5,130,396,140);
 line(397.5,130,399,140);
 floodfill(397,141,15);
 circle(360,143,2);
 circle(370,143,2);
 settextstyle(1,0,3);
 outtextxy(370,100,"!");


}

 void icon14B(int a)
{setcolor(15);
  rectangle(174,89,631,321);
 icon13(15);
 setcolor(a);
 rectangle(6,290,164,355);
 floodfill(7,291,a);
 setcolor(0);
 settextstyle(2,0,7);
 outtextxy(15,295,"CHAPTER - 3");
 outtextxy(30,325,"DEVIL");

 setcolor(15);
 settextstyle(2,0,6);
 outtextxy(10,140,"CHAPTER - 1");
 outtextxy(25,170,"ESCAPE");

 outtextxy(10,220,"CHAPTER - 2");
 outtextxy(25,250,"THE ROOM");

 outtextxy(10,380,"CHAPTER - 4");
 outtextxy(25,410,"ENDING STONE");

  settextstyle(2,0,5);
 outtextxy(120,440,"BACK");

 settextstyle(2,0,4);
 outtextxy(176,325,"You got some new powers, and time has come to show them correctly what you");
 outtextxy(176,340,"are right now.");
 outtextxy(176,375,"Use your powers against the devil to defeat him and make your way ahead to");
 outtextxy(176,390,"escpae from the prison.");

 settextstyle(2,0,8);
 outtextxy( 310,190,"COMING SOON...");
}

 void icon14C(int a)
{setcolor(15);
  rectangle(174,89,631,321);
 icon13(15);
 setcolor(a);
 rectangle(3,365,167,431);
 floodfill(4,366,a);
 setcolor(0);
 settextstyle(2,0,7);
 outtextxy(15,375,"CHAPTER - 4");
 outtextxy(27,405,"ENDING STONE");

 setcolor(15);
 settextstyle(2,0,6);
 outtextxy(10,140,"CHAPTER - 1");
 outtextxy(25,170,"ESCAPE");

 outtextxy(10,220,"CHAPTER - 2");
 outtextxy(25,250,"THE ROOM");

 outtextxy(10,300,"CHAPTER - 3");
 outtextxy(25,330,"DEVIL");

 settextstyle(2,0,5);
 outtextxy(120,440,"BACK");

 settextstyle(2,0,4);
 outtextxy(176,325,"You are just a step away from the main gate to get escape from that prison ");
 outtextxy(176,340,"but unfortunately get encounter by thier leader.");
 outtextxy(176,375,"He may has much more powers than yours, count your health for your life");
 outtextxy(176,390,"and give freedom to those all prisoners from that place.");


settextstyle(2,0,8);
 outtextxy( 310,190,"COMING SOON...");
}


 void icon14D(int a)
{
 icon13(15);
 setcolor(a);
 rectangle(120,435,165,455);
 floodfill(121,436,a);
 setcolor(0);
 settextstyle(2,0,6);
 outtextxy(125,435,"BACK");

 setcolor(15);
 settextstyle(2,0,6);
 outtextxy(10,140,"CHAPTER - 1");
 outtextxy(25,170,"ESCAPE");

 outtextxy(10,220,"CHAPTER - 2");
 outtextxy(25,250,"THE ROOM");

 outtextxy(10,300,"CHAPTER - 3");
 outtextxy(25,330,"DEVIL");

 outtextxy(10,380,"CHAPTER - 4");
 outtextxy(25,410,"ENDING STONE");
}
 void icon15(int a)
{ setcolor(a);
  rectangle(400,400,630,460);
  floodfill(401,401,0);
  setcolor(a);
  settextstyle(2,0,4);
  outtextxy(410,420,"PRESS    TO SELECT OPTION AND");
  setcolor(a);
  circle(450,425,7);
  setfillstyle(1,a);
  floodfill(450,425,a);
  setcolor(0);
  settextstyle(2,0,4);
  outtextxy(448,420,"S");
  setcolor(a);
  circle(600,425,7);
  setfillstyle(1,a);
  floodfill(600,425,a);
  setcolor(0);
  outtextxy(598,420,"N");
  setcolor(a);
  outtextxy(410,440,"TO GO ON NEXT OPTIONS...");
}
 void icon16(int a)
{setcolor(a);
 settextstyle(10,0,4);
 outtextxy(80,200,"BH");
 rectangle(75,265,139,215);
 settextstyle(6,0,4);
 outtextxy(143,228,"world");
 settextstyle(5,0,1);
 outtextxy(100,265,"beyond future...");

 setcolor(a);
 rectangle(300,270,395,215);
 floodfill(301,269,a);
 setcolor(0);
 settextstyle(1,0,5);
 outtextxy(310,210,"TGS");
 settextstyle(2,0,3);
 outtextxy(315,255,"The  Giant  Squirrel");
 setcolor(a);
 settextstyle(7,0,1);
 outtextxy(405,240,"graphics encoder");
 settextstyle(1,0,1);

 settextstyle(2,0,4);
 outtextxy(140,380,"copyright BHworld creations (INDIA). All rights reserved.");
 settextstyle(2,0,3);
 outtextxy(130,383,"c");
 circle(131,387,5);
 settextstyle(2,0,7);
 outtextxy(190,120,"CREATED BY");
 line(190,145,305,145);
}

inline void icon17(int a)
{
 setcolor(a);
 settextstyle(1,0,7);
 outtextxy(200,200,"ESCAPE");
 settextstyle(8,0,1);
 outtextxy(240,173,"CHAPTER - 1");
 line(200,205,420,205);
 line(200,275,420,275);
}

inline void icon18(int a)
{setcolor(a);
 rectangle(150,190,450,310);
 floodfill(151,191,a);
 setcolor(0);
 settextstyle(3,0,4);
 outtextxy(170,200,"NOT AVAILABLE IN");
 outtextxy(190,260," BETA VERSION");
}



 void credits()
{for(int i=0;i<=1200;i++)
{cleardevice();
 if(i<=100)
 {icon7(15);
  icon8(15);
 }

 if(i>100)
 {settextstyle(3,0,8);
  setcolor(15);
  outtextxy(150,(120-i)+101,"T");
  settextstyle(3,0,5);
  outtextxy(185,(158-i)+101,"ALK");
  settextstyle(3,0,8);
  outtextxy(280,(120-i)+101,"T");
  settextstyle(3,0,5);
  outtextxy(316,(158-i)+101,"O");
  settextstyle(3,0,8);
  outtextxy(380,(120-i)+101,"M");
  settextstyle(3,0,5);
  outtextxy(425,(158-i)+101,"E");


 settextstyle(2,0,7);
  setcolor(15);
  outtextxy(340,(220-i)+101,"UNTIL END");
  settextstyle(1,0,65);
  outtextxy(480,(125-i)+101,"II");
  line(160,(218-i)+101,450,(218-i)+101);
  line(160,(248-i)+101,450,(248-i)+101);
  settextstyle(6,0,4);
  outtextxy(310,(270-i)+101,"Just Beginning");
  setcolor(15);
  circle(525,(295-i)+101,20);
  setfillstyle(1,15);
  floodfill(525,(295-i)+101,15);
  setcolor(0);
  settextstyle(2,0,6);
  outtextxy(507,(285-i)+101,"BETA");
  }
 setcolor(15);
 settextstyle(2,0,5);
 outtextxy(180,480-i,"BHworld creations pvt. ltd. (INDIA)");
 settextstyle(2,0,4);
 outtextxy(120,540-i,"SOUNDS BY:-                                  Dawn atmos pvt. ltd.");
 outtextxy(120,560-i,"GRAPHICS BY:-                                TGS graphics encoder");
 outtextxy(120,580-i,"BASE SUPPORTED BY:-                          Turbo C++");
 settextstyle(2,0,5);
 outtextxy(200,620-i,"SPECIAL THANKS TO");
 settextstyle(2,0,4);
 outtextxy(220,660-i,"Sushma (My mother)");
 outtextxy(220,680-i,"Sanjay Kumar Singh (My father)");
 outtextxy(220,700-i,"Seema Mam");
 outtextxy(220,720-i,"Sanket Mathur");
 outtextxy(220,740-i,"Hitesh Sharma");
 outtextxy(220,760-i,"Shivani (My elder sister)");
 outtextxy(120,820-i,"STORY WRITTEN BY:-                            Bipul Harsh");
 outtextxy(120,840-i,"MARKETING BY:-                                Moserbaer pvt. ltd.");
 outtextxy(120,860-i,"                                              Sony pvt. ltd.");
 outtextxy(120,880-i,"SUPPORTING PARTNERS:-                         HP COMPAC Presario");
 outtextxy(120,900-i,"                                              Intel Corporation");
 outtextxy(120,920-i,"                                              Microsoft Windows");
 outtextxy(120,940-i,"                                              Realtek Sound Drivers");
 outtextxy(120,960-i,"PROGRAM ASSISTANCE BY:-                       Ankit Dhar Dubey");
 outtextxy(120,980-i,"                                              Sumita Arora");
 outtextxy(120,1000-i,"                                              Sanket Mathur");
 outtextxy(120,1020-i,"                                              Seema Mam");
 outtextxy(120,1040-i,"GRAPHICS ENCODED BY:-                         Bipul Harsh");
 outtextxy(120,1060-i,"GRAPHICS ASSISTANCE BY:-                      Ankit Dhar Dubey");
 outtextxy(120,1080-i,"                                              Google Images");
 outtextxy(120,1100-i,"THANKS FOR THOUGHTS TO:-                      Hellen Keler");
 outtextxy(120,1120-i,"                                              Mary Kay Ash");
 outtextxy(120,1140-i,"SOUNDS BY:-                                   Bipul Harsh");

 delay(20);
 }

}
  void icon19(int i)
 {setcolor(i);
 rectangle(250,80,400,300);
 rectangle(290,100,360,170);
 rectangle(240,70,410,310);
 line(240,70,250,80);
 line(400,300,410,310);
 line(240,310,250,300);
 line(400,80,410,70);
 line(50,310,240,310);
 line(50,310,0,400);
 line(50,0,50,310);
 line(410,310,580,310);
 line(580,310,630,400);
 line(580,0,580,310);
 line(300,100,300,170);
 line(303,100,303,170);
 floodfill(301,101,i);
 line(313,100,313,170);
 line(316,100,316,170);
 floodfill(314,101,i);
 line(326,100,326,170);
 line(329,100,329,170);
 floodfill(327,101,i);
 line(339,100,339,170);
 line(342,100,342,170);
 floodfill(340,101,i);
 line(352,100,352,170);
 line(355,100,355,170);
 floodfill(353,101,i);


  line(305,120,305,170);
 line(300,120,300,170);
 line(300,120,302.5,100);
 line(305,120,302.5,100);
 floodfill(301,121,i);
  circle(310,150,18);
 line(312,139,320,143);
 line(315,145,320,145);
 line(315,155,320,155);
}

 void icon19B()
{ for(int i=0;i<30;i++)
 { cleardevice();
   setcolor(15);
 rectangle(250,80,400,300);
 rectangle(290,100,360,170);
 rectangle(240,70,410,310);
 line(240,70,250,80);
 line(400,300,410,310);
 line(240,310,250,300);
 line(400,80,410,70);
 line(50,310,240,310);
 line(50,310,0,400);
 line(50,0,50,310);
 line(410,310,580,310);
 line(580,310,630,400);
 line(580,0,580,310);
 line(300,100,300,170);
 line(303,100,303,170);
 floodfill(301,101,15);
 line(313,100,313,170);
 line(316,100,316,170);
 floodfill(314,101,15);
 line(326,100,326,170);
 line(329,100,329,170);
 floodfill(327,101,15);
 line(339,100,339,170);
 line(342,100,342,170);
 floodfill(340,101,15);
 line(352,100,352,170);
 line(355,100,355,170);
 floodfill(353,101,15);


  line(305+i,120,305+i,170);
 line(300+i,120,300+i,170);
 line(300+i,120,302.5+i,100);
 line(305+i,120,302.5+i,100);
 floodfill(301+i,121,15);
  circle(310+i,150,18);
 line(312+i,139,320+i,143);
 line(315+i,145,320+i,145);
 line(315+i,155,324+i,155);
 if((i<20)&&(i>5))
 {settextstyle(3,0,1);
 outtextxy(220,420,"Where i am.....");
 }
 if(i>=20)
 { settextstyle(3,0,1);
  outtextxy(220,390,"Where i am.....");

  outtextxy(220,420,"Hey...");
 }
 delay(140);
 }
}

 void icon19C(int a)
{setcolor(a);
 rectangle(250,80,400,300);
 rectangle(290,100,360,170);
 rectangle(240,70,410,310);
 line(240,70,250,80);
 line(400,300,410,310);
 line(240,310,250,300);
 line(400,80,410,70);
 line(50,310,240,310);
 line(50,310,0,400);
 line(50,0,50,310);
 line(410,310,580,310);
 line(580,310,630,400);
 line(580,0,580,310);
 line(300,100,300,170);
 line(303,100,303,170);
 floodfill(301,101,a);
 line(313,100,313,170);
 line(316,100,316,170);
 floodfill(314,101,a);
 line(326,100,326,170);
 line(329,100,329,170);
 floodfill(327,101,a);
 line(339,100,339,170);
 line(342,100,342,170);
 floodfill(340,101,a);
 line(352,100,352,170);
 line(355,100,355,170);
 floodfill(353,101,a);


  line(310,120,310,170);
 line(305,120,305,170);
 line(305,120,307.5,100);
 line(310,120,307.5,100);
 circle(340,150,18);
 line(330,140,340,145);
 line(343,145,350,140);
 line(335,155,345,155);
 settextstyle(2,0,3);
 outtextxy(333,143,"a");
 outtextxy(345,143,"a");
 }
inline void icon19D1(int a)
{  setcolor(a);
  line(80,400,240,400);
  line(70,425,230,425);
  line(80,400,70,425);
  line(240,400,230,425);
}
inline void icon19D2(int a)
{setcolor(a);
  line(340,400,500,400);
  line(350,425,510,425);
  line(340,400,350,425);
  line(500,400,510,425);
}
inline void icon19D3(int a)
{ setcolor(a);
  line(70,440,230,440);
  line(80,465,240,465);
  line(70,440,80,465);
  line(230,440,240,465);
}
inline void icon19D4(int a)
{ setcolor(a);
  line(350,440,510,440);
  line(340,465,500,465);
  line(350,440,340,465);
  line(510,440,500,465);
}
 void icon19D(int a)
{ icon19D1(a);
  icon19D2(a);
  icon19D3(a);
  icon19D4(a);
  setcolor(a);
  settextstyle(2,0,5);
  setcolor(15);
  outtextxy(100,404,"REQUESTING");
  outtextxy(380,404,"REVILING");
  outtextxy(100,444,"DEMANDING");
  outtextxy(380,444,"THREATINING");
  setcolor(a);
  circle(260,415,10);
  setfillstyle(1,a);
  floodfill(260,415,a);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(258,406,"X");


  setcolor(a);
  circle(320,415,10);
  setfillstyle(1,a);
  floodfill(320,415,a);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(318,406,"O");

  setcolor(a);
  circle(260,452,10);
  setfillstyle(1,a);
  floodfill(260,452,a);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(258,443,"L");

  setcolor(a);
  circle(320,452,10);
  setfillstyle(1,a);
  floodfill(320,452,a);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(318,443,"Y");

}


 void option1(int x)
{ settextstyle(2,0,5);
 if(x==1)
 {icon19D1(15);
  icon19C(15);
  floodfill(101,405,15);
  setcolor(0);
   settextstyle(2,0,5);
  outtextxy(100,404,"REQUESTING");
  setcolor(15);
  outtextxy(380,404,"REVILING");
  icon19D2(15);
  outtextxy(100,444,"DEMANDING");
  icon19D3(15);
  outtextxy(380,444,"THREATINING");
  icon19D4(15);
  setcolor(15);
  icon19D2(15);
  outtextxy(380,404,"REVILING");
  delay(150);
  setcolor(7);
  icon19D2(7);
  outtextxy(380,404,"REVILING");
  delay(150);
  setcolor(8);
  icon19D2(8);
  outtextxy(380,404,"REVILING");
  delay(150);
  setcolor(0);
  icon19D2(0);
  outtextxy(380,404,"REVILING");
  setcolor(15);
  icon19D3(15);
  outtextxy(100,444,"DEMANDING");
  delay(150);
  setcolor(7);
  icon19D3(7);
  outtextxy(100,444,"DEMANDING");
  delay(150);
  setcolor(8);
  icon19D3(8);
  outtextxy(100,444,"DEMANDING");
  delay(150);
  setcolor(0);
  icon19D3(0);
  outtextxy(100,444,"DEMANDING");
  setcolor(15);
 icon19D4(15);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(7);
 icon19D4(7);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(8);
 icon19D4(8);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(0);
 icon19D4(0);
 outtextxy(380,444,"THREATINING");
 delay(150);
 cleardevice();
  icon19C(15);
 icon19D1(7);
 floodfill(101,405,7);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(100,404,"REQUESTING");
  delay(150);
  cleardevice();
   icon19C(15);
 icon19D1(8);
 floodfill(101,405,8);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(100,404,"REQUESTING");
  delay(150);
  cleardevice();
   icon19C(15);
 icon19D1(0);
 floodfill(101,405,0);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(100,404,"REQUESTING");

}

 else
 if(x==2)
{icon19D2(15);
 icon19C(15);
  floodfill(381,405,15);
  setcolor(0);
   settextstyle(2,0,5);
  outtextxy(380,404,"REVILING");
   setcolor(15);
   outtextxy(100,404,"REQUESTING");
  icon19D1(15);
  outtextxy(100,444,"DEMANDING");
  icon19D3(15);
  outtextxy(380,444,"THREATINING");
 icon19D4(15);
 setcolor(15);
 icon19D1(15);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(7);
 icon19D1(7);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(8);
 icon19D1(8);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(0);
 icon19D1(0);
 outtextxy(100,404,"REQUESTING");
 setcolor(15);
  icon19D3(15);
  outtextxy(100,444,"DEMANDING");
  delay(150);
  setcolor(7);
  icon19D3(7);
  outtextxy(100,444,"DEMANDING");
  delay(150);
  setcolor(8);
  icon19D3(8);
  outtextxy(100,444,"DEMANDING");
  delay(150);
  setcolor(0);
  icon19D3(0);
  outtextxy(100,444,"DEMANDING");
  setcolor(15);
 icon19D4(15);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(7);
 icon19D4(7);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(8);
 icon19D4(8);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(0);
 icon19D4(0);
 outtextxy(380,444,"THREATINING");
 delay(150);
 cleardevice();
  icon19C(15);
 icon19D2(7);
 floodfill(381,405,7);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(380,404,"REVILING");
  delay(150);
  cleardevice();
   icon19C(15);
 icon19D2(8);
 floodfill(381,405,8);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(380,404,"REVILING");
  delay(150);
  cleardevice();
   icon19C(15);
 icon19D2(0);
 floodfill(381,405,0);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(380,404,"REVILING");
}
else
 if(x==3)
{icon19D3(15);
 icon19C(15);
  floodfill(101,445,15);
  setcolor(0);
   settextstyle(2,0,5);
  outtextxy(100,444,"DEMANDING");
   setcolor(15);
   outtextxy(100,404,"REQUESTING");
   icon19D1(15);
   outtextxy(380,404,"REVILING");
  icon19D2(15);
  outtextxy(380,444,"THREATINING");
  icon19D4(15);
 setcolor(15);
 icon19D1(15);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(7);
 icon19D1(7);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(8);
 icon19D1(8);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(0);
 icon19D1(0);
 outtextxy(100,404,"REQUESTING");
   setcolor(15);
  icon19D2(15);
  outtextxy(380,404,"REVILING");
  delay(150);
  setcolor(7);
  icon19D2(7);
  outtextxy(380,404,"REVILING");
  delay(150);
  setcolor(8);
  icon19D2(8);
  outtextxy(380,404,"REVILING");
  delay(150);
  setcolor(0);
  icon19D2(0);
  outtextxy(380,404,"REVILING");
   setcolor(15);
 icon19D4(15);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(7);
 icon19D4(7);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(8);
 icon19D4(8);
 outtextxy(380,444,"THREATINING");
 delay(150);
 setcolor(0);
 icon19D4(0);
 outtextxy(380,444,"THREATINING");
 delay(150);
 cleardevice();
  icon19C(15);
 icon19D3(7);
 floodfill(101,445,7);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(100,444,"DEMANDING");
  delay(150);
  cleardevice();
   icon19C(15);
 icon19D3(8);
 floodfill(101,445,8);
 setcolor(0);
 settextstyle(2,0,5);
  outtextxy(100,444,"DEMANDING");
  delay(150);
  cleardevice();
   icon19C(15);
 icon19D3(0);
 floodfill(101,445,0);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(100,444,"DEMANDING");
}
else
if(x==4)
{icon19D4(15);
 icon19C(15);
  floodfill(381,445,15);
   setcolor(0);
    settextstyle(2,0,5);
   outtextxy(380,444,"THREATINING");
   setcolor(15);
   outtextxy(100,404,"REQUESTING");
   icon19D1(15);
   outtextxy(380,404,"REVILING");
   icon19D2(15);
   outtextxy(100,444,"DEMANDING");
   icon19D3(15);
  setcolor(15);
 icon19D1(15);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(7);
 icon19D1(7);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(8);
 icon19D1(8);
 outtextxy(100,404,"REQUESTING");
 delay(150);
 setcolor(0);
 icon19D1(0);
 outtextxy(100,404,"REQUESTING");
   setcolor(15);
  icon19D2(15);
  outtextxy(380,404,"REVILING");
  delay(150);
  setcolor(7);
  icon19D2(7);
    outtextxy(380,404,"REVILING");
   delay(150);
   setcolor(8);
       icon19D2(8);
 outtextxy(380,404,"REVILING");
  delay(150);
 setcolor(0);
   icon19D2(0);
  outtextxy(380,404,"REVILING");
setcolor(15);
     icon19D3(15);
  outtextxy(100,444,"DEMANDING");
  delay(150);
 setcolor(7);
    icon19D3(7);
  outtextxy(100,444,"DEMANDING");
  delay(150);
  setcolor(8);
 icon19D3(8);
    outtextxy(100,444,"DEMANDING");
 delay(150);
  setcolor(0);
  icon19D3(0);
     outtextxy(100,444,"DEMANDING");
  delay(150);
 cleardevice();
  icon19C(15);
    icon19D4(7);
 floodfill(381,445,7);
   setcolor(0);
  settextstyle(2,0,5);
  outtextxy(380,444,"THREATINING");
   delay(150);
cleardevice();
  icon19C(15);
   icon19D4(8);
 floodfill(381,445,8);
     setcolor(0);
  settextstyle(2,0,5);
  outtextxy(380,444,"THREATINING");
  delay(150);
  cleardevice();
   icon19C(15);
     icon19D4(0);
 floodfill(381,445,0);
 setcolor(0);
 settextstyle(2,0,5);
 outtextxy(380,444,"THREATINING");

}
}

inline  void dia(char *x,int y)
{for(int i=0;x[i]!='\0';i++)
   {delay(y);
    cout<<x[i];
   }
}


 void CL1(int a,int b)
{setcolor(a);
 rectangle(420,10,570,100);
 settextstyle(1,0,5);
 outtextxy(445,7,"*");
 settextstyle(1,0,3);
 outtextxy(470,13,"CLUE");
 settextstyle(2,0,5);
 outtextxy(425,60,">Name: Humaend Jail");
 if(b==1)
 delay(150);
}
 void CL2(int a,int b)
{setcolor(a);
 rectangle(420,10,570,100);
 settextstyle(1,0,5);
 outtextxy(445,7,"*");
 settextstyle(1,0,3);
 outtextxy(470,13,"CLUE");
 settextstyle(2,0,5);
 outtextxy(425,60,">Purpose: To kill");
 outtextxy(505,80,"you.");
 if(b==1)
 delay(150);
}
inline void A()
{cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t";}
void icon21(int a)
{setcolor(a);
 line(335,155,340,160);
 line(346,155,340,160);
}

inline closing()
{cleardevice();

 delay(1200);
 exit(0);
}



geartool()
{
int ex=0;
int imp;
}
int ex;
void exc(int imp)
{
 ex=ex+imp;
 if(ex<5)
 {setcolor(15);
 settextstyle(1,0,3);
 switch(ex)
  {case 1:

	  outtextxy(345,100,"!");
	  break;
   case 2:
	  outtextxy(345,100,"!");
	  outtextxy(333,100,"!");
	  break;
   case 3:outtextxy(345,100,"!");
	  outtextxy(333,100,"!");
	  outtextxy(357,100,"!");
	  break;
   case 4:outtextxy(345,100,"!");
	  outtextxy(333,100,"!");
	  outtextxy(357,100,"!");
	  outtextxy(320,100,"!");
	  break;
   }}
   else if(ex>=5)
	closing();
}
 void icon20(int a)
{ icon19C(a);

  setcolor(a);
  settextstyle(2,0,4);
  outtextxy(410,465,"PRESS ANY KEY TO CONTINUE...");
 settextstyle(2,0,4);
 outtextxy(425,120,"His anger will be show by this sign.");
 outtextxy(425,140,"Try to keep it below five,");
 outtextxy(425,160,"or you will die...");
 outtextxy(70,60,"Once you start the chapter ");
 outtextxy(70,80,"you cannot get back to menu, ");
 outtextxy(70,100,"until unless you complete it ");
 outtextxy(70,120,"or get die.");
 outtextxy(210,320,"Select any one option");
 outtextxy(190,340,"by pressing its respective key");
 settextstyle(3,0,4);
 outtextxy(220,0,"Learning Guide");

 settextstyle(1,0,3);
 outtextxy(345,100,"!");
 line(355,115,380,115);
 line(365,120,355,115);
 line(365,110,355,115);
 line(380,115,380,140);
 line(380,140,415,140);
 line(290,370,290,450);

 line(276,415,290,415);
 line(304,415,290,415);
 line(276,450,290,450);
 line(304,450,290,450);

 line(280,410,276,415);
 line(280,420,276,415);
 line(280,445,276,450);
 line(280,455,276,450);
 line(300,410,304,415);
 line(300,420,304,415);
 line(300,445,304,450);
 line(300,455,304,450);
 icon19D1(a);
 icon19D2(a);
 icon19D3(a);
 icon19D4(a);
  setcolor(a);
  circle(260,415,10);
  setfillstyle(1,a);
  floodfill(260,415,a);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(258,406,"X");


  setcolor(a);
  circle(320,415,10);
  setfillstyle(1,a);
  floodfill(320,415,a);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(318,406,"O");

  setcolor(a);
  circle(260,452,10);
  setfillstyle(1,a);
  floodfill(260,452,a);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(258,443,"L");

  setcolor(a);
  circle(320,452,10);
  setfillstyle(1,a);
  floodfill(320,452,a);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(318,443,"Y");
}

void scs(char ascs[19],int scs1,int scs2,int scs3,int scs4,int upsc)
{int iswico=1;
 for(int pl=1;ascs[pl]!='\0';pl++)
 iswico++;
 if(iswico>14)
 {scs3=15;
  for(int fswico=16;fswico<=19;fswico++)
  ascs[fswico]='.';
 }
 settextstyle(scs1,0,scs2);
 delay(150);
 setcolor(8);
 outtextxy(scs3,scs4,ascs);
 delay(150);
 setcolor(7);
 outtextxy(scs3,scs4,ascs);
 delay(150);
 setcolor(15);
 outtextxy(scs3,scs4,ascs);
 if (upsc==1)
 {delay(600);
 settextstyle(scs1,0,scs2);
 delay(150);
 setcolor(7);
 outtextxy(scs3,scs4,ascs);
 delay(150);
 setcolor(8);
 outtextxy(scs3,scs4,ascs);
 delay(150);
 setcolor(0);
 outtextxy(scs3,scs4,ascs);
 }
 }
void pb()
{char *th;
 setcolor(15);
 rectangle(10,5,190,120);
 settextstyle(8,0,2);
 outtextxy(50,10,"WELCOME");

 fstream fal;
 fal.open("TTM2.txt",ios::in);
 while(!fal.eof())
 fal>>th;
 fal.close();

 settextstyle(2,0,6);
 outtextxy(50,60,th);
 settextstyle(2,0,4);
 outtextxy(30,95,"PRESS Q TO GO TO SETTING");
}
void pu()
{exit(0);
 exit(1);
}
};
void engine1();
void engine2();




geartool g;

void main()
{clrscr();
 char ad[4];
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");
 int x,y,i;
 x=getmaxx()/1;
 y=getmaxy()/1;
 fstream tyco;
  tyco.open("TTM3.txt",ios::in|ios::out);
  tyco>>ad;
  tyco.close();
  if(ad[0]=='O'&&ad[1]=='N')
  engine1();
  engine2();

 restorecrtmode();
 closegraph();
}




 void engine1()
{ char *ftr;
 int x,y,i;
 delay(1200);
 setcolor(8);
 g.icon1(8);
 delay(150);
 g.icon1(7);
 delay(150);
 g.icon1(15);
 delay(3800);
 g.icon1(7);
 delay(150);
 g.icon1(8);
 delay(150);
 cleardevice();
 delay(1000);
 g.icon2(8);
 delay(150);
 g.icon2(7);
 delay(150);
 g.icon2(15);
 delay(3800);
 g.icon2(7);
 delay(150);
 g.icon2(8);
 delay(150);
 cleardevice();
 delay(1000);
 g.icon3(8);
 delay(150);
 g.icon3(7);
 delay(150);
 g.icon3(15);
 delay(3800);
 g.icon3(7);
 delay(150);
 g.icon3(8);
 delay(150);
 cleardevice();

 delay(1000);
 g.icon5(8);
 delay(150);
 g.icon5(7);
 delay(150);
 g.icon5(15);

 for(i=0;i<3;i++)
 {delay(40);
  g.icon6(15);
  delay(20);
  g.icon6(0);
 }
 g.icon6(15);
 setcolor(0);
 line(310,243,485,243);
 line(310,246,485,246);
 line(310,249,485,249);
 delay(70);

  for(i=0;i<3;i++)
 {delay(40);
  g.icon6(15);
  delay(20);
  g.icon6(0);
 }
 g.icon6(15);
 delay(2500);
 g.icon6(7);
 g.icon5(7);
 delay(150);
 g.icon6(8);
 g.icon5(8);
 delay(150);
 cleardevice();
  getch();
 g.icon7(8);
 delay(150);
 g.icon7(7);
 delay(150);
 g.icon7(15);
 delay(2500);
 g.icon8(8);
 delay(150);
 g.icon8(7);
 delay(150);
 g.icon8(15);
 delay(2200);





 g.icon7(7);
 g.icon8(7);
 delay(150);
 g.icon7(8);
 g.icon8(8);
 delay(150);
 clrscr();
 cleardevice();

   char *ae,*gb;
   ae="NO";
  cleardevice();
  fstream picup;
  picup.open("TTM1.txt",ios::in|ios::out);
  while(!picup.eof())
  picup>>ftr;
  picup.close();

  if(ftr[0]=='Y'&&ftr[1]=='E'&&ftr[2]=='S')
  {g.icon7(8);
 g.icon8(8);
 setcolor(15);
 settextstyle(2,0,6);
 outtextxy(60,210,"PLEASE ENTER YOUR NAME...");

 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t";
 rectangle(60,230,600,260);
 gets(gb);
 fstream pp;
 pp.open("TTM2.txt",ios::out);
 pp<<gb;
 pp.close();
}
fstream picup1;
  picup1.open("TTM1.txt",ios::in|ios::out);
  picup1<<ae;
  picup1.close();
  clrscr();
 cleardevice();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");
 x=getmaxx()/2;
 y=getmaxy()/2;

  g.icon10(4);
  cleardevice();
}




void engine2()
{int i,upq;
 char ad[3],*he,*bp;
 delay(1200);


 screen1:
 g.icon11(8);
 g.icon12(8);
 delay(150);
 g.icon11(7);
 g.icon12(7);
 delay(150);
 g.icon11(15);
 g.icon12(15);

  delay(1000);
  g.icon15(8);
  delay(100);
  g.icon15(7);
  delay(100);
  g.icon15(15);
  delay(500);
  setcolor(8);
  rectangle(10,5,190,120);
  setcolor(7);
  rectangle(10,5,190,120);
  setcolor(15);
  rectangle(10,5,190,120);
  char *h="WELCOME";
  char *ui;

 g.scs(h,8,2,50,50,1);
 delay(200);
 settextstyle(8,0,2);
 setcolor(15);
 outtextxy(50,10,"WELCOME");
 fstream skss;
 skss.open("TTM2.txt",ios::in|ios::out);
 while(!skss.eof())
 skss>>ui;
 skss.close();
 g.scs(ui,2,6,50,60,0);
 settextstyle(2,0,4);
 outtextxy(30,95,"PRESS Q TO GO TO SETTING");
 screen1A:
 for(i=1;i>0;i++)
 {g.icon11(15);
  g.icon12(15);
  g.pb();
    switch(getch())
    {case 's':sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
     cleardevice();
     delay(150);
      clrscr();
      cleardevice();
      int x,y;
     int gdriver=DETECT,gmode;
     initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");
     x=getmaxx()/2;
     y=getmaxy()/2;

    g.icon10(2);

    cleardevice();
    goto screen2;
 case 'q':cleardevice();
 for(i=0;i<3;i++)
 {if(i==0)
 { setcolor(8);upq=8;}
  if(i==1)
  {setcolor(7);upq=7;}
  if(i==2)
  {setcolor(15);upq=15;}
 rectangle(0,80,640,475);
 rectangle(150,85,639,470);
 settextstyle(3,0,5);
 outtextxy(10,20,"SETTINGS");
 rectangle(5,140,145,230);
 floodfill(6,141,upq);
 setcolor(0);
 settextstyle(2,0,8);
 outtextxy(20,170,"BASICS");
  setcolor(upq);
  rectangle(155,135,540,160);
  floodfill(156,136,upq);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(160,140,"WANT STARTING STUFF ON EACH START         :");
  setcolor(upq);
  settextstyle(2,0,4);
  outtextxy(160,450,"C TO CHANGE, S TO SAVE, OR B TO BACK...");
  setcolor(0);
  settextstyle(2,0,5);
  delay(150);
  }
  fstream tyco;
  tyco.open("TTM3.txt",ios::in|ios::out);
  tyco>>ad;
  tyco.close();
  if(ad[0]=='O'&&ad[1]=='N')
 {outtextxy(510,140,ad);
  bp="ON";}
  else if(ad[0]=='O'&&ad[1]=='F'&&ad[2]=='F')
	  {outtextxy(510,140,ad);
	   bp="OFF";}

  GIF:
  switch(getch())
  {case 'c':if(bp[0]=='O'&&bp[1]=='N')
	     {setcolor(15);
	      outtextxy(510,140,"ON");
	      setcolor(0);
	      outtextxy(510,140,"OFF");
	      bp="OFF";
	      }
	     else if(bp[0]=='O'&&bp[1]=='F'&&bp[2]=='F')
	     {setcolor(15);
	      outtextxy(510,140,"OFF");
	      setcolor(0);
	      outtextxy(510,140,"ON");
	      bp="ON";
	      }
	      goto GIF;
   case 's':if(bp[0]=='O'&&bp[1]=='N')
	     {fstream tyco;
	      tyco.open("TTM3.txt",ios::out);
	      tyco<<bp;
	      tyco.close();
	      }
	     else if(bp[0]=='O'&&bp[1]=='F'&&bp[2]=='F')
	     {fstream tyco;
	      tyco.open("TTM3.txt",ios::out);
	      tyco<<bp;
	      tyco.close();
	      }
	      goto GIF;
   case 'b':  cleardevice();
	      goto screen1;
   default:goto GIF;
   }

 default:
 sound(2*50);
 delay(100);
 nosound();
 cleardevice();
 g.icon11(15);
 g.icon12A(8);
 g.pb();
 delay(150);
 g.icon12A(7);
 delay(150);
 g.icon12A(15);
 }

   switch(getch())
   {case 's':sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
      delay(150);
      g.icon18(8);
      delay(150);
      g.icon18(7);
      delay(150);
      g.icon18(15);
      delay(2200);
      g.icon18(7);
      delay(150);
      g.icon18(8);
      delay(150);
      cleardevice();
      goto screen1A;
 case 'q':cleardevice();
 for(i=0;i<3;i++)
 {if(i==0)
 { setcolor(8);upq=8;}
  if(i==1)
  {setcolor(7);upq=7;}
  if(i==2)
  {setcolor(15);upq=15;}
 rectangle(0,80,640,475);
 rectangle(150,85,639,470);
 settextstyle(3,0,5);
 outtextxy(10,20,"SETTINGS");
 rectangle(5,140,145,230);
 floodfill(6,141,upq);
 setcolor(0);
 settextstyle(2,0,8);
 outtextxy(20,170,"BASICS");
  setcolor(upq);
  rectangle(155,135,540,160);
  floodfill(156,136,upq);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(160,140,"WANT STARTING STUFF ON EACH START         :");
  setcolor(upq);
  settextstyle(2,0,4);
  outtextxy(160,450,"C TO CHANGE, S TO SAVE, OR B TO BACK...");
  setcolor(0);
  settextstyle(2,0,5);
  delay(150);
  }
  fstream tyco;
  tyco.open("TTM3.txt",ios::in|ios::out);
  tyco>>ad;
  tyco.close();
  if(ad[0]=='O'&&ad[1]=='N')
 {outtextxy(510,140,ad);
  bp="ON";}
  else if(ad[0]=='O'&&ad[1]=='F'&&ad[2]=='F')
	  {outtextxy(510,140,ad);
	   bp="OFF";}

  GIF2:
  switch(getch())
  {case 'c':if(bp[0]=='O'&&bp[1]=='N')
	     {setcolor(15);
	      outtextxy(510,140,"ON");
	      setcolor(0);
	      outtextxy(510,140,"OFF");
	      bp="OFF";
	      }
	     else if(bp[0]=='O'&&bp[1]=='F'&&bp[2]=='F')
	     {setcolor(15);
	      outtextxy(510,140,"OFF");
	      setcolor(0);
	      outtextxy(510,140,"ON");
	      bp="ON";
	      }
	      goto GIF2;
   case 's':if(bp[0]=='O'&&bp[1]=='N')
	     {fstream tyco;
	      tyco.open("TTM3.txt",ios::out);
	      tyco<<bp;
	      tyco.close();
	      }
	     else if(bp[0]=='O'&&bp[1]=='F'&&bp[2]=='F')
	     {fstream tyco;
	      tyco.open("TTM3.txt",ios::out);
	      tyco<<bp;
	      tyco.close();
	      }
	      goto GIF2;
   case 'b':  cleardevice();
	      goto screen1;
   default:goto GIF2;
   }

 default:
 sound(2*50);
 delay(100);
 nosound();
 cleardevice();
 g.icon11(15);
 g.icon12B(8);
 g.pb();
 delay(150);
 g.icon12B(7);
 delay(150);
 g.icon12B(15);}

   switch(getch())
   {case 's':sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
     delay(150);
     clrscr();
     cleardevice();
     int x,y;
     int gdriver=DETECT,gmode;
     initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");
     x=getmaxx()/2;
     y=getmaxy()/2;

     g.icon10(2);

     cleardevice();
     delay(150);
     g.icon7(8);
     g.icon8(8);
     delay(150);
     g.icon7(7);
     g.icon8(7);
     delay(150);
     g.icon7(15);
     g.icon8(15);
     delay(2800);
     cleardevice();

     g.credits();


     g.icon16(8);
     delay(150);
     g.icon16(7);
     delay(150);
     g.icon16(15);
     delay(3000);
     g.icon16(7);
     delay(150);
     g.icon16(8);
     delay(150);
     cleardevice();

     goto screen1;
 case 'q':cleardevice();
 for(i=0;i<3;i++)
 {if(i==0)
 { setcolor(8);upq=8;}
  if(i==1)
  {setcolor(7);upq=7;}
  if(i==2)
  {setcolor(15);upq=15;}
 rectangle(0,80,640,475);
 rectangle(150,85,639,470);
 settextstyle(3,0,5);
 outtextxy(10,20,"SETTINGS");
 rectangle(5,140,145,230);
 floodfill(6,141,upq);
 setcolor(0);
 settextstyle(2,0,8);
 outtextxy(20,170,"BASICS");
  setcolor(upq);
  rectangle(155,135,540,160);
  floodfill(156,136,upq);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(160,140,"WANT STARTING STUFF ON EACH START         :");
  setcolor(upq);
  settextstyle(2,0,4);
  outtextxy(160,450,"C TO CHANGE, S TO SAVE, OR B TO BACK...");
  setcolor(0);
  settextstyle(2,0,5);
  delay(150);
  }
  fstream tyco;
  tyco.open("TTM3.txt",ios::in|ios::out);
  tyco>>ad;
  tyco.close();
  if(ad[0]=='O'&&ad[1]=='N')
 {outtextxy(510,140,ad);
  bp="ON";}
  else if(ad[0]=='O'&&ad[1]=='F'&&ad[2]=='F')
	  {outtextxy(510,140,ad);
	   bp="OFF";}

  GIF3:
  switch(getch())
  {case 'c':if(bp[0]=='O'&&bp[1]=='N')
	     {setcolor(15);
	      outtextxy(510,140,"ON");
	      setcolor(0);
	      outtextxy(510,140,"OFF");
	      bp="OFF";
	      }
	     else if(bp[0]=='O'&&bp[1]=='F'&&bp[2]=='F')
	     {setcolor(15);
	      outtextxy(510,140,"OFF");
	      setcolor(0);
	      outtextxy(510,140,"ON");
	      bp="ON";
	      }
	      goto GIF3;
   case 's':if(bp[0]=='O'&&bp[1]=='N')
	     {fstream tyco;
	      tyco.open("TTM3.txt",ios::out);
	      tyco<<bp;
	      tyco.close();
	      }
	     else if(bp[0]=='O'&&bp[1]=='F'&&bp[2]=='F')
	     {fstream tyco;
	      tyco.open("TTM3.txt",ios::out);
	      tyco<<bp;
	      tyco.close();
	      }
	      goto GIF3;
   case 'b':  cleardevice();
	      goto screen1;
   default:goto GIF3;
   }

 default:
 sound(2*50);
 delay(100);
 nosound();
 cleardevice();
 g.icon11(15);
 g.icon12C(8);
 g.pb();
 delay(150);
 g.icon12C(7);
 delay(150);
 g.icon12C(15);}
 switch(getch())
   {case 's':sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
     delay(1200);
     cleardevice();
     delay(150);
   // exit(0);
  g.pu();
 case 'q':cleardevice();
 for(i=0;i<3;i++)
 {if(i==0)
 { setcolor(8);upq=8;}
  if(i==1)
  {setcolor(7);upq=7;}
  if(i==2)
  {setcolor(15);upq=15;}
 rectangle(0,80,640,475);
 rectangle(150,85,639,470);
 settextstyle(3,0,5);
 outtextxy(10,20,"SETTINGS");
 rectangle(5,140,145,230);
 floodfill(6,141,upq);
 setcolor(0);
 settextstyle(2,0,8);
 outtextxy(20,170,"BASICS");
  setcolor(upq);
  rectangle(155,135,540,160);
  floodfill(156,136,upq);
  setcolor(0);
  settextstyle(2,0,5);
  outtextxy(160,140,"WANT STARTING STUFF ON EACH START         :");
  setcolor(upq);
  settextstyle(2,0,4);
  outtextxy(160,450,"C TO CHANGE, S TO SAVE, OR B TO BACK...");
  setcolor(0);
  settextstyle(2,0,5);
  delay(150);
  }
  fstream tyco;
  tyco.open("TTM3.txt",ios::in|ios::out);
  tyco>>ad;
  tyco.close();
  if(ad[0]=='O'&&ad[1]=='N')
 {outtextxy(510,140,ad);
  bp="ON";}
  else if(ad[0]=='O'&&ad[1]=='F'&&ad[2]=='F')
	  {outtextxy(510,140,ad);
	   bp="OFF";}

  GIF4:
  switch(getch())
  {case 'c':if(bp[0]=='O'&&bp[1]=='N')
	     {setcolor(15);
	      outtextxy(510,140,"ON");
	      setcolor(0);
	      outtextxy(510,140,"OFF");
	      bp="OFF";
	      }
	     else if(bp[0]=='O'&&bp[1]=='F'&&bp[2]=='F')
	     {setcolor(15);
	      outtextxy(510,140,"OFF");
	      setcolor(0);
	      outtextxy(510,140,"ON");
	      bp="ON";
	      }
	      goto GIF4;
   case 's':if(bp[0]=='O'&&bp[1]=='N')
	     {fstream tyco;
	      tyco.open("TTM3.txt",ios::out);
	      tyco<<bp;
	      tyco.close();
	      }
	     else if(bp[0]=='O'&&bp[1]=='F'&&bp[2]=='F')
	     {fstream tyco;
	      tyco.open("TTM3.txt",ios::out);
	      tyco<<bp;
	      tyco.close();
	      }
	      goto GIF4;
   case 'b':  cleardevice();
	      goto screen1;
   default:goto GIF4;
   }

 default:
 sound(2*50);
 delay(100);
 nosound();
 g.pb();
 cleardevice();
 }}






 screen2:
 g.icon14(8);
 delay(150);
 g.icon14(7);
 delay(150);
 g.icon14(15);

 delay(1200);
  g.icon15(8);
  delay(100);
  g.icon15(7);
  delay(100);
  g.icon15(15);

 screen2A:
 for(i=1;i>0;i++)
 {g.icon14(15);
   if(getch()=='s')
    {sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
     cleardevice();
     delay(150);
     clrscr();
     cleardevice();
     int x,y;
     int gdriver=DETECT,gmode;
     initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");    
     x=getmaxx()/2;
     y=getmaxy()/2;

      g.icon10(10);
      cleardevice();
      delay(2000);

      g.icon4(8);
      delay(150);
      g.icon4(7);
      delay(150);
      g.icon4(15);
      delay(5200);                       
      g.icon4(7);
      delay(150);
      g.icon4(8);
      delay(150);
      cleardevice();

     delay(2200);

     g.icon17(8);
     delay(150);
     g.icon17(7);
     delay(150);
     g.icon17(15);
     delay(3200);      
     g.icon17(7);
     delay(150);
     g.icon17(8);
     delay(150);
     cleardevice();

     delay(2200);
     setcolor(15);
     settextstyle(8,0,1);
     outtextxy(0,5,"DEVELOP BY :");
     settextstyle(6,0,1);
     outtextxy(0,35,"BHworld creations");
     settextstyle(8,0,1);
     outtextxy(470,350,"GRAPHICS BY: ");
     settextstyle(6,0,1);
     outtextxy(470,370,"TGS graphics encoder");

     g.thgt1(8);
     delay(150);
     g.thgt1(7);
     delay(150);
     g.thgt1(15);
     delay(5000);
     g.thgt1(7);
     delay(150);
     g.thgt1(8);
     delay(150);
     cleardevice();

     setcolor(15);
     settextstyle(8,0,1);
     outtextxy(0,5,"WRITTEN BY :");
     settextstyle(6,0,1);
     outtextxy(0,35,"Bipul Harsh");

     settextstyle(6,0,1);
     outtextxy(25,70,"AND");
     line(0,85,20,85);
     line(60,85,80,85);
     settextstyle(6,0,1);
     outtextxy(0,105,"Jay Mahoto");
     settextstyle(8,0,1);
     outtextxy(470,330,"SOUND");
     settextstyle(8,0,1);
     outtextxy(470,360,"&");
     settextstyle(8,0,1);
     outtextxy(470,385,"ANIMATIONS BY :");
     settextstyle(6,0,1);
     outtextxy(470,420,"Bipul Harsh");

     g.thgt2(8);
     delay(150);
     g.thgt2(7);
     delay(150);
     g.thgt2(15);
     delay(5000);
     g.thgt2(7);
     delay(150);
     g.thgt2(8);
     delay(150);
     cleardevice();
     delay(1700);
      g.icon20(8);
  delay(150);
  g.icon20(7);
  delay(150);
  g.icon20(15);
  getch();
  g.icon20(7);
  delay(150);
  g.icon20(8);
  delay(150);
  g.icon20(0);
  cleardevice();

     delay(1200);
 g.icon19(8);
 delay(150);
 g.icon19(7);
 delay(150);
 g.icon19(15);
 delay(150);
 cleardevice();
 g.icon19B();
 delay(150);
 cleardevice();
 g.icon19C(15);
  delay(140);
  settextstyle(3,0,1);
  outtextxy(220,390,"Hey...");

  outtextxy(220,420,"What happen?");

  delay(1300);
  cleardevice();

  g.icon19C(15);
  g.icon19D(15);


  g.option1(0);
   cleardevice();
 g.icon19C(15);
  g.icon19D(15);
  cleardevice();
    g.icon19C(15);
    g.icon19D(15);
    op1:
   switch(getch())
   {

    case 'x':cleardevice();
	     g.option1(1);
	     delay(1000);
	     char *SP1,*SP2,*SP3,*SP4,*SP5,*SP6,*SP7;
	     SP1=" Sir,";
	     SP2=" can you please tell me where I am?";
	     SP3="\n\t\tWhat is this place?";
	     SP4="You are in Humaend jail,";
	     SP5="and very soon";
	     SP6="\n\t\tgoing to die";
	     SP7=" like these other human beings you fool!\n\t\t(laughing)";
	     g.icon19C(15);
	     g.A();
	     cout<<"   YOU:";   
	     g.dia(SP1,90);
	     delay(350);
	     g.dia(SP2,50);
	     delay(350);
	     g.dia(SP3,50);
	     delay(500);
	     g.exc(0);
	     cout<<"\n\t JAILOR:";    
	     g.icon21(15);
	     g.dia(SP4,50);
	     g.dia(SP5,50);
	     g.CL1(8,1);
	     g.CL1(7,1);
	     g.CL1(15,1);
	     clrscr();
	     cleardevice();
	     g.icon19C(15);
	     g.icon21(15);
	     g.CL1(15,0);
	     g.A();
	     cout<<"\tWhat is this place?"<<"\n\t JAILOR:"<<SP4<<SP5;
	     delay(500);
	     g.CL1(7,1);
	     g.CL1(8,1);
	     g.CL1(0,0);
	     g.dia(SP6,80);
	     g.CL2(8,1);
	     g.CL2(7,1);
	     g.CL2(15,0);
	     g.dia(SP7,80);
	     g.CL2(7,1);
	     g.CL2(8,1);
	     g.CL2(0,0);

	     break;
    case 'o':cleardevice();
	     g.option1(2);
	     delay(1000);
	     char *SP8,*SP9,*SP10,*SP11,*SP12,*SP13,*SP14,*SP15,*SP16,*SP17;
	     SP8=" Who ever you are, tell me where I am?";
	     SP9="\n\t\tWhy I am locked in this jail like room? ";
	     SP10="\n\t\tTell me you monster?";
	     SP11=" Shut up you fool!";
	     SP12=" and lower your voice,";
	     SP13="\n\t\totherwise next time I will not let you to speak anything.";
	     SP14="\n\t\tAnd for you kind information, ";
	     SP15="you are in Humaend jail";
	     SP16="\n\t\tand very soon you will get to know yourself";
	     SP17="\n\t\twhat's going to be happen with you.";
	     g.icon19C(15);
	     g.A();
   cout<<"   YOU:";   

 g.dia(SP8,50);
 g.exc(1);
 delay(350);

 g.dia(SP9,70);
 delay(350);

 g.dia(SP10,70);
 g.exc(1);
 delay(500);
 g.icon21(15);
 g.exc(0);
 cout<<"\n\tJAILOR:";     
 g.dia(SP11,50);
 delay(500);
 g.dia(SP12,70);
 clrscr();
 cleardevice();
 g.icon19C(15);
 g.icon21(15);
 g.A();
 g.exc(0);
 cout<<"\t Why I am locked in this jail like room?"<<SP10;

 cout<<"\n\t JAILOR:"<<SP11<<SP12;
 delay(300);
 g.dia(SP13,60);
 clrscr();
 cleardevice();
 g.icon19C(15);
 g.icon21(15);
 g.A();
 g.exc(0);
 cout<<"\t Tell me you monster?"<<"\n\t JAILOR:"<<SP11<<SP12<<SP13;
 delay(500);
 g.dia(SP14,50);
 delay(300);
 g.dia(SP15,50);
 g.CL1(8,1);
 g.CL1(7,1);
 g.CL1(15,1);
 clrscr();
 cleardevice();
 g.icon19C(15);
 g.icon21(15);
 g.A();
 g.exc(0);
 g.CL1(15,0);
 cout<<"\t JAILOR:"<<SP11<<SP12<<SP13<<SP14<<SP15;
 delay(500);
 g.dia(SP16,50);
 g.CL1(7,1);
 g.CL1(8,1);
 g.CL1(0,0);
 delay(500);
 clrscr();
 cleardevice();
 g.icon19C(15);
 g.icon21(15);
 g.A();
 g.exc(0);
 cout<<SP13<<SP14<<SP15<<SP16;
 g.dia(SP17,50);

	     break;
    case 'l':cleardevice();
	     g.option1(3);
	     delay(1000);
	     char *SP18,*SP19,*SP20,*SP21,*SP22,*SP23,*SP24,*SP25,*SP26,*SP27;
	     SP18=" What's going on? What is this place?";
	     SP19="\n\t\tWhy I have been put in this locked room?";
 SP20="\n\t\tYou have to tell me?";
 SP21=" You just shut up and don't annoy me.";
 SP22=" You can't just say like that,";
 SP23="I want to know...";
 SP24=" Allright! ";
 SP25="you are in humaend jail ";
 SP26="and going to die.";
 SP27="\t\t\t\tGot it!(laughing)";
 g.icon19C(15);
 g.A();
 cout<<"   YOU:";   

 g.dia(SP18,50);
 delay(500);

 g.dia(SP19,50);
 delay(400);

 g.dia(SP20,50);
 g.exc(1);
 delay(1200);
  clrscr();
 cleardevice();
 g.icon19C(15);
 g.icon21(15);
 g.A();
 g.exc(0);
 cout<<"\tWhy I have been put in this locked room?"<<SP20;
 cout<<"\n\tJAILOR:";    
 g.dia(SP21,50);
 delay(500);
 clrscr();
 cleardevice();
 g.icon19C(15);
 g.A();
 g.exc(0);
 cout<<"\tYou have to tell me?"<<"\n\tJAILOR:"<<SP21;
 cout<<"\n\t   YOU:";
 g.dia(SP22,60);
 delay(500);
 g.dia(SP23,40);
 delay(800);
 clrscr();
 cleardevice();
 g.icon19C(15);
 g.icon21(15);
 g.A();
 g.exc(0);
 cout<<"\tJAILOR:"<<SP21<<"\n\t   YOU:"<<SP22<<SP23;
 cout<<"\n\tJAILOR:";
 g.dia(SP24,40);
 delay(350);
 g.dia(SP25,60);
 g.CL1(8,1);
 g.CL1(7,1);
 g.CL1(15,1);
 delay(400);
 g.CL1(7,1);
 g.CL1(8,1);
 g.CL1(0,1);
 g.dia(SP26,60);
 g.CL2(8,1);
 g.CL2(7,1);
 g.CL2(15,1);
 g.dia(SP27,40);
 g.CL2(7,1);
 g.CL2(8,1);
 g.CL2(0,0);

	     break;
    case 'y':cleardevice();
	     g.option1(4);
	     delay(1000);
	     break;
    default: goto op1;
  }
			 

     delay(2000);
     cleardevice();
     goto screen2;
    }
 else
 sound(2*50);
 delay(100);
 nosound();
 cleardevice();
 g.icon14A(8);
 delay(150);
 g.icon14A(7);
 delay(150);
 g.icon14A(15);
 if(getch()=='s')
   {sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
      delay(150);
      g.icon18(8);
      delay(150);
      g.icon18(7);
      delay(150);
      g.icon18(15);
      delay(2200);
      g.icon18(7);
      delay(150);
      g.icon18(8);
      delay(150);
      cleardevice();
      goto screen2A;
   }
 else
 sound(2*50);
 delay(100);
 nosound();
 cleardevice();
 g.icon14B(8);
 delay(150);
 g.icon14B(7);
 delay(150);
 g.icon14B(15);
 if(getch()=='s')
   {sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
     delay(150);
      g.icon18(8);
      delay(150);
      g.icon18(7);
      delay(150);
      g.icon18(15);
      delay(2200);
      g.icon18(7);
      delay(150);
      g.icon18(8);
      delay(150);
      cleardevice();
      goto screen2A;
    }
 else
 sound(2*50);
 delay(100);
 nosound();
 cleardevice();
 g.icon14C(8);
 delay(150);
 g.icon14C(7);
 delay(150);
 g.icon14C(15);
 if(getch()=='s')
   {sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
      delay(150);
      g.icon18(8);
      delay(150);
      g.icon18(7);
      delay(150);
      g.icon18(15);
      delay(2200);
      g.icon18(7);
      delay(150);
      g.icon18(8);
      delay(150);
      cleardevice();
      goto screen2A;
   }
 else
 sound(2*50);
 delay(100);
 nosound();
 cleardevice();
 g.icon14D(8);
 delay(150);
 g.icon14D(7);
 delay(150);
 g.icon14D(15);
 if(getch()=='s')
   {sound(4*220);
     delay(50);
     nosound();
     sound(1*220);
     delay(80);
     nosound();
     delay(150);
     clrscr();
     cleardevice();                               
      int x,y;
     int gdriver=DETECT,gmode;
     initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");
     x=getmaxx()/2;
     y=getmaxy()/2;

    g.icon10(2);

    cleardevice();

    delay(150);
    goto screen1;
   }



 else
 sound(2*50);
 delay(100);
 nosound();
 cleardevice();
}


}