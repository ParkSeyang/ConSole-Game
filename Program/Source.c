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
		printf("��");
	}
	printf("\n");
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
	
	// int list[SIZE] = {1,2,3,4,5};
	// 
	// srand(time(NULL));
	// 
	// shuffle(list, SIZE);
	// 
	// 
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	printf("���� : %d\n", list[i]);
	// }

#pragma endregion

#pragma region localtime() �Լ�
   //
 	// time_t currentTime = 0;
   //
 	// time (&currentTime);
   //
 	// struct tm* timePointer = localtime(&currentTime);
	// 
	// printf("%d �� \n", timePointer->tm_year+1900);
	// 
	// printf("%d �� \n", timePointer->tm_mon+1);
   //
 	// printf("%d �� \n", timePointer->tm_mday);
   //
 	// printf("%d ����\n", timePointer->tm_wday);
   //
 	// printf("%d �� \n", timePointer->tm_hour);
   //
 	// printf("%d �� \n", timePointer->tm_min);
   //
 	// printf("%d �� \n", timePointer->tm_sec);
   //
    //
 	// switch (timePointer ->tm_wday)
	// {
	// case 0: printf("�Ͽ���");
	// break;
	// 
	// case 1: printf("������");
	// break;
	// 
	// case 2: printf("ȭ����");
	// break;
	// 
	// case 3: printf("������");
	// break;
	// 
	// case 4: printf("�����");
	// break;
	// 
	// case 5: printf("�ݿ���");
	// break;
	// 
	// case 6: printf("�����");
	// break;
	// }
   //
 

#pragma endregion

#pragma region UP - DOWN GAME
	// 1. ��ǻ�Ͱ� 1~50 ������ ���� �����ϴ�.
	// 2. ����ڰ� ��ǻ�Ͱ� �������ִ� ���� �Է��մϴ�.
	// - Ʋ������ ��ǻ�Ͱ� �������ִ� ������ �۴ٸ�
	// *health �� 1�������� ��Ʈ ���(�������۽��ϴ�.)
	// Ŭ��� health �� 1�������� ��Ʈ��� (����ũ��)
	
	srand(time(NULL));

	int health = 5;

	int answer = 0;

	int computer = rand() % 50 + 1;
	   
	printf("Game Start");
	
	
	while (health > 0)
	{
		printf("Computer�� ������ �ִ� �� :");
		
		scanf_s("%d", &answer);

		printf("ü�� : ");
		View(health);

		if (answer == computer)
		{
			printf("\nV I C T O R Y \n");
			break;
		}
		else if (answer < computer)
		{
			printf("Computer�� ������ �ִ� ������ �۽��ϴ�.\n");
			
			health--;
		}
		else if (answer > computer)
		{
			printf("Computer�� ������ �ִ� ������ Ů�ϴ�.\n");

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