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

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		

	printf("BLACK\n",);



#pragma endregion


	return 0;
}