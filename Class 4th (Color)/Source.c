#include <stdio.h>
#include <windows.h>
enum State
{
	IDLE,
	ATTACK,
	DIE

	// 열거형 상수에서 목록 첫 상수의 기본값은 0이고, 다음부터 1씩 
	// 증가하는 방식으로 상수값이 자동으로 부여된다.

	// 열거형에서 중간에 있는 상수의 값을 변경하게되면
	// 그다음에 있는 상수의 값이 변경된 값에서 부터 1씩 증가합니다.
};

enum Color
{
	BLACK,
	DARKBLUE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKPURPLE,
	DARKYELLOW,
	GRAY,
	DARKGRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	PURPLE,
	YELLOW,
	WHITE

} COLOR;

int main()
{
#pragma region 열거형 상수
	// 고유한 상수 값에 연결된 기호 이름의
	// 집합입니다.

	// 열거형 상수는 키워드 enum을 사용하여 정수형 상수 목록 집합을 정의하는 자료형이다
	// enum 이후에 열거형 태그명을 적고, 중괄호를 사용해 열거형 정수 상수 목록을 쉼표로 분리하여 적는다
	// 정의된 열거형 상수는 새로운 자료형으로 사용할 수도 있다

	// enum State state = IDLE;
	// 
	//  switch (state)
	//  {
	//  case IDLE: printf("대기상태\n");
	//  	break;
	//  case ATTACK: printf("공격상태\n");
	//  	break;
	//  case DIE: printf("죽음상태\n");
	//  	break;
	//  default: printf("알수없습니다.\n");
	//  	break;
	//  }

#pragma endregion


#pragma region 색상
		// 0 BLACK
		// 1 DARK BLUE
		// 2 DARK GREEN
		// 3 DARK SKY BLUE
		// 4 DARK RED
		// 5 DARK PURPLE
		// 6 DARK YELLOW
		// 7 GRAY
		// 8 DARK GRAY
		// 9 BLUE
		// 10 GREEN
		// 11 SKY BLUE
		// 12 RED
		// 13 PURPLE
		// 14 YELLOW
		// 15 WHITE

		// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);

	 // while 문을 활용한 색이 무한 반복 되는 예제

	 // int count = 0;
	 // 
	 // while (1)
	 // {
	 // 	count = count + 1;
	 // 
	 // 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), count % 15);
	 // 
	 // 	printf("GYM\n");
	 // 
	//	 system("pause");
	 // 
	 // 	system("cls");
	 // 
	 // }

	// for 문을 통한 15가지 색이 다나올때까지 반복하는 예제

	// 	int i;
	//  
	//  for (i=0; i < 15; i++)
	//  {
	//  	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
	//  
	//  	printf("빨주노초파남보\n");
	//  }




#pragma endregion


	return 0;
}