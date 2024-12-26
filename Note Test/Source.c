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
 
         // switch 문을 이용한 영역 제한 방법
         // 장점 : switch문 내에서 조건문 사용은 코드가 간단할 때는 직관적일수 있다.
         // 단점 : 코드가 확장되거나 수정이 필요할 경우 관리가 어려워질 수 있다.

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

#pragma region x, y 값 영역제한
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

#pragma region x,y 값 영역제한 (2)
// #include <stdio.h>
// #include <conio.h>
// #include <windows.h>
// 
// #define UP 72
// #define LEFT 75
// #define RIGHT 77
// #define DOWN 80
// 
// #define MAX_X 78
// #define MAX_Y 24
// 
//  // 경계값 로직을 함수로 분리하는 방법
// 
//  장점 : 가독성이 좋고 유지보수성이 좋다.
//  
// void boundaries(int* x, int* y)
// {
// 	if (*x < 0) *x = 0;
// 	if (*x > MAX_X)*x = MAX_X;
// 	if (*y < 0)*y = 0;
// 	if (*y > MAX_Y)*y = MAX_Y;
// }
// 
// void Position(int x, int y)
// {
// 	//x축과 y축을 설정
// 	COORD position = { x, y };
// 
// 
// 	// 커서 위치를 이동하는 함수
// 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
// }
// 
// int main()
// {
// 	char key = 0; // up : 72 left : 75 right : 77 down : 80
// 
// 	int x = 0;
// 	int y = 0;
// 
// 	while (1)
// 	{
// 
// 		Position(x, y);
// 
// 		printf("★");
// 
// 
// 		key = _getch();
// 
// 
// 		if (key == -32)
// 		{
// 			key = _getch();
// 		}
// 
// 		switch (key)
// 		{
// 
// 		case UP: y--;
// 			//printf("↑\n"); 
// 			break;
// 		case LEFT: x -= 2;
// 			//printf("←\n"); 
// 			break;
// 		case RIGHT: x += 2;
// 			//printf("→\n"); 
// 			break;
// 		case DOWN: y++;
// 			//printf("↓\n"); 
// 			break;
// 		default: printf("Exception\n");
// 			break;
// 
// 		}
// 
// 		boundaries(&x, &y);
// 
// 		system("cls");
// 
// 	}
// 
// 
// 
// 
// 
// 
// 	return 0;
// }
#pragma endregion

