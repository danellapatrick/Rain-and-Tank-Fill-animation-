#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int rhx,rhy,j,i;
int midx,midy,x1,x2,y1,y2,m,n;
int k= 0, x = 0, y = 0, flag = 0;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

for(i=0;i<10;i+=5)
{
while(!kbhit())
{
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;

	/* drawing the tank */
	setcolor(DARKGRAY);
	setlinestyle(SOLID_LINE, 1, 3);
	rectangle(50, midy - 2, getmaxx() - 50, midy + 200);
	setcolor(BLACK);
	line(49, midy -2, getmaxx() - 49, midy -2);

	    /* set the color of water */
	setcolor(BLUE);
	setlinestyle(SOLID_LINE, 1, 3);

	x1 = 53, y1 = midy +195 ;
	x2 = getmaxx() - 53, y2 = midy + 195;
/*while (y1 > midy) {
		setfillstyle(SOLID_FILL, BLUE);
		rectangle(x1, y1, x2, y2);
		floodfill(x1, y1, BLUE);
		y1 = y1 - 2;
		y2 = y2 - 2;
		delay(70);
		}


/*{
line(35+i,380,35+i,340);
line(35+i,310,40+i,330);
delay(20);
}

line(35+i,340,35+i,310); //body
circle(35+i,300,10); //head
line(35+i,310,50+i,330); // hand
line(50+i,330,50+i,280); //umbrella stick
line(15+i,280,85+i,280); //umbrella right
arc(50+i,280,0,180,35); //umbrella body
arc(55+i,330,180,360,5);//umbrella handle
*/

rhx=getmaxx();
rhy=getmaxy();
for(m=0; m<=10;m++){
if(m<=10){
for(j=0;j<100;j++)
{
outtextxy(random(rhx),random(rhy-100),"|");
}
}
/* ball movement */
 if(m>=3){
while (y1 > midy) {
		setfillstyle(SOLID_FILL, BLUE);
		rectangle(x1, y1, x2, y2);
		floodfill(x1, y1, BLUE);
		y1 = y1 - 2;
		y2 = y2 - 2;
		delay(30);
		}     //for(n=0;n>=3

		if(m>=8){
	while (x <= getmaxx() && !kbhit()) {

		/* set the current drawing color */
		setcolor(BLUE);
		/* fill the ball with given pattern & color */
		setfillstyle(SOLID_FILL, BLUE);

				/* ball with light red color */
		outtextxy(x, y,"|");

		/* ball movement towards x-axis */
		if (k % 5 == 0) {
			/* left to right */
			x = x + 5;
			k = 0;
		}


		/* ball movement towards y-axis */
		if (flag) {
						/* bottom to top */
			y = y - 50;
		} else {
			/* top to bottom */
			y = y + 50;
		}


		/* check whether ball reached y-axis maximum */
		if (y >= getmaxy()-300) {
			flag = 1;
		} else if (y <= 0) {
			flag = 0;
		}

		/* sleeps for 50 milliseconds */
		delay(35);

				/* clear the graphic screen */
				//cleardevice();
				i++;
		}
		}
}
if(m==20){
break;
}
m++;
 }


setcolor(WHITE);	/* fill the tank with water */
delay(20);
}
  }


getch();
}