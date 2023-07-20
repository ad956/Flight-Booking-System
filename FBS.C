#include <stdio.h>
#include <conio.h>
#include <string.h>

#define rw 80
#define cl 66
#define MAXCHAR 1000

struct book
{
	char name[30];
	char destination[50];
	int amount;
} ad[5];

void bt(char[20], char[20], int, char[20], int, char[20], char[20], char[10]);
void logo();
void border();
void anim();
void show();
void help();
void search();
void developers();
void about();
void available_flight();
void search_flight(char[]);
void exit();
void wc();
void option();

void bt(char airline[20], char city[20], int seat_cap, char time[20], int price, char classes[20], char origin[20], char flightcode[20])
{
	FILE *fi;
	char passport[13], sno[10], email[30], phn[10];
	int seat_require, total_amount, i, c;

	system("cls");
	wc();
	gotoxy(12, 13);
	textcolor(14);
	cprintf("How Many Seats You Want : ");
	scanf("%d", &seat_require);
	if (seat_require > seat_cap)
	{
		gotoxy(12, 13);
		textcolor(14);
		cprintf("Sorry ! Seating Capacity is : %d & You Have Entered Required Seats As : %d ", seat_cap, seat_require);
	}
	else
	{
		total_amount = price * seat_require;
		for (i = 1; i <= seat_require; i++)
		{
			gotoxy(12, 14);
			textcolor(14);
			cprintf("Enter Your Full Name : ");
			scanf(" %[^\n]s", ad[i].name); // fgets(st[i].name, 20, stdin);
		}

		gotoxy(12, 16);
		textcolor(14);
		cprintf("Available Seat Numbers ");
		gotoxy(12, 18);
		textcolor(14);
		cprintf("|-----------------------------------------------|");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("| A1   A2  |  B1   B2  |   C1   C2  |  D1   D2  |");
		gotoxy(12, 20);
		textcolor(14);
		cprintf("| A3   A4  |  B3   B4  |   C3   C4  |  D3   D4  |");
		gotoxy(12, 21);
		textcolor(14);
		cprintf("| A5   A6  |  B5   B6  |   C5   C6  |  D5   D6  |");
		gotoxy(12, 22);
		textcolor(14);
		cprintf("|-----------------------------------------------|");
		gotoxy(12, 24);
		textcolor(14);
		cprintf("Write Seat No : ");
		scanf(" %[^\n]s", sno);

		system("cls");
		wc();

		gotoxy(12, 14);
		textcolor(14);
		cprintf("Enter Your Contact No : ");
		scanf("%s", phn);

		gotoxy(12, 16);
		textcolor(14);
		cprintf("Enter Your Mail id : ");
		scanf("%s", email);

		gotoxy(12, 18);
		textcolor(14);
		cprintf("Enter Your Passport Number(12 Characters) : ");
		scanf("%s", &passport);

		fi = fopen(passport, "w");

		printf("THANK YOU OF CHOOSING FBS");

		fprintf(fi, "\n******************************************************************");
		fprintf(fi, "\n*           Flight                                               *");
		fprintf(fi, "\n*                            Booking                             *");
		fprintf(fi, "\n*                                             System             *");
		fprintf(fi, "\n******************************************************************");
		fprintf(fi, "\n*                                                                *");
		for (i = 1; i <= seat_require; i++)
			fprintf(fi, "\n*   NAME: %s               		             	        *", ad[i].name);
		fprintf(fi, "\n*                                                                *");
		fprintf(fi, "\n*   FROM: %s                          TO:   %s                   *", origin, city);
		fprintf(fi, "\n*                                                                *");
		fprintf(fi, "\n*   FLIGHT CODE: %s          E-Mail : %s 			      *", flightcode, email);
		fprintf(fi, "\n*                                                                *");
		fprintf(fi, "\n*   DEPARTURE TIME:    %s       Phone No. :  %s                  *", time, phn);
		fprintf(fi, "\n*                                                                *");
		fprintf(fi, "\n*   CLASS: %s                 Total Amount : %d                  *", classes, price * seat_require);
		fprintf(fi, "\n*                                                                *");
		fprintf(fi, "\n*   GATE : 08                       SEAT NO : %s                 *", sno);
		fprintf(fi, "\n*                                                                *");
		fprintf(fi, "\n*                                                                *");
		fprintf(fi, "\n******************************************************************");

		system("cls");
		wc();

		for (i = 0; i <= 4; i++)
		{
			_setcursortype(_NOCURSOR);
			border();
			gotoxy(1, 10);
			printf("              _");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(1, 10);
			printf("               _");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(1, 10);
			printf("\n");
			printf("                 \\");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(1, 10);
			printf("\n\n");
			printf("                  |");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(1, 10);
			printf("\n\n\n");
			printf("                 /");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(30, 10);
			printf("\n\n\n");
			printf("                _");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(30, 10);
			printf("\n\n\n");
			printf("               _");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(30, 10);
			printf("\n\n\n");
			printf("             \\");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(30, 10);
			printf("\n\n");
			printf("            |");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
			system("cls");
			border();
			gotoxy(30, 10);
			printf("\n");
			printf("             /");
			gotoxy(27, 12);
			printf("WE ARE PRINTING YOUR TICKET PLEASE WAIT");
			delay(100);
		}

		system("cls");
		_setcursortype(_NORMALCURSOR);
		border();
		gotoxy(8, 12);
		printf("YOUR TICKET IS CREATED SUCCESSFULLY");
		gotoxy(8, 13);
		printf("IF YOU NEED AN SOFT COPY OF TICKET JUST GO TO:");
		gotoxy(10, 15);
		printf("C://TC/BIN/%s", passport);
		gotoxy(10, 17);
		printf("THANK YOU FOR CHOOSING FBS");
		getch();
		system("cls");
		wc();
	}
}

void logo()
{
	int speeda2 = 85;
	_setcursortype(_NOCURSOR);

	gotoxy(15, 2);
	textcolor(14);
	cprintf("\n      *******                                                      ");
	delay(speeda2);
	gotoxy(15, 3);
	textcolor(14);
	cprintf("\n       *      *                                                    ");
	delay(speeda2);
	gotoxy(15, 4);
	textcolor(14);
	cprintf("\n        *       *                                                  ");
	delay(speeda2);
	gotoxy(15, 5);
	textcolor(14);
	cprintf("\n      ***        ******************************************        ");
	delay(speeda2);
	gotoxy(15, 6);
	textcolor(14);
	cprintf("\n       *                                                  *****    ");
	delay(speeda2);
	gotoxy(15, 7);
	textcolor(14);
	cprintf("\n        *             Flight                              ******   ");
	delay(speeda2);
	gotoxy(15, 8);
	textcolor(14);
	cprintf("\n         *                   Booking                            *  ");
	delay(speeda2);
	gotoxy(15, 9);
	textcolor(14);
	cprintf("\n          *                          System                     *  ");
	delay(speeda2);
	gotoxy(15, 10);
	textcolor(14);
	cprintf("\n           *****      *************           *****************    ");
	delay(speeda2);
	gotoxy(15, 11);
	textcolor(14);
	cprintf("\n              *      *           *          *                      ");
	delay(speeda2);
	gotoxy(15, 12);
	textcolor(14);
	cprintf("\n             *     *            *         *                        ");
	delay(speeda2);
	gotoxy(15, 13);
	textcolor(14);
	cprintf("\n            *******            *        *                          ");
	delay(speeda2);
	gotoxy(15, 14);
	textcolor(14);
	cprintf("\n                              *       *                            ");
	delay(speeda2);
	gotoxy(15, 15);
	textcolor(14);
	cprintf("\n                             *      *                              ");
	delay(speeda2);
	gotoxy(15, 16);
	textcolor(14);
	cprintf("\n                            *******                                ");
	delay(speeda2);
	gotoxy(15, 17);
	textcolor(14);
	cprintf("\nPress Any Key To Continue.......");
	getch();
	clrscr();
}

void border()
{
	int i, j;
	_setcursortype(_NOCURSOR);
	clrscr();

	for (i = 2, j = 2; i < rw; j++)
	{
		if (j > 15)
			j = 2;
		textcolor(j);
		gotoxy(i, 2);
		cprintf("%c", 15);
		gotoxy(i, cl - 1);
		cprintf("%c", 15);
		i++;
	}
	for (i = 2, j = 2; i < cl; i++, j++)
	{
		if (j > 15)
			j = 2;
		textcolor(j);
		gotoxy(2, i);
		cprintf("%c", 15);
		gotoxy(rw - 1, i);
		cprintf("%c", 15);
	}
}

void animation_ex()
{
	_setcursortype(_NOCURSOR);
	clrscr();
	gotoxy(8, 1);
	textcolor(11);
	cprintf("\n********   ");
	gotoxy(8, 2);
	textcolor(11);
	cprintf("\n*          ");
	gotoxy(8, 3);
	textcolor(11);
	cprintf("\n********   ");
	gotoxy(8, 4);
	textcolor(11);
	cprintf("\n*          ");
	gotoxy(8, 5);
	textcolor(11);
	cprintf("\n*          ");
	gotoxy(8, 6);
	textcolor(11);
	cprintf("\n*          ");
	delay(250);

	gotoxy(35, 8);
	textcolor(11);
	cprintf("\n******** ");
	gotoxy(35, 9);
	textcolor(11);
	cprintf("\n*      * ");
	gotoxy(35, 10);
	textcolor(11);
	cprintf("\n*      * ");
	gotoxy(35, 11);
	textcolor(11);
	cprintf("\n******** ");
	gotoxy(35, 12);
	textcolor(11);
	cprintf("\n*      *  ");
	gotoxy(35, 13);
	textcolor(11);
	cprintf("\n*      *  ");
	gotoxy(35, 14);
	textcolor(11);
	cprintf("\n******** ");
	delay(400);

	gotoxy(65, 16);
	textcolor(11);
	cprintf("\n********   ");
	gotoxy(65, 17);
	textcolor(11);
	cprintf("\n*          ");
	gotoxy(65, 18);
	textcolor(11);
	cprintf("\n*          ");
	gotoxy(65, 19);
	textcolor(11);
	cprintf("\n********   ");
	gotoxy(65, 20);
	textcolor(11);
	cprintf("\n       *   ");
	gotoxy(65, 21);
	textcolor(11);
	cprintf("\n       *   ");
	gotoxy(65, 22);
	textcolor(11);
	cprintf("\n********   ");
	delay(400);
}

// void developers()
// {

// 	system("cls");

// 	delay(400);
// 	gotoxy(20, 2);
// 	textcolor(14);
// 	cprintf("||=======================================||");
// 	gotoxy(20, 3);
// 	textcolor(14);
// 	cprintf("||   		 Developers                   ||");
// 	gotoxy(20, 4);
// 	textcolor(14);
// 	cprintf("||      1. Anand Suthar                 ||");
// 	gotoxy(20, 5);
// 	textcolor(14);
// 	cprintf("||      2.                          System ||");
// 	gotoxy(20, 6);
// 	textcolor(14);
// 	cprintf("||=======================================||");

// 	delay(500);
// }

void about()
{
	int i;
	char dev[2];
	clrscr();
	animation_ex();

	gotoxy(6, 24);
	textcolor(3);
	cprintf("Press Any Key To Continue ");
	gotoxy(32, 24);
	textcolor(3);
	for (i = 0; i < 9; i++)
	{
		cprintf(".");
		delay(350);
	}
	getch();
	clrscr();

	gotoxy(20, 2);
	textcolor(14);
	cprintf("||=======================================||");
	gotoxy(20, 3);
	textcolor(14);
	cprintf("||     Flight                            ||");
	gotoxy(20, 4);
	textcolor(14);
	cprintf("||              Booking                  ||");
	gotoxy(20, 5);
	textcolor(14);
	cprintf("||                                System ||");
	gotoxy(20, 6);
	textcolor(14);
	cprintf("||=======================================||");

	printf("\n");
	gotoxy(7, 8);
	textcolor(12);
	cprintf("Flight Booking System is a computerized system used to store and retrieve  information  and conduct transactions related to air travel.");
	gotoxy(63, 9);
	textcolor(12);
	cprintf("The project is     aimed at exposing the relevance and importance of Flight Booking Systems.");

	gotoxy(9, 12);
	textcolor(12);
	cprintf("It is projected towards enhancing the relationship between customers and airline agencies,");
	gotoxy(19, 13);
	textcolor(12);
	cprintf("And thereby making it convenient for the receptionist to book  the flights as");
	gotoxy(17, 14);
	textcolor(12);
	cprintf("when they require such that they can utilize this software to    make reservations.");

	gotoxy(5, 17);
	textcolor(3);
	cprintf("For Further Query About Our System ,");

	gotoxy(12, 19);
	textcolor(3);
	cprintf("------------------- Contact Us ----------------------");
	gotoxy(8, 21);
	textcolor(3);
	cprintf("    E-mail - fbs@gmail.com     Contact No. - +917096784359 ");
	gotoxy(8, 22);
	textcolor(3);
	cprintf("    Web-site :  www.fbs.com    Developer    : Anand Suthar     ");

	gotoxy(8, 23);
	textcolor(3);
      //	scanf("%s", dev);

	// if (strcmp(dev, "D") == 0)
	// {
	// 	system("cls");
	// 	developers();
	// }

	// else
	// {
	gotoxy(5, 25);
	textcolor(11);
	cprintf("Press Any Key To Go To Menu ");

	gotoxy(33, 25);
	textcolor(11);
	for (i = 0; i < 9; i++)
	{
		cprintf(".");
		delay(350);
	}

	getch();
	system("cls");
	wc();
	// }
}

void anim()
{

	int speeda1 = 46;

	_setcursortype(_NOCURSOR);
	clrscr();
	gotoxy(1, 1);
	textcolor(12);
	printf("\n**       ");
	gotoxy(1, 2);
	textcolor(12);
	printf("\n* ****** ");
	gotoxy(1, 3);
	textcolor(12);
	printf("\n*       *");
	gotoxy(1, 4);
	textcolor(12);
	printf("\n******** ");
	gotoxy(1, 5);
	textcolor(12);
	printf("\n   * *   ");
	gotoxy(1, 6);
	textcolor(12);
	printf("\n   **    ");
	delay(speeda1);

	clrscr();
	gotoxy(2, 1);
	textcolor(12);
	printf("\n  **       ");
	gotoxy(2, 2);
	textcolor(12);
	printf("\n  * ****** ");
	gotoxy(2, 3);
	textcolor(12);
	printf("\n  *       *");
	gotoxy(2, 4);
	textcolor(12);
	printf("\n  ******** ");
	gotoxy(2, 5);
	textcolor(12);
	printf("\n     * *   ");
	gotoxy(2, 6);
	textcolor(12);
	printf("\n     **    ");
	delay(speeda1);

	clrscr();
	gotoxy(2, 1);
	textcolor(12);
	printf("\n    **       ");
	gotoxy(2, 2);
	textcolor(12);
	printf("\n    * ****** ");
	gotoxy(2, 3);
	textcolor(12);
	printf("\n    *       *");
	gotoxy(2, 4);
	textcolor(12);
	printf("\n    ******** ");
	gotoxy(2, 5);
	textcolor(12);
	printf("\n       * *   ");
	gotoxy(2, 6);
	textcolor(12);
	printf("\n       **    ");
	delay(speeda1);

	clrscr();
	gotoxy(3, 1);
	textcolor(12);
	printf("\n      **       ");
	gotoxy(3, 2);
	textcolor(12);
	printf("\n      * ****** ");
	gotoxy(3, 3);
	textcolor(12);
	printf("\n      *       *");
	gotoxy(3, 4);
	textcolor(12);
	printf("\n      ******** ");
	gotoxy(3, 5);
	textcolor(12);
	printf("\n         * *   ");
	gotoxy(3, 6);
	textcolor(12);
	printf("\n         **    ");
	delay(speeda1);

	clrscr();
	gotoxy(4, 1);
	textcolor(12);
	printf("\n        **       ");
	gotoxy(4, 2);
	textcolor(12);
	printf("\n        * ****** ");
	gotoxy(4, 3);
	textcolor(12);
	printf("\n        *       *");
	gotoxy(4, 4);
	textcolor(12);
	printf("\n        ******** ");
	gotoxy(4, 5);
	textcolor(12);
	printf("\n           * *   ");
	gotoxy(4, 6);
	textcolor(12);
	printf("\n           **    ");
	delay(speeda1);

	clrscr();
	gotoxy(5, 1);
	textcolor(12);
	printf("\n          **       ");
	gotoxy(5, 2);
	textcolor(12);
	printf("\n          * ****** ");
	gotoxy(5, 3);
	textcolor(12);
	printf("\n          *       *");
	gotoxy(5, 4);
	textcolor(12);
	printf("\n          ******** ");
	gotoxy(5, 5);
	textcolor(12);
	printf("\n             * *   ");
	gotoxy(5, 6);
	textcolor(12);
	printf("\n             **    ");
	delay(speeda1);

	clrscr();

	gotoxy(6, 1);
	textcolor(12);
	printf("\n            **       ");
	gotoxy(6, 2);
	textcolor(12);
	printf("\n            * ****** ");
	gotoxy(6, 3);
	textcolor(12);
	printf("\n            *       *");
	gotoxy(6, 4);
	textcolor(12);
	printf("\n            ******** ");
	gotoxy(6, 5);
	textcolor(12);
	printf("\n               * *   ");
	gotoxy(6, 6);
	textcolor(12);
	printf("\n               **    ");
	delay(speeda1);

	clrscr();
	gotoxy(7, 1);
	textcolor(12);
	printf("\n              **       ");
	gotoxy(7, 2);
	textcolor(12);
	printf("\n              * ****** ");
	gotoxy(7, 3);
	textcolor(12);
	printf("\n              *       *");
	gotoxy(7, 4);
	textcolor(12);
	printf("\n              ******** ");
	gotoxy(7, 5);
	textcolor(12);
	printf("\n                 * *   ");
	gotoxy(7, 6);
	textcolor(12);
	printf("\n                 **    ");
	delay(speeda1);

	clrscr();
	gotoxy(8, 1);
	textcolor(12);
	printf("\n                **       ");
	gotoxy(8, 2);
	textcolor(12);
	printf("\n                * ****** ");
	gotoxy(8, 3);
	textcolor(12);
	printf("\n               *       *");
	gotoxy(8, 4);
	textcolor(12);
	printf("\n                ******** ");
	gotoxy(8, 5);
	textcolor(12);
	printf("\n                   * *   ");
	gotoxy(8, 6);
	textcolor(12);
	printf("\n                   **    ");
	delay(speeda1);

	clrscr();
	gotoxy(9, 1);
	textcolor(12);
	printf("\n                  **       ");
	gotoxy(9, 2);
	textcolor(12);
	printf("\n                  * ****** ");
	gotoxy(9, 3);
	textcolor(12);
	printf("\n                  *       *");
	gotoxy(9, 4);
	textcolor(12);
	printf("\n                  ******** ");
	gotoxy(9, 5);
	textcolor(12);
	printf("\n                     * *   ");
	gotoxy(9, 6);
	textcolor(12);
	printf("\n                     **    ");
	delay(speeda1);

	clrscr();
	gotoxy(10, 1);
	textcolor(12);
	printf("\n                    **       ");
	gotoxy(11, 2);
	textcolor(12);
	printf("\n                    * ****** ");
	gotoxy(12, 3);
	textcolor(12);
	printf("\n                    *       *");
	gotoxy(13, 4);
	textcolor(12);
	printf("\n                    ******** ");
	gotoxy(14, 5);
	textcolor(12);
	printf("\n                       * *   ");
	gotoxy(15, 6);
	textcolor(12);
	printf("\n                       **    ");
	delay(speeda1);

	clrscr();
	gotoxy(16, 1);
	textcolor(12);
	printf("\n                      **       ");
	gotoxy(17, 2);
	textcolor(12);
	printf("\n                      * ****** ");
	gotoxy(18, 3);
	textcolor(12);
	printf("\n                      *       *");
	gotoxy(19, 4);
	textcolor(12);
	printf("\n                      ******** ");
	gotoxy(20, 5);
	textcolor(12);
	printf("\n                         * *   ");
	gotoxy(21, 6);
	textcolor(12);
	printf("\n                         **    ");
	delay(speeda1);

	clrscr();
	gotoxy(22, 1);
	textcolor(12);
	printf("\n                        **       ");
	gotoxy(23, 2);
	textcolor(12);
	printf("\n                        * ****** ");
	gotoxy(24, 3);
	textcolor(12);
	printf("\n                        *       *");
	gotoxy(25, 4);
	textcolor(12);
	printf("\n                        ******** ");
	gotoxy(26, 5);
	textcolor(12);
	printf("\n                           * *   ");
	gotoxy(27, 6);
	textcolor(12);
	printf("\n                           **    ");
	delay(speeda1);

	clrscr();
	gotoxy(28, 1);
	textcolor(12);
	printf("\n                          **       ");
	gotoxy(29, 2);
	textcolor(12);
	printf("\n                          * ****** ");
	gotoxy(30, 3);
	textcolor(12);
	printf("\n                          *       *");
	gotoxy(31, 4);
	textcolor(12);
	printf("\n                          ******** ");
	gotoxy(32, 5);
	textcolor(12);
	printf("\n                             * *   ");
	gotoxy(33, 6);
	textcolor(12);
	printf("\n                             **    ");
	delay(speeda1);

	clrscr();
	gotoxy(34, 1);
	textcolor(12);
	printf("\n                            **       ");
	gotoxy(35, 2);
	textcolor(12);
	printf("\n                            * ****** ");
	gotoxy(36, 3);
	textcolor(12);
	printf("\n                            *       *");
	gotoxy(37, 4);
	textcolor(12);
	printf("\n                            ******** ");
	gotoxy(38, 5);
	textcolor(12);
	printf("\n                               * *   ");
	gotoxy(39, 6);
	textcolor(12);
	printf("\n                               **    ");
	delay(speeda1);

	clrscr();
	gotoxy(40, 1);
	textcolor(12);
	printf("\n                              **       ");
	gotoxy(41, 2);
	textcolor(12);
	printf("\n                              * ****** ");
	gotoxy(42, 3);
	textcolor(12);
	printf("\n                              *       *");
	gotoxy(43, 4);
	textcolor(12);
	printf("\n                              ******** ");
	gotoxy(44, 5);
	textcolor(12);
	printf("\n                                 * *   ");
	gotoxy(45, 6);
	textcolor(12);
	printf("\n                                 **    ");
	delay(speeda1);

	clrscr();
	gotoxy(46, 1);
	textcolor(12);
	printf("\n                               **       ");
	gotoxy(47, 2);
	textcolor(12);
	printf("\n                               * ****** ");
	gotoxy(48, 3);
	textcolor(12);
	printf("\n                               *       *");
	gotoxy(49, 4);
	textcolor(12);
	printf("\n                               ******** ");
	gotoxy(50, 5);
	textcolor(12);
	printf("\n                                  * *   ");
	gotoxy(51, 6);
	textcolor(12);
	printf("\n                                  **    ");
	delay(speeda1);

	clrscr();
	gotoxy(52, 1);
	textcolor(12);
	printf("\n                                 **       ");
	gotoxy(53, 2);
	textcolor(12);
	printf("\n                                 * ****** ");
	gotoxy(54, 3);
	textcolor(12);
	printf("\n                                 *       *");
	gotoxy(55, 4);
	textcolor(12);
	printf("\n                                 ******** ");
	gotoxy(56, 5);
	textcolor(12);
	printf("\n                                    * *   ");
	gotoxy(57, 6);
	textcolor(12);
	printf("\n                                    **    ");
	delay(speeda1);

	clrscr();
	gotoxy(58, 1);
	textcolor(12);
	printf("\n                                   **       ");
	gotoxy(59, 2);
	textcolor(12);
	printf("\n                                   * ****** ");
	gotoxy(60, 3);
	textcolor(12);
	printf("\n                                   *       *");
	gotoxy(61, 4);
	textcolor(12);
	printf("\n                                   ******** ");
	gotoxy(62, 5);
	textcolor(12);
	printf("\n                                      * *   ");
	gotoxy(63, 6);
	textcolor(12);
	printf("\n                                      **    ");
	delay(speeda1);

	clrscr();
	gotoxy(64, 1);
	textcolor(12);
	printf("\n                                     **       ");
	gotoxy(65, 2);
	textcolor(12);
	printf("\n                                     * ****** ");
	gotoxy(66, 3);
	textcolor(12);
	printf("\n                                     *       *");
	gotoxy(67, 4);
	textcolor(12);
	printf("\n                                     ******** ");
	gotoxy(68, 5);
	textcolor(12);
	printf("\n                                        * *   ");
	gotoxy(69, 6);
	textcolor(12);
	printf("\n                                        **    ");
	delay(speeda1);
	clrscr();

	clrscr();
	gotoxy(74, 1);
	textcolor(12);
	printf("\n                                       **       ");
	gotoxy(75, 2);
	textcolor(12);
	printf("\n                                       * ****** ");
	gotoxy(76, 3);
	textcolor(12);
	printf("\n                                       *       *");
	gotoxy(77, 4);
	textcolor(12);
	printf("\n                                       ******** ");
	gotoxy(78, 5);
	textcolor(12);
	printf("\n                                          * *   ");
	gotoxy(79, 6);
	textcolor(12);
	printf("\n                                          **    ");
	delay(speeda1);
	system("cls");
}

void search()
{
	int k, i, e = 0;
	char airname[20], dest[20];
	_setcursortype(_NOCURSOR);

l:
	system("cls");
	wc();
	gotoxy(12, 12);
	textcolor(11);
	cprintf("Searching ");
	for (i = 0; i < 5; i++)
	{

		cprintf(".");
		delay(350);
	}

	system("cls");
	wc();
	gotoxy(12, 12);
	textcolor(11);
	cprintf("Choose Any Option : ");

	gotoxy(12, 14);
	textcolor(11);
	cprintf("Press 1 if You Want to Search via Airline Name : ");
	gotoxy(12, 15);
	textcolor(11);
	cprintf("Press 2 if You want to search via Destination  : ");

	gotoxy(12, 17);
	textcolor(11);
	cprintf("Enter -> ");
	scanf("%d", &k);

	if (k == 1)
	{
		gotoxy(14, 19);
		textcolor(4);
		cprintf("Enter Airline Name : ");
		scanf("%s", airname);
		search_flight(airname);
	}

	else if (k == 2)
	{
		gotoxy(14, 19);
		textcolor(4);
		cprintf("Enter Your Destination  : ");
		scanf("%s", dest);
		search_flight(dest);
	}

	else if (k != 1 || k != 2)
	{
		e++;
		gotoxy(14, 19);
		textcolor(4 + BLINK);
		cprintf("In valid option selected ! ");
		getch();

		if (e < 2)
		{
			goto l;
		}

		else
		{
			gotoxy(14, 19);
			textcolor(4);
			cprintf("You have");
			gotoxy(23, 19);
			textcolor(4 + BLINK);
			cprintf("Crossed limit  ");
			getch();
			system("cls");
			wc();
		}
	}
}

void show()
{
	FILE *fp;
	char str[MAXCHAR], pass[13];
	_setcursortype(_NOCURSOR);

	system("cls");
	wc();
	gotoxy(10, 15);
	textcolor(11);
	cprintf("Enter Your Passport Number : ");
	scanf("%s", &pass);
	system("cls");
	fp = fopen(pass, "r");
	if (fp == NULL)
	{
		printf("Ticket Not Available");
	}

	gotoxy(10, 3);
	textcolor(11);
	cprintf("-----------------Booked-TIckets-----------------");

	while (fgets(str, MAXCHAR, fp) != NULL)

		printf(" %s ", str);
	fclose(fp);
	printf("\nPress Any Key To Continue.....");
	getch();
	clrscr();
	wc();
	option();
}

void help()
{
	int ch;
	system("cls");
	wc();
	gotoxy(15, 12);
	textcolor(9);
	cprintf("1. Check Available Flight ");
	gotoxy(15, 13);
	textcolor(9);
	cprintf("2. Search Flight          ");
	gotoxy(15, 14);
	textcolor(9);
	cprintf("3. Show Booked Ticket     ");
	gotoxy(15, 15);
	textcolor(9);
	cprintf("4. Main Menu              ");

	gotoxy(15, 17);
	textcolor(2);
	cprintf("Choose any option : ");
	scanf("%d", &ch);

	if (ch == 1)
	{
		system("cls");
		wc();
		gotoxy(32, 12);
		textcolor(14);
		cprintf("Available Flight");
		gotoxy(8, 14);
		textcolor(4);
		cprintf("This option will show you the available flights.Before choosing your");
		gotoxy(8, 15);
		textcolor(4);
		cprintf("desired flight you have to enter your origin & select the class of your");
		gotoxy(8, 16);
		textcolor(4);
		cprintf("airline.");

		gotoxy(9, 18);
		textcolor(4);
		cprintf("After that enter your 12 digits of your passport.Than select any city,");
		gotoxy(8, 19);
		textcolor(4);
		cprintf("Available Flights will be displayed ,choose any one from them & fill ");
		gotoxy(8, 20);
		textcolor(4);
		cprintf("required details such as name,passport no etc.At last it will show ");
		gotoxy(8, 21);
		textcolor(4);
		cprintf("you where your ticket has been saved");

		gotoxy(30, 23);
		textcolor(4 + BLINK);
		cprintf("Thanks for using FBS ");
		getch();
	}

	else if (ch == 2)
	{
		system("cls");
		wc();
		gotoxy(32, 12);
		textcolor(14);
		cprintf("Search Flight");
		gotoxy(8, 14);
		textcolor(4);
		cprintf("This option will allows you to search  a flight via  airline  name or  ");
		gotoxy(8, 15);
		textcolor(4);
		cprintf("via destination name.Two options will be shown on the screen choose any");
		gotoxy(8, 16);
		textcolor(4);
		cprintf("one from them.");

		gotoxy(8, 18);
		textcolor(4);
		cprintf("First option will allows you to search flight using airline name ,next ");
		gotoxy(9, 19);
		textcolor(4);
		cprintf("option allows you to search your desired flight using destination name.");

		gotoxy(30, 23);
		textcolor(4 + BLINK);
		cprintf("Thanks for using FBS ");
		getch();
	}

	else if (ch == 3)
	{
		system("cls");
		wc();
		gotoxy(32, 12);
		textcolor(14);
		cprintf("Show Booked Ticket");
		gotoxy(6, 14);
		textcolor(4);
		cprintf("This option will allow you to see booked ticket.It will ask you to enter");
		gotoxy(7, 15);
		textcolor(4);
		cprintf("your 12 digit passport number ,which was used while booking your ticket");
		gotoxy(7, 16);
		textcolor(4);
		cprintf("Enter that number & your ticket will be printed on your screen.");

		gotoxy(30, 23);
		textcolor(4 + BLINK);
		cprintf("Thanks for using FBS ");
		getch();
	}

	else if (ch == 4)
	{
		system("cls");
		wc();
	}

	else
	{
		gotoxy(15, 17);
		textcolor(4);
		cprintf("Please Choose Valid ");
		gotoxy(35, 17);
		textcolor(4 + BLINK);
		cprintf("Option !");
		getch();
		help();
	}
	system("cls");
	wc();
}

void available_flight()
{
	int select, i, classes, e = 0;
	char destination[20], origin[20];
	clrscr();
	_setcursortype(_NOCURSOR);
	wc();

	gotoxy(10, 12);
	textcolor(14);
	cprintf("Enter Origin :  ");
	scanf("%s", origin);
	gotoxy(10, 14);
	textcolor(14);
	cprintf("Choose class :   ");
	gotoxy(10, 16);
	textcolor(14);
	cprintf("1. First    Class   ");
	gotoxy(10, 17);
	textcolor(14);
	cprintf("2. Business Class   ");
	gotoxy(10, 18);
	textcolor(14);
	cprintf("3. Economy  Class   ");
	gotoxy(10, 20);
	textcolor(14);
	cprintf("Enter class :   ");
	scanf("%d", &classes);

l:
	system("cls");
	wc();

	gotoxy(12, 12);
	textcolor(14);
	cprintf("Available Cities Are  ");

	gotoxy(33, 12);
	textcolor(14);
	for (i = 0; i < 4; i++)
	{
		cprintf(".");
		delay(460);
	}
	gotoxy(13, 13);
	textcolor(14);
	cprintf("\n Sr. No         City                Sr.No          City  \n");
	gotoxy(13, 14);
	textcolor(14);
	cprintf("\n   1           Ahemdabaad             2            Surat  ");
	gotoxy(13, 15);
	textcolor(14);
	cprintf("\n   3           Mumbai                 4            New Delhi");
	gotoxy(13, 16);
	textcolor(14);
	cprintf("\n   5           Jaipur                 6            Udaipur ");
	gotoxy(13, 17);
	textcolor(14);
	cprintf("\n   7           Bangalore              8            Hyderabad");
	gotoxy(13, 18);
	textcolor(14);
	cprintf("\n   9           Chennai               10            Kolkata ");

	cprintf("\n");
	gotoxy(14, 21);
	textcolor(14);
	cprintf("\nSelect Your Desired City :  ");
	scanf("%d", &select);

	clrscr();
	wc();
	switch (select)
	{
		int ch;
	case 1:

		gotoxy(12, 12);
		textcolor(14);
		cprintf("Available Flights For Ahemdabaad");
		gotoxy(12, 14);
		textcolor(14);
		cprintf("      Flight          Price      Available Seats       Time      \n");
		gotoxy(12, 15);
		textcolor(14);
		cprintf("     1.Kingfisher     1200            20              8:00  Am   \n");
		gotoxy(12, 16);
		textcolor(14);
		cprintf("     2.Air India      1100            3               11:45 Am   \n");
		gotoxy(12, 17);
		textcolor(14);
		cprintf("     3.Indigo         1500            11              9:40  Am   \n");

		cprintf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("kingfisher", "Ahemdabaad", 20, "8:00 Am", 1200, "First Class", origin, "FC021");
			}
			else if (classes == 2)
			{
				bt("kingfisher", "Ahemdabaad", 20, "8:00 Am", 1200, "Business Class", origin, "FC022");
			}
			else
			{
				bt("kingfisher", "Ahemdabaad", 20, "8:00 Am", 1200, "Economy Class", origin, "FC023");
			}
			break;
		case 2:
			if (classes == 1)
			{
				bt("Air India", "Ahemdabaad", 3, "11:45 Am", 1100, "First Class", origin, "FC025");
			}
			else if (classes == 2)
			{
				bt("Air India", "Ahemdabaad", 3, "11:45 Am", 1100, "Business Class", origin, "FC025");
			}
			else
			{
				bt("Air India", "Ahemdabaad", 3, "11:45 Am", 1100, "Economy Class", origin, "FC001");
			}
			break;
		case 3:
			if (classes == 1)
			{
				bt("Indigo", "Ahemdabaad", 11, "9:40 Am", 1500, "First Class", origin, "FC221");
			}
			else if (classes == 2)
			{
				bt("Indigo", "Ahemdabaad", 11, "9:40 Am", 1500, "Business Class", origin, "FC321");
			}
			else
			{
				bt("Indigo", "Ahemdabaad", 11, "9:40 Am", 1500, "Economy Class", origin, "FC210");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 2:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For Surat ");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight              Price       Available Seats       Time     \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.spicejet            2700            12               12:45 Pm \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Air Asia            2300             4               3:00 Pm  \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Air India Express   3500            10               8:45 Pm  \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("Spice Jet", "Surat", 12, "12:45 Am", 2700, "First Class", origin, "FC001");
			}
			else if (classes == 2)
			{
				bt("Spice Jet", "Surat", 12, "12:45 Am", 2700, "Business Class", origin, "FC001");
			}
			else
			{
				bt("Spice Jet", "Surat", 12, "12:45 Am", 2700, "Economy Class", origin, "FC451");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Air Asia", "Surat", 4, "3:00 Pm", 2300, "First Class", origin, "FC921");
			}
			else if (classes == 2)
			{
				bt("Air Asia", "Surat", 4, "3:00 Pm", 2300, "Business Class", origin, "FC5471");
			}
			else
			{
				bt("Air Asia", "Surat", 4, "3:00 Pm", 2300, "Economy Class", origin, "FC581");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Air India Express", "Surat", 10, "8:45 Pm", 3500, "First Class", origin, "FC234");
			}
			else if (classes == 2)
			{
				bt("Air India Express", "Surat", 10, "8:45 Pm", 3500, "Business Class", origin, "FC341");
			}
			else
			{
				bt("Air India Express", "Surat", 10, "8:45 Pm", 3500, "Economy Class", origin, "FC111");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 3:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For Mumbai");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight          Price      Available Seats	        Time     \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.Go Air          5500             5               10:00 Am  \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Vistara         4100             9               3:10  Pm  \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Alliance Air    3500             18              10:45 Pm  \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("Go Air", "Mumbai", 5, "10:00 Am", 5500, "First Class", origin, "FC421");
			}
			else if (classes == 2)
			{
				bt("Go Air", "Mumbai", 5, "10:00 Am", 5500, "Business Class", origin, "FC241");
			}
			else
			{
				bt("Go Air", "Mumbai", 5, "10:00 Am", 5500, "Economy Class", origin, "FC551");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Vistara", "Mumbai", 9, "3:10 Pm", 4100, "First Class", origin, "FC451");
			}
			else if (classes == 2)
			{
				bt("Vistara", "Mumbai", 9, "3:10 Pm", 4100, "Business Class", origin, "FC041");
			}
			else
			{
				bt("Vistara", "Mumbai", 9, "3:10 Pm", 4100, "Economy Class", origin, "FC951");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Alliance Air", "Mumbai", 18, "8:30 Pm", 3500, "First Class", origin, "FC651");
			}
			else if (classes == 2)
			{
				bt("Alliance Air", "Mumbai", 18, "8:30 Pm", 3500, "Business Class", origin, "FC521");
			}
			else
			{
				bt("Alliance Air", "Mumbai", 18, "8:30 Pm", 3500, "Economy Class", origin, "FC561");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 4:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For New Delhi ");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight               Price      Available Seats       Time      \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.True jet            4100            10               9:30  Am  \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Star Air            3500            7                2:15  Pm  \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Air India Express   2500            12               11:25 Pm  \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("True Jet", "New Delhi", 10, "9:30 Am", 4100, "First Class", origin, "FC921");
			}
			else if (classes == 2)
			{
				bt("True Jet", "New Delhi", 10, "9:30 Am", 4100, "Business Class", origin, "FC821");
			}
			else
			{
				bt("True Jet", "New Delhi", 10, "9:30 Am", 4100, "Economy Class", origin, "FC721");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Star Air", "New Delhi", 7, "2:15 Pm", 3500, "First Class", origin, "FC724");
			}
			else if (classes == 2)
			{
				bt("Star Air", "New Delhi", 7, "2:15 Pm", 3500, "Business Class", origin, "FC521");
			}
			else
			{
				bt("Star Air", "New Delhi", 7, "2:15 Pm", 3500, "Economy Class", origin, "FC725");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Air India Express", "New Delhi", 12, "11:25 Pm", 2500, "First Class", origin, "FC701");
			}
			else if (classes == 2)
			{
				bt("Air India Express", "New Delhi", 12, "11:25 Pm", 2500, "Business Class", origin, "FC921");
			}
			else
			{
				bt("Air India Express", "New Delhi", 12, "11:25 Pm", 2500, "Economy Class", origin, "FC621");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 5:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For Jaipur ");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight              Price      Available Seats          Time    \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.spice jet           3200            15               7:00  Am  \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Air Asia            2900             2               3:00  Pm  \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Air India Express   4500            12               10:30 Pm  \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("Spice jet", "Jaipur", 15, "7:00 Am", 3200, "First Class", origin, "FC751");
			}
			else if (classes == 2)
			{
				bt("Spice jet", "Jaipur", 15, "7:00 Am", 3200, "Business Class", origin, "FC321");
			}
			else
			{
				bt("Spice jet", "Jaipur", 15, "7:00 Am", 3200, "Economy Class", origin, "FC721");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Air Asia ", "Jaipur", 2, "3:00 Pm", 2900, "First Class", origin, "FC721");
			}
			else if (classes == 2)
			{
				bt("Air Asia ", "Jaipur", 2, "3:00 Pm", 2900, "Business Class", origin, "FC721");
			}
			else
			{
				bt("Air Asia ", "Jaipur", 2, "3:00 Pm", 2900, "Economy Class", origin, "FC721");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Air India Express", "Jaipur", 12, "10:30 Pm", 4500, "First Class", origin, "FC113");
			}
			else if (classes == 2)
			{
				bt("Air India Express", "Jaipur", 12, "10:30 Pm", 4500, "Business Class", origin, "FC113");
			}
			else
			{
				bt("Air India Express", "Jaipur", 12, "10:30 Pm", 4500, "Economy Class", origin, "FC113");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 6:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For Udaipur");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight          Price       Available Seats        Time     \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.Go Air          1800            12                7:30  Am \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Vistara         1400             4                12:30 Pm \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Alliance Air    2300             9                4:00 Pm  \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("Go Air", "Udaipur", 12, "7:30 Am", 1800, "First Class", origin, "FC118");
			}
			else if (classes == 2)
			{
				bt("Go Air", "Udaipur", 12, "7:30 Am", 1800, "Business Class", origin, "FC118");
			}
			else
			{
				bt("Go Air", "Udaipur", 12, "7:30 Am", 1800, "Economy Class", origin, "FC118");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Vistara", "Udaipur", 4, "12:30 Pm", 1400, "First Class", origin, "FC120");
			}
			else if (classes == 2)
			{
				bt("Vistara", "Udaipur", 4, "12:30 Pm", 1400, "Business Class", origin, "FC120");
			}
			else
			{
				bt("Vistara", "Udaipur", 4, "12:30 Pm", 1400, "Economy Class", origin, "FC120");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Alliance Air", "Udaipur", 9, "4:00 Pm", 2300, "First Class", origin, "FC920");
			}
			else if (classes == 2)
			{
				bt("Alliance Air", "Udaipur", 9, "4:00 Pm", 2300, "Business Class", origin, "FC920");
			}
			else
			{
				bt("Alliance Air", "Udaipur", 9, "4:00 Pm", 2300, "Economy Class", origin, "FC920");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 7:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For Bangalore ");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight              Price      Available Seats        Time     \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.spicejet            1200             16              9:00  Pm \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Air Asia            1100             8               9:45  Pm \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Air India Express   1500             4               11:05 Pm \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("Spice jet", "Bangalore", 25, "9:00 Pm", 4100, "First Class", origin, "FC520");
			}
			else if (classes == 2)
			{
				bt("Spice jet", "Bangalore", 25, "9:00 Pm", 4100, "Business Class", origin, "FC520");
			}
			else
			{
				bt("Spice jet", "Bangalore", 25, "9:00 Pm", 4100, "Economy Class", origin, "FC520");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Air Asia", "Bangalore", 25, "9:45 Pm", 3100, "First Class", origin, "FC525");
			}
			else if (classes == 2)
			{
				bt("Air Asia", "Bangalore", 25, "9:45 Pm", 3100, "Business Class", origin, "FC525");
			}
			else
			{
				bt("Air Asia", "Bangalore", 25, "9:45 Pm", 3100, "Economy Class", origin, "FC525");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Air India Express", "Bangalore", 25, "11:45 Pm", 3700, "First Class", origin, "FC535");
			}
			else if (classes == 2)
			{
				bt("Air India Express", "Bangalore", 25, "11:45 Pm", 3700, "Business Class", origin, "FC535");
			}
			else
			{
				bt("Air India Express", "Bangalore", 25, "11:45 Pm", 3700, "Economy Class", origin, "FC535");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 8:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For Hyderabad");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight          Price      Available Seats        Time     \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.Kingfisher     2300            15               8:30 Am   \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Air India      1800            3                11:40 Am  \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Indigo         3100            5                5:25 Pm   \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("Kingfisher", "Hyderabad", 15, "8:30 Am", 2300, "First Class", origin, "FC555");
			}
			else if (classes == 2)
			{
				bt("Kingfisher", "Hyderabad", 15, "8:30 Am", 2300, "Business Class", origin, "FC555");
			}
			else
			{
				bt("Kingfisher", "Hyderabad", 15, "8:30 Am", 2300, "Economy Class", origin, "FC555");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Air India", "Hyderabad", 3, "11:40 Am", 1800, "First Class", origin, "FC555");
			}
			else if (classes == 2)
			{
				bt("Air India", "Hyderabad", 3, "11:40 Am", 1800, "Business Class", origin, "FC555");
			}
			else
			{
				bt("Air India", "Hyderabad", 3, "11:40 Am", 1800, "Economy Class", origin, "FC555");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Indigo", "Hyderabad", 5, "5:25 Pm", 3100, "First Class", origin, "FC555");
			}
			else if (classes == 2)
			{
				bt("Indigo", "Hyderabad", 5, "5:25 Pm", 3100, "Business Class", origin, "FC555");
			}
			else
			{
				bt("Indigo", "Hyderabad", 5, "5:25 Pm", 3100, "Economy Class", origin, "FC555");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 9:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For Chennai ");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight               Price      Available Seats        Time     \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.Spice jet           2900            5                6:30 Am   \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Star Air            2300            7                2:15 Pm   \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Air India Express   1500            10               10:45 Pm  \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("Spice jet", "Chennai", 5, "6:30 Am", 2900, "First Class", origin, "FC505");
			}
			else if (classes == 2)
			{
				bt("Spice jet", "Chennai", 5, "6:30 Am", 2900, "Business Class", origin, "FC505");
			}
			else
			{
				bt("Spice jet", "Chennai", 5, "6:30 Am", 2900, "Economy Class", origin, "FC505");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Star Air", "Chennai", 7, "2:15 Pm", 2300, "First Class", origin, "FC905");
			}
			else if (classes == 2)
			{
				bt("Star Air", "Chennai", 7, "2:15 Pm", 2300, "Business Class", origin, "FC905");
			}
			else
			{
				bt("Star Air", "Chennai", 7, "2:15 Pm", 2300, "Economy Class", origin, "FC905");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Air India Express", "Chennai", 10, "10:45 Pm", 1500, "First Class", origin, "FC955");
			}
			else if (classes == 2)
			{
				bt("Air India Express", "Chennai", 10, "10:45 Pm", 1500, "Business Class", origin, "FC955");
			}
			else
			{
				bt("Air India Express", "Chennai", 10, "10:45 Pm", 1500, "Economy Class", origin, "FC955");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	case 10:

		gotoxy(8, 12);
		textcolor(14);
		cprintf("\nAvailable Flights For Kolkata ");
		gotoxy(8, 14);
		textcolor(14);
		cprintf("\n    Flight               Price      Available Seats       Time     \n");
		gotoxy(8, 15);
		textcolor(14);
		cprintf("     1.True jet            2200            14               9:30 Am  \n");
		gotoxy(8, 16);
		textcolor(14);
		cprintf("     2.Air India           3100            9                1:00 Pm  \n");
		gotoxy(8, 17);
		textcolor(14);
		cprintf("     3.Air India Express   4500            11               8:30 Pm  \n");
		printf("\n");
		gotoxy(12, 19);
		textcolor(14);
		cprintf("\nChoose Airline : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			if (classes == 1)
			{
				bt("True jet", "Kolkata", 14, "9:30 Am", 2200, "First Class", origin, "FC855");
			}
			else if (classes == 2)
			{
				bt("True jet", "Kolkata", 14, "9:30 Am", 2200, "Business Class", origin, "FC855");
			}
			else
			{
				bt("True jet", "Kolkata", 14, "9:30 Am", 2200, "Economy Class", origin, "FC855");
			}

			break;
		case 2:
			if (classes == 1)
			{
				bt("Air India", "Kolkata", 9, "1:00 Pm", 3100, "First Class", origin, "FC890");
			}
			else if (classes == 2)
			{
				bt("Air India", "Kolkata", 9, "1:00 Pm", 3100, "Business Class", origin, "FC890");
			}
			else
			{
				bt("Air India", "Kolkata", 9, "1:00 Pm", 3100, "Economy Class", origin, "FC890");
			}

			break;
		case 3:
			if (classes == 1)
			{
				bt("Air India Express", "Kolkata", 11, "8:30 Pm", 4500, "First Class", origin, "FC490");
			}
			else if (classes == 2)
			{
				bt("Air India Express", "Kolkata", 11, "8:30 Pm", 4500, "Business Class", origin, "FC490");
			}
			else
			{
				bt("Air India Express", "Kolkata", 11, "8:30 Pm", 4500, "Economy Class", origin, "FC490");
			}

			break;
		default:
			gotoxy(12, 20);
			textcolor(14);
			cprintf("Invalid Option Selected ...");
			getch();
			system("cls");
			available_flight();
		}
		break;

	default:
		if (select < 1 || select > 10)
		{
			e++;
			gotoxy(14, 16);
			textcolor(4 + BLINK);
			cprintf("In valid option selected ! ");
			getch();
			if (e < 2)
			{
				goto l;
			}
			else
			{
				gotoxy(14, 16);
				textcolor(4);
				cprintf("You have");
				gotoxy(23, 16);
				textcolor(4 + BLINK);
				cprintf("Crossed limit  ");
				getch();
				system("cls");
				wc();
			}
		}
	}
}

void search_flight(char aim[])
{
	int c;

	_setcursortype(_NOCURSOR);

	if (strcmp(aim, "Ahemdabaad") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Surat") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Mumbai") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "New Delhi") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Jaipur") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Udaipur") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Bangalore") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Hyderabad") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Chennai") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Kolkata") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("%s City is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Kingfisher") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Air India") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Indigo") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "spicejet") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Go Air") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Vistara") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Alliance Air") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Air Asia") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Air India Express") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "Star Air") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else if (strcmp(aim, "True jet") == 0)
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("Airline : %s is available ", aim);
		gotoxy(18, 22);
		textcolor(12);
		cprintf("Press 1 To Book Ticket ");
		gotoxy(18, 23);
		textcolor(12);
		cprintf("Press 2 for Main Menu  ");
		scanf("%d", &c);

		if (c == 1)
		{
			available_flight();
		}

		else if (c == 2)
		{
			system("cls");
			wc();
			option();
		}
		getch();
	}

	else
	{
		gotoxy(18, 20);
		textcolor(12);
		cprintf("\n  Sorry ! Airline or City Not Avialable");
		getch();
	}
}

void ex()
{
	printf("Exited Successfully......");
	exit();
}

void wc()
{
	int i, j;
	_setcursortype(_NOCURSOR);
	clrscr();

	for (i = 2, j = 2; i < rw; j++)
	{
		if (j > 15)
			j = 2;
		textcolor(j);
		gotoxy(i, 2);
		cprintf("%c", 15);
		gotoxy(i, cl - 1);
		cprintf("%c", 15);
		i++;
	}
	for (i = 2, j = 2; i < cl; i++, j++)
	{
		if (j > 15)
			j = 2;
		textcolor(j);
		gotoxy(2, i);
		cprintf("%c", 15);
		gotoxy(rw - 1, i);
		cprintf("%c", 15);
	}

	gotoxy(30, 4);
	textcolor(3);
	cprintf("Flight Booking System\n");
	gotoxy(19, 6);
	textcolor(6);
	cprintf("||=======================================||\n");
	gotoxy(19, 7);
	textcolor(6);
	cprintf("||     Welcome                           || \n");
	gotoxy(19, 8);
	textcolor(6);
	cprintf("||              to                       || \n");
	gotoxy(19, 9);
	textcolor(6);
	cprintf("||                 Flight Booking System ||\n");
	gotoxy(19, 10);
	textcolor(6);
	cprintf("||=======================================||\n");
}

void option()
{
	int ch;
	_setcursortype(_NOCURSOR);

	do
	{
		gotoxy(17, 11);
		textcolor(10);
		cprintf("\n     Please Select any one Option    ");
		gotoxy(17, 12);
		textcolor(10);
		cprintf("\n     1.Check Available Fights        ");
		gotoxy(17, 13);
		textcolor(10);
		cprintf("\n     2.Search Flight                 ");
		gotoxy(17, 14);
		textcolor(10);
		cprintf("\n     3.Show Booked Tickets           ");
		gotoxy(17, 15);
		textcolor(10);
		cprintf("\n     4.Help                          ");
		gotoxy(17, 16);
		textcolor(10);
		cprintf("\n     5.About Us                      ");
		gotoxy(17, 17);
		textcolor(10);
		cprintf("\n     6.Exit                        \n");

		gotoxy(17, 19);
		textcolor(11);
		cprintf("\nChoose Option  -> ");
		gotoxy(35, 20);
		textcolor(11);
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			available_flight();
			break;
		case 2:
			search();
			break;
		case 3:
			show();
			break;
		case 4:
			help();
			break;
		case 5:
			about();
			break;
		case 6:
			ex();
			break;
		default:
			gotoxy(19, 22);
			textcolor(12);
			cprintf("Please Select Right  Option ! ");
		}
	} while (ch != 0);
}

void main()
{
	int e = 0, i;
	char us[20], pw[10], ch;
	char u[6] = "parul", p[6] = "parul";
	_setcursortype(_NOCURSOR);
	clrscr();
	anim();
	logo();

ek:
	_setcursortype(_NOCURSOR);
	gotoxy(30, 4);
	textcolor(11);
	cprintf("Flight Booking System\n");
	gotoxy(19, 6);
	textcolor(11);
	cprintf("||=======================================||\n");
	gotoxy(19, 7);
	textcolor(11);
	cprintf("||     Welcome                           || \n");
	gotoxy(19, 8);
	textcolor(11);
	cprintf("||              to                       || \n");
	gotoxy(19, 9);
	textcolor(11);
	cprintf("||                 Flight Booking System ||\n");
	gotoxy(19, 10);
	textcolor(11);
	cprintf("||=======================================||\n");
	do
	{
		gotoxy(15, 13);
		textcolor(4);
		cprintf("Enter Username : ");
		scanf("%s", &us);

		gotoxy(15, 14);
		textcolor(5);
		cprintf("Enter Password : ");

		for (i = 0; i < 5; i++)
		{
			ch = getch();
			pw[i] = ch;
			ch = '*';
			textcolor(5);
			cprintf("%c", ch);
		}
		pw[i] = '\0';

		if (strcmp(u, us) == 0 && strcmp(p, pw) == 0)
		{
			system("cls");
			wc();
			option();
		}
		else
		{
			gotoxy(19, 17);
			textcolor(10 + BLINK);
			cprintf("Password is incorrect :( Try Again :)");
			getch();
			system("cls");
			e++;
			if (e <= 2)
			{
				goto ek;
			}
			else
			{
				_setcursortype(_NOCURSOR);
				gotoxy(30, 4);
				textcolor(11);
				cprintf("Flight Booking System\n");
				gotoxy(19, 6);
				textcolor(11);
				cprintf("||=======================================||\n");
				gotoxy(19, 7);
				textcolor(11);
				cprintf("||     Welcome                           || \n");
				gotoxy(19, 8);
				textcolor(11);
				cprintf("||              to                       || \n");
				gotoxy(19, 9);
				textcolor(11);
				cprintf("||                 Flight Booking System ||\n");
				gotoxy(19, 10);
				textcolor(11);
				cprintf("||=======================================||\n");

				gotoxy(18, 20);
				textcolor(4);
				cprintf("sorry! ");
				gotoxy(25, 20);
				textcolor(4);
				for (i = 0; i < 7; i++)
				{
					cprintf(".");
					delay(350);
				}
				gotoxy(33, 20);
				textcolor(4 + BLINK);
				cprintf("You Have Crossed The Limit");
			}
		}
	} while (e <= 2);

	// textcolor(11+BLINK);
	getch();
}
