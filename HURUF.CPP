#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>

int i;

float octave[7]={130.81,146.83,164.81,174.61,196.220,246.94};
int nilai_nada;

main()
{
clrscr();
gotoxy(29,10);
printf("S");
sound(100);
delay(500);
nosound();

printf("E");
sound(200);
delay(500);
nosound();

printf("L");
sound(300);
delay(500);
nosound();

printf("A");
sound(400);
delay(500);
nosound();

printf("M");
sound(500);
delay(500);
nosound();

printf("A");
sound(600);
delay(500);
nosound();

printf("T");
sound(700);
delay(500);
nosound();

gotoxy(37,10);
printf("B");
sound(800);
delay(500);
nosound();

printf("E");
sound(900);
delay(500);
nosound();

printf("L");
sound(1000);
delay(500);
nosound();

printf("A");
sound(1100);
delay(500);
nosound();

printf("J");
sound(1200);
delay(500);
nosound();

printf("A");
sound(1300);
delay(500);
nosound();

printf("R");
sound(1400);
delay(500);
nosound();

gotoxy(45,10);
printf("T");
sound(1500);
delay(500);
nosound();

printf("U");
sound(1600);
delay(500);
nosound();

printf("R");
sound(1700);
delay(500);
nosound();

printf("B");
sound(1800);
delay(500);
nosound();

printf("O");
sound(1900);
delay(500);
nosound();

gotoxy(51,10);
printf("C");
sound(2000);
delay(500);
nosound();

gotoxy(29,10);
textcolor(2);
cprintf("SELAMAT BELAJAR TURBO C");
delay(1000);

gotoxy(27,11);
textcolor(1);
cprintf("**TUHAN YESUS MEMBERKATI**");

while(!kbhit())
{
nilai_nada=random(7);
sound(octave[nilai_nada]*1);
delay(100);
nosound();
}
return 1;
}



