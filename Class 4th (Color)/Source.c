#include <stdio.h>
#include <windows.h>
enum State
{
	IDLE,
	ATTACK,
	DIE

	// ������ ������� ��� ù ����� �⺻���� 0�̰�, �������� 1�� 
	// �����ϴ� ������� ������� �ڵ����� �ο��ȴ�.

	// ���������� �߰��� �ִ� ����� ���� �����ϰԵǸ�
	// �״����� �ִ� ����� ���� ����� ������ ���� 1�� �����մϴ�.
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
#pragma region ������ ���
	// ������ ��� ���� ����� ��ȣ �̸���
	// �����Դϴ�.

	// ������ ����� Ű���� enum�� ����Ͽ� ������ ��� ��� ������ �����ϴ� �ڷ����̴�
	// enum ���Ŀ� ������ �±׸��� ����, �߰�ȣ�� ����� ������ ���� ��� ����� ��ǥ�� �и��Ͽ� ���´�
	// ���ǵ� ������ ����� ���ο� �ڷ������� ����� ���� �ִ�

	// enum State state = IDLE;
	// 
	//  switch (state)
	//  {
	//  case IDLE: printf("������\n");
	//  	break;
	//  case ATTACK: printf("���ݻ���\n");
	//  	break;
	//  case DIE: printf("��������\n");
	//  	break;
	//  default: printf("�˼������ϴ�.\n");
	//  	break;
	//  }

#pragma endregion


#pragma region ����
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

	 // while ���� Ȱ���� ���� ���� �ݺ� �Ǵ� ����

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

	// for ���� ���� 15���� ���� �ٳ��ö����� �ݺ��ϴ� ����

	// 	int i;
	//  
	//  for (i=0; i < 15; i++)
	//  {
	//  	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
	//  
	//  	printf("���ֳ����ĳ���\n");
	//  }




#pragma endregion


	return 0;
}