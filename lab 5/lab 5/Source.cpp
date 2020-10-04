#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
int x = 56, y = 20, autoLeft = 0, autoRight = 0;
int krasoonCheck = 0, bulletX, bulletY, ammo = 5, currentCheck = 0;
void setcolor(int fg, int bg)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}
void draw_ship(int x, int y)
{
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	setcolor(3, 5);
	printf("<-0->");
}
void erase_ship(int x, int y)
{
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	setcolor(4, 0);
	printf("     ");
}
void setcursor(bool visible)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}
void shoot(int xx, int yy)
{
	if (yy >= 1) {
		COORD c = { xx + 2,yy - 1 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("*");
	}
	bulletY--;
}
int main()
{
	setcursor(0);
	char ch = ' ';
	int shootcheck = 0, sx, sy;
	draw_ship(x, y);
	do
	{
		if (_kbhit())
		{
			ch = _getch();
			if (ch == 'a')
			{
				if (x >= 1)
				{
					autoLeft = 1;
					autoRight = 0;
					erase_ship(x, y);
					draw_ship(--x, y);	
					
				}
			}
			if (ch == 'd')
			{
				if (x < 100)
				{
					autoRight = 1;
					autoLeft = 0;
					erase_ship(x, y);
					draw_ship(++x, y);
					
				}
			}
			
			if (ch == ' ')
			{
				if (!krasoonCheck)
				{
					bulletX = x;
					bulletY = y;
					krasoonCheck = 1;
				}
			}
			fflush(stdin);
		}
		if (autoLeft && x >= 1)
		{
			erase_ship(x, y);
			draw_ship(--x, y);
		}
		if (autoRight && x < 105)
		{
			erase_ship(x, y);
			draw_ship(++x, y);
		}
		if (krasoonCheck && ammo > 0)
		{
			if (bulletY >= 0)
			{
				if (bulletY != 20)
					erase_ship(bulletX, bulletY);
				if (bulletY > 0)
					shoot(bulletX, bulletY);
				else
				{
					erase_ship(bulletX, bulletY);
					krasoonCheck = 0;
					ammo--;
				}
			}
		}
		Sleep(100);
	} while (ch != 'x');
	return 0;
}