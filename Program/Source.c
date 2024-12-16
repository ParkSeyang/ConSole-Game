#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int sreenIndex;
HANDLE sreen[2];

void Initialize()
{
	CONSOLE_CURSOR_INFO cursor;

	//화면 버터를 2개 생성합니다.
	sreen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	sreen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	cursor.dwSize = 1;
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(sreen[0], &cursor);
	SetConsoleCursorInfo(sreen[1], &cursor);

}

void Flip()
{
	SetConsoleActiveScreenBuffer(sreen[sreenIndex]);

	sreenIndex = !sreenIndex;
	
}

void Clear()
{
	COORD position = { 0,0 };

	DWORD dword;

	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(handle, &consoleInfo);

	int Width = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
	int Height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;

	FillConsoleOutputCharacter(sreen[sreenIndex], ' ', Width * Height, position, &dword);


}

void Position(int x, int y)
{
	//x축과 y축을 설정
	COORD position = {x, y};


	// 커서 위치를 이동하는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char key = 0; // up : 72 left : 75 right : 77 down : 80

	int x = 0;
	int y = 0;
	
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(handle, &consoleInfo);



	// printf("%d\n", consoleInfo.srWindow.Right);

	while (1)
	{
		
		Position(x, y);
		
		printf("★");

		if (_kbhit)
		{
			key = _getch();

	    if (key == -32)
	    {
	    	key = _getch();
	    }

		switch (key)
		{

		case UP: if(y > 0) y--;
			//printf("↑\n"); 
			break;
		case LEFT: if(x > 0) x -= 2;
			//printf("←\n"); 
			break;
		case RIGHT: if(consoleInfo.srWindow.Right - 1 >x)x += 2;
			//printf("→\n"); 
			break;
		case DOWN: if(consoleInfo.srWindow.Bottom > y)y ++;
			//printf("↓\n"); 
			break;
		default: printf("Exception\n");
			break;

		}
		
		}

	  system("cls");

	}


	

	

	return 0;
}