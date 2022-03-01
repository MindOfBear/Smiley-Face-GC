#include "graphics.h"

int move = 50; // valoare movement
int vblink = 10; // valoare blink

void movement() { // fata miscatoare
	initwindow(800, 600, "Smile is healty!", 200, 200);
	setbkcolor(0);
	setcolor(YELLOW);
	cleardevice();
	for (int i = 0; i < move; i++) { // animatie constructie smiley face
		cleardevice();
		circle(400, 300, 50 + i); // fata
		circle(360, 200 + i, 10); // ochiul stang
		circle(490 - i, 250, 10); // ochiul drept
		ellipse(400, 320, 140, 40, 60, -10 - i);
		Sleep(30);
		}
}
void blink(){ // animatie blink
	for (int i = 0; i < vblink; i++) { // inchide ochiul drept
		cleardevice();
		circle(400, 300, 100); // fata
		circle(360, 250, 10); // ochiul stang
		circle(440, 250, 10-i); // ochiul drept
		ellipse(400, 320, 140, 40, 60+i, -60);
		Sleep(50);
	}
	for (int j = 0; j < vblink; j++) { // deschide ochiul drept si zambetul revine la normal
		cleardevice();
		circle(400, 300, 100); // fata
		circle(360, 250, 10); // ochiul stang
		circle(440, 250, j); // ochiul drept
		ellipse(400, 320, 140, 40, 70-j, -60);
		Sleep(50);
	}
}

void text() {
	for (int i = 0;; i++) { // infinite RGB smile
		setcolor(i%15);
		outtextxy(290, 100, "Smiley face creat de Nicolaescu Ovidiu :)");
		Sleep(100);
	}
}

void main() {
	movement();
	blink();
	text();
	getch();
	closegraph();
}