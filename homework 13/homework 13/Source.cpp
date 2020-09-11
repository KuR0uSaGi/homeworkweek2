#include<stdio.h>
#include<windows.h>
#include<conio.h>
void draw_ship(int x, int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf(" -<<-0->>- ");
}
void erase_ship(int x, int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("          ");
}
void draw_ship2(int x1, int y1)
{
    COORD c = { x1, y1 };
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf(" -<<-0->>- ");
}
void erase_ship2(int x1, int y1)
{
    COORD c = { x1, y1 };
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("          ");
}
int main()
{
    char ch = ' ';
    int x = 0, y = 4;
    int x1 = 0, y1 = 10;
    draw_ship(x, y);
    draw_ship2(x1, y1);
    do {
        if (_kbhit()) {
            ch = _getch();
            if (ch == 'a')
            {
                if (x == 0)
                {
                    draw_ship(++x, y);
                }

                draw_ship(--x, y);
            }
            if (ch == 'd')
            {

                if (x >= 109)
                {

                    draw_ship(x--, y);
                }
                draw_ship(++x, y);
            }
            if (ch == 'w')
            {
                if (y == 0)
                {
                    erase_ship(x, y);
                    draw_ship(x, ++y);
                }
                erase_ship(x, y);
                draw_ship(x, --y);

            }
            if (ch == 's')
            {

                if (y >= 29)
                {
                    erase_ship(x, y);
                    draw_ship(x, --y);
                }
                erase_ship(x, y);
                draw_ship(x, ++y);
            }
            if (ch == 'j')
            {
                if (x1 == 0)
                {
                    draw_ship2(++x1, y1);
                }

                draw_ship2(--x1, y1);
            }
            if (ch == 'l')
            {

                if (x1 >= 109)
                {

                    draw_ship2(x1--, y1);
                }
                draw_ship2(++x1, y1);
            }
            if (ch == 'i')
            {
                if (y1 == 0)
                {
                    erase_ship2(x1, y1);
                    draw_ship2(x1, ++y1);
                }
                erase_ship2(x1, y1);
                draw_ship2(x1, --y1);

            }
            if (ch == 'k')
            {

                if (y1 >= 29)
                {
                    erase_ship2(x1, y1);
                    draw_ship2(x1, --y1);
                }
                erase_ship2(x1, y1);
                draw_ship2(x1, ++y1);
            }
            fflush(stdin);
        }
        Sleep(100);
    } while (ch != 'x');
    
    return 0;
}