#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define WIDTH 80
#define HEIGHT 25

void Position(int x, int y)
{
    //x축과 y축을 설정
    COORD position = { x, y };

    // 커서 위치를 이동하는 함수
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
    char key = 0; // up : 72 left : 75 right : 77 down : 80

    int x = 0;
    int y = 0;

    while (1)
    {
        Position(x, y);
        printf("★");

        key = _getch();

        if (key == -32)
        {
            key = _getch();
        }

        switch (key)
        {
        case UP:
            if (y > 0) y--; // y가 0 미만으로 가는 것을 방지
            break;
        case LEFT:
            if (x > 0) x -= 2; // x가 0 미만으로 가는 것을 방지
            break;
        case RIGHT:
            if (x < WIDTH - 2) x += 2; // x가 콘솔 창의 오른쪽 끝을 넘어가지 않도록 방지
            break;
        case DOWN:
            if (y < HEIGHT - 1) y++; // y가 콘솔 창의 아래쪽 끝을 넘어가지 않도록 방지
            break;
        default:
            printf("Exception\n");
            break;
        }

        system("cls");
    }

    return 0;
}




#pragma region 별 가두기
// #include <stdio.h>
// #include <conio.h>
// #include <windows.h>
// 
// #define UP 72
// #define LEFT 75
// #define RIGHT 77
// #define DOWN 80
// 
// #define WIDTH 80
// #define HEIGHT 25
// 
// void Position(int x, int y)
// {
//     //x축과 y축을 설정
//     COORD position = { x, y };
// 
//     // 커서 위치를 이동하는 함수
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
// }
// 
// int main()
// {
//     char key = 0; // up : 72 left : 75 right : 77 down : 80
// 
//     int x = 0;
//     int y = 0;
// 
//     while (1)
//     {
//         Position(x, y);
//         printf("★");
// 
//         key = _getch();
// 
//         if (key == -32)
//         {
//             key = _getch();
//         }
// 
//         int newX = x;
//         int newY = y;
// 
//         switch (key)
//         {
//         case UP:
//             newY = y - 1; // 새로운 y 좌표 계산
//             break;
//         case LEFT:
//             newX = x - 2; // 새로운 x 좌표 계산
//             break;
//         case RIGHT:
//             newX = x + 2; // 새로운 x 좌표 계산
//             break;
//         case DOWN:
//             newY = y + 1; // 새로운 y 좌표 계산
//             break;
//         default:
//             printf("Exception\n");
//             break;
//         }
// 
//         // 유효한 좌표인지 확인
//         if (newX >= 0 && newX < WIDTH - 2 && newY >= 0 && newY < HEIGHT - 1)
//         {
//             x = newX;  // 유효한 경우에만 x 좌표 업데이트
//             y = newY;  // 유효한 경우에만 y 좌표 업데이트
//         }
// 
//         system("cls");
//     }
// 
//     return 0;
// }
#pragma endregion
