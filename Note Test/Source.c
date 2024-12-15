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
    //x��� y���� ����
    COORD position = { x, y };

    // Ŀ�� ��ġ�� �̵��ϴ� �Լ�
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
        printf("��");

        key = _getch();

        if (key == -32)
        {
            key = _getch();
        }

        switch (key)
        {
        case UP:
            if (y > 0) y--; // y�� 0 �̸����� ���� ���� ����
            break;
        case LEFT:
            if (x > 0) x -= 2; // x�� 0 �̸����� ���� ���� ����
            break;
        case RIGHT:
            if (x < WIDTH - 2) x += 2; // x�� �ܼ� â�� ������ ���� �Ѿ�� �ʵ��� ����
            break;
        case DOWN:
            if (y < HEIGHT - 1) y++; // y�� �ܼ� â�� �Ʒ��� ���� �Ѿ�� �ʵ��� ����
            break;
        default:
            printf("Exception\n");
            break;
        }

        system("cls");
    }

    return 0;
}




#pragma region �� ���α�
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
//     //x��� y���� ����
//     COORD position = { x, y };
// 
//     // Ŀ�� ��ġ�� �̵��ϴ� �Լ�
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
//         printf("��");
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
//             newY = y - 1; // ���ο� y ��ǥ ���
//             break;
//         case LEFT:
//             newX = x - 2; // ���ο� x ��ǥ ���
//             break;
//         case RIGHT:
//             newX = x + 2; // ���ο� x ��ǥ ���
//             break;
//         case DOWN:
//             newY = y + 1; // ���ο� y ��ǥ ���
//             break;
//         default:
//             printf("Exception\n");
//             break;
//         }
// 
//         // ��ȿ�� ��ǥ���� Ȯ��
//         if (newX >= 0 && newX < WIDTH - 2 && newY >= 0 && newY < HEIGHT - 1)
//         {
//             x = newX;  // ��ȿ�� ��쿡�� x ��ǥ ������Ʈ
//             y = newY;  // ��ȿ�� ��쿡�� y ��ǥ ������Ʈ
//         }
// 
//         system("cls");
//     }
// 
//     return 0;
// }
#pragma endregion
