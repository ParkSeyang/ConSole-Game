#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5

void shuffle(int array[])
{
	for (int i = 0; i < SIZE; i++)
	{
		int random = rand() % SIZE;

		int replay = array[random];
		array[random] = array[i];
		array[i] = replay;
	}
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
	
	int list[SIZE] = {1,2,3,4,5};

	srand(time(NULL));

	shuffle(list, SIZE);

	
	for (int i = 0; i < SIZE; i++)
	{
		printf("셔플 : %d\n", list[i]);
	}

#pragma endregion


	
	return 0;
}