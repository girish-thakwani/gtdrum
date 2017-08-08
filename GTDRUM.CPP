#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<process.h>
union REGS in,out;
class pl{
public:
void per(){
rectangle(10,10,630,470);
settextstyle(10,0,5);
outtextxy(170,0,"GT-DRUM");
line(10,100,630,100);
settextstyle(1,0,4);
rectangle(230,150,380,200);
outtextxy(268,155,"PLAY");
rectangle(230,220,380,270);
outtextxy(240,225,"CREDITS");
rectangle(20,425,55,460);
outtextxy(30,422,"?");
//rectangle(230,290,380,340);
rectangle(550,425,620,460);
outtextxy(552,422,"EXIT");
settextstyle(1,0,1);
outtextxy(180,430,"GIRISH THAKWANI PRODUCTIONS");
}
void help2(){
in.x.ax=1;
int86(0x33,&in,&out);
while(1){
while(!kbhit())
{
in.x.ax=3;
int86(0x33,&in,&out);
hel();
if(out.x.bx==1){
int x=out.x.cx,y=out.x.dx;
if(x>20&&x<90&&y>425&&y<460){
cleardevice();
run();
}
}
}
exit(0);
}
}

void help1(){
in.x.ax=1;
int86(0x33,&in,&out);
while(1){
while(!kbhit())
{
in.x.ax=3;
int86(0x33,&in,&out);
hel();
if(out.x.bx==1){
int x=out.x.cx,y=out.x.dx;
if(x>20&&x<90&&y>425&&y<460){
cleardevice();
first();
}
}
}
exit(0);
}
}
void cred1(){
settextstyle(1,0,6);
rectangle(10,10,630,470);
line(10,100,630,100);
outtextxy(210,10,"CREDITS");
settextstyle(8,0,2);  }
void cred(){ cred1();
for(int i=0;i<30;i+=2)
{
cleardevice();
cred1();
outtextxy(135,110+i,"KITKAT AIRPORT ADVERTISEMENT");
delay(200);
}
for(i=0;i<30;i+=2)
{cleardevice();
cred1();
outtextxy(290,110+i,"AND");
outtextxy(135,140+i,"KITKAT AIRPORT ADVERTISEMENT");
delay(200);
}
for(i=0;i<=150;i+=2)
{cleardevice();
cred1();
outtextxy(140,110+i,"GIRISH THAKWANI PRODUCTIONS");
outtextxy(290,140+i,"AND");
outtextxy(135,170+i,"KITKAT AIRPORT ADVERTISEMENT");
delay(200);
}
cleardevice();
credit();
in.x.ax=1;
int86(0x33,&in,&out);
while(1){
while(!kbhit()){
in.x.ax=3;
int86(0x33,&in,&out);
credit();
if(out.x.bx==1){
int x=out.x.cx,y=out.x.dx;
if(x>20&&x<90&&y>425&&y<460){
cleardevice();
first();
}
}
}
exit(0);
}
}
void credit(){
settextstyle(1,0,6);
rectangle(10,10,630,470);
line(10,100,630,100);
outtextxy(210,10,"CREDITS");
settextstyle(8,0,2);
outtextxy(140,260,"GIRISH THAKWANI PRODUCTIONS");
outtextxy(290,290,"AND");
outtextxy(135,320,"KITKAT AIRPORT ADVERTISEMENT");
settextstyle(1,0,1);
outtextxy(180,430,"GIRISH THAKWANI PRODUCTIONS");
line(10,415,630,415);
settextstyle(1,0,3);
rectangle(20,425,90,460);
outtextxy(26,427,"BACK");
}
void hel(){
settextstyle(1,0,8);
rectangle(10,10,630,470);
line(10,100,630,100);
outtextxy(220,8,"HELP");
settextstyle(8,0,3);
outtextxy(20,130,"Its a musical drum application.");
outtextxy(20,160,"Just 'left click' on the drum and enjoy!!!");
outtextxy(20,190,"There is nothing more to tell you as the");
outtextxy(20,220,"application is very user friendly.");
outtextxy(255,320,"THANKS");
settextstyle(1,0,1);
outtextxy(180,430,"GIRISH THAKWANI PRODUCTIONS");
line(10,415,630,415);
settextstyle(1,0,3);
rectangle(20,425,90,460);
outtextxy(26,427,"BACK");
}
void quo(){
int a;
a=rand()%10;
switch(a){
case 0:outtextxy(530,30,"GREAT!!!");break;
case 1:outtextxy(530,30,"NICE ");break;
case 2:outtextxy(530,30,"YOU ARE");outtextxy(540,60,"GOOD.");break;
case 3:outtextxy(530,30,"THAT");outtextxy(540,60,"WAS");
outtextxy(530,90,"CRAZY");break;
case 4:outtextxy(530,30,"AWESOME");break;
case 5:outtextxy(530,30,"AWWW...");break;
case 6:outtextxy(530,30,"BADIYA");break;
default:outtextxy(530,30,"YEAH");
}
}
void first(){
in.x.ax=1;
int86(0x33,&in,&out);
while(1){
while(!kbhit()){
per();
in.x.ax=3;
int86(0x33,&in,&out);
if(out.x.bx==1){
int x=out.x.cx,y=out.x.dx;
if(x>230&&x<380&&y>150&&y<200){
cleardevice();run();
}
else if(x>230&&x<380&&y>220&&y<270){cleardevice();cred();}
else if(x>20&&y>425&&x<55&&y<460){cleardevice();
help1();
}
else if(x>550&&x<620&&y>425&&y<460){exit(0);}
}
}
exit(0);
}
}
void mm(){
cleardevice();
rectangle(10,10,630,470);
settextstyle(1,0,1);
outtextxy(130,20,"A GIRISH THAKWANI PRODUCTIONS PRESENT");
settextstyle(1,0,5);
outtextxy(285,190,"GT");
outtextxy(245,230,"DRUMS");
for(int i=0;i<360;i+=4){
arc(310,240,360,i,130);
settextstyle(1,0,1);
outtextxy(280,420,"LOADING");
delay(50);
cleardevice();
settextstyle(1,0,5);
rectangle(10,10,630,470);
outtextxy(285,190,"GT");
outtextxy(245,230,"DRUMS");
settextstyle(1,0,1);
outtextxy(130,20,"A GIRISH THAKWANI PRODUCTIONS PRESENT");
}
circle(310,240,130);
settextstyle(0,0,1);
outtextxy(200,440,"PRESS ANY KEY TO CONTINUE...");
getch();  cleardevice();
first();
}
void rec()
{
//time_t t;
//t=time(NULL);
//stime(&t);
rectangle(10,10,510,60);
settextstyle(10,0,3);
outtextxy(30,5,"GT-DRUM");
settextstyle(1,0,1);
line(215,10,215,60);
outtextxy(225,23,"GIRISH THAKWANI PRODUCTION");
settextstyle(1,0,3);
rectangle(10,10,510,400);
rectangle(520,10,630,470);
rectangle(10,410,510,470);
rectangle(20,420,280,460);
settextstyle(2,0,6);
outtextxy(30,426,"HELLO AND WELCOME USER");
//outtextxy(30,430,ctime(&t));
rectangle(290,420,370,460);
settextstyle(1,0,1);
outtextxy(308,420,"MAIN");
outtextxy(305,440,"MENU");
rectangle(380,420,460,460);
settextstyle(1,0,3);
outtextxy(395,425,"QUIT");
rectangle(470,420,500,460);
outtextxy(480,425,"?");
//circle(190,180,60);
rectangle(130,130,250,230);
outtextxy(185,165,"1");
//circle(320,180,60);
rectangle(270,130,390,230);
outtextxy(325,165,"2");
//circle(160,290,30);
rectangle(100,240,190,330);
outtextxy(145,275,"3");
//circle(350,290,30);
rectangle(330,240,440,330);
outtextxy(375,275,"4");
rectangle(200,260,310,320);
outtextxy(250,275,"5");
}
void run(){
int a4[]={330,240,440,240,440,330,330,330};
int a5[]={200,260,310,260,310,320,200,320};
int a3[]={100,240,190,240,190,330,100,330};
int a2[]={270,130,390,130,390,230,270,230};
int a1[]={130,130,250,130,250,230,130,230};
in.x.ax=1;
int86(0x33,&in,&out);
while(1)
{
while(!kbhit()){
in.x.ax=3;
int86(0x33,&in,&out);
rec();
if(out.x.bx==1){
int x=out.x.cx,y=out.x.dx;
if(x>330&&x<440&&y>240&&y<330){
sound(600);
setfillstyle(1,1);
fillpoly(4,a4);
delay(200);
cleardevice();
rec();
nosound();
quo();
}
else if(x>200&&x<310&&y>260&&y<320){
sound(400);
setfillstyle(1,2);
fillpoly(4,a5);
delay(200);
cleardevice();
rec();
nosound();
quo();
}
else if(x>100&&x<190&&y>240&&y<330){
sound(200);
setfillstyle(1,3);
fillpoly(4,a3);
delay(200);
cleardevice();
rec();
nosound();
quo();
}
else if(x>270&&x<390&&y>130&&y<230){
sound(100);
setfillstyle(1,4);
fillpoly(4,a2);
delay(200);
cleardevice();
rec();
nosound();
quo();
}
else if(x>130&&x<250&&y>130&&y<230){
sound(60);
setfillstyle(1,5);
fillpoly(4,a1);
delay(200);
cleardevice();
rec();
nosound();
quo();
}
if(x>290&&y>420&&x<370&&y<460){
cleardevice();
first();
}
if(x>470&&y>420&&x<500&&y<460){
cleardevice();
help2();
}
if(x>380&&x<460&&y>420&&y<460){
exit(0);
}
}
}
exit(0);
}
}
};
void main()
{pl po;
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
po.mm();
getch();
}
