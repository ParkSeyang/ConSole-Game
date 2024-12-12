#include<stdio.h>
#include<stdlib.h>
#include<time.h>


// void shuffle(int array[])
// {
// 	for (int i = 0; i < SIZE; i++)
// 	{
// 		int random = rand() % SIZE;
// 
// 		int replay = array[random];
// 		array[random] = array[i];
// 		array[i] = replay;
// 	}
// }

void View(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("♥");
	}
	printf("\n");
}


int main()
{
	
#pragma region rand() 함수
	
	// //seed 값에 따라서 rand의 값이 바뀌게 됩니다.
	// srand(time(NULL));
	 
	// int random = rand() % 10 + 1;
	 
	 
	// printf("random 변수의 값 : %d\n", random);
	 


#pragma endregion

#pragma region 셔플 함수
	
	// int list[SIZE] = {1,2,3,4,5};
	// 
	// srand(time(NULL));
	// 
	// shuffle(list, SIZE);
	// 
	// 
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	printf("셔플 : %d\n", list[i]);
	// }

#pragma endregion

#pragma region localtime() 함수
   //
 	// time_t currentTime = 0;
   //
 	// time (&currentTime);
   //
 	// struct tm* timePointer = localtime(&currentTime);
	// 
	// printf("%d 년 \n", timePointer->tm_year+1900);
	// 
	// printf("%d 월 \n", timePointer->tm_mon+1);
   //
 	// printf("%d 일 \n", timePointer->tm_mday);
   //
 	// printf("%d 요일\n", timePointer->tm_wday);
   //
 	// printf("%d 시 \n", timePointer->tm_hour);
   //
 	// printf("%d 분 \n", timePointer->tm_min);
   //
 	// printf("%d 초 \n", timePointer->tm_sec);
   //
    //
 	// switch (timePointer ->tm_wday)
	// {
	// case 0: printf("일요일");
	// break;
	// 
	// case 1: printf("월요일");
	// break;
	// 
	// case 2: printf("화요일");
	// break;
	// 
	// case 3: printf("수요일");
	// break;
	// 
	// case 4: printf("목요일");
	// break;
	// 
	// case 5: printf("금요일");
	// break;
	// 
	// case 6: printf("토요일");
	// break;
	// }
   //
 

#pragma endregion

#pragma region UP - DOWN GAME
	// 1. 컴퓨터가 1~50 사이의 값을 가집니다.
	// 2. 사용자가 컴퓨터가 가지고있는 값을 입력합니다.
	// - 틀렸을때 컴퓨터가 가지고있는 값보다 작다면
	// *health 를 1씩감소후 힌트 출력(값보다작습니다.)
	// 클경우 health 를 1씩감소후 힌트출력 (값이크다)
	
	srand(time(NULL));

	int health = 5;

	int answer = 0;

	int computer = rand() % 50 + 1;
	   
	printf("Game Start");
	
	
	while (health > 0)
	{
		printf("Computer가 가지고 있는 값 :");
		
		scanf_s("%d", &answer);

		printf("체력 : ");
		View(health);

		if (answer == computer)
		{
			printf("\nV I C T O R Y \n");
			break;
		}
		else if (answer < computer)
		{
			printf("Computer가 가지고 있는 값보다 작습니다.\n");
			
			health--;
		}
		else if (answer > computer)
		{
			printf("Computer가 가지고 있는 값보다 큽니다.\n");

			health--;
		}

		printf("\n");
	}
	if (health <= 0)
	{
		printf("\nD E F E A T \n");
	}

#pragma endregion

	
	return 0;
}