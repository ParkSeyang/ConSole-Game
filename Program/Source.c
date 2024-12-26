#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224


void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}
int x = 30;
int y = 7;

int main()
{
	CursorView(0);
	GotoXY(x, y);
	printf("")


}