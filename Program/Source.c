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
	
#pragma region rand() �Լ�
	
	// //seed ���� ���� rand�� ���� �ٲ�� �˴ϴ�.
	// srand(time(NULL));
	 
	// int random = rand() % 10 + 1;
	 
	 
	// printf("random ������ �� : %d\n", random);
	 


#pragma endregion

#pragma region ���� �Լ�
	
	int list[SIZE] = {1,2,3,4,5};

	srand(time(NULL));

	shuffle(list, SIZE);

	
	for (int i = 0; i < SIZE; i++)
	{
		printf("���� : %d\n", list[i]);
	}

#pragma endregion


	
	return 0;
}