#include <stdio.h>
#include <windows.h>
enum State
{
	IDLE,
	ATTACK,
	DIE

	// 열거형은 
	// 열거형에서 중간에 있는 상수의 값을 변경하게되면
	// 그다음에 있는 상수의 값이 변경된 값에서 부터 1씩 증가합니다.
};



int main()
{
#pragma region 열거형
	// 고유한 상수 값에 연결된 기호 이름의
	// 집합입니다.

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

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		

	printf("BLACK\n",);



#pragma endregion


	return 0;
}