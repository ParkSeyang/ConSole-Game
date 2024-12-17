#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int screenIndex;
HANDLE screen[2];

void Initialize()
{
	CONSOLE_CURSOR_INFO cursor;

	//화면 버터를 2개 생성합니다.
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	cursor.dwSize = 1;
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);

}

void Flip()
{
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	screenIndex = !screenIndex;

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

	FillConsoleOutputCharacter(screen[screenIndex], ' ', Width * Height, position, &dword);


}

void Release()
{
	CloseHandle(screen[0]);
	CloseHandle(screen[1]);
}
void Render(int x, int y, const char* shape)
{
	DWORD dword;

	//x축과 y축을 설정
	COORD position = { x, y };


	// 커서 위치를 이동하는 함수
	SetConsoleCursorPosition(screen[screenIndex], position);

	WriteFile(screen[screenIndex], shape, strlen(shape), &dword, NULL);
}



int main()
{
	char key = 0; // up : 72 left : 75 right : 77 down : 80

	int x = 0;
	int y = 0;

	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(handle, &consoleInfo);


	Initialize();


	while (1)
	{
		Flip();

		Clear();

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

			case UP: if (y > 0) y--;
				//printf("↑\n"); 
				break;
			case LEFT: if (x > 0) x -= 2;
				//printf("←\n"); 
				break;
			case RIGHT: if (consoleInfo.srWindow.Right - 1 > x)x += 2;
				//printf("→\n"); 
				break;
			case DOWN: if (consoleInfo.srWindow.Bottom > y)y++;
				//printf("↓\n"); 
				break;
			default: printf("Exception\n");
				break;

			}

		}

		Render(x, y, "★");

	}

	Release();

	return 0;
}