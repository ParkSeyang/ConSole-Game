#include<stdio.h>
#define SIZE 10000


void Load(const char* fileName)
{
	// ex) �Լ��� ������
	// "r" read : ������ �б����� ����ϴ� ����Դϴ�.
	FILE* file = fopen(fileName, "r");

	char buffer[SIZE] = { 0, };

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);

}


int main()
{
#pragma region ���� ����

	//"w" write : ���� ���� ���� �����մϴ�.
	// FILE* file = fopen("data.txt", "w");
	// 
	// fputs("Character Name\n", file);
	// 
	// fputs("Health 100 \n", file);
	// fputs("Level 15 \n", file);
	// 
	//  Health
	//  Level �� ������Ѷ�
	// 
	// 
	// fclose(file);



#pragma endregion

#pragma region ���� �б�
	// "r" read : ������ �б����� ����ϴ� ����Դϴ�.
	// FILE* file = fopen("data.txt", "r");
	// 
	// char buffer[SIZE] = { 0, };
	// 
	//  ù ��° �Ű����� �� ���� �����͸� ������ �޸� ������ ������ �����Դϴ�.
	//  �� ��° �Ű����� �� �� ������ �׸��� ũ���Դϴ�.
	//  �� ��° �Ű����� �� �����͸� �о�� ������ �׸��� �� �Դϴ�.
	//  �� ���� �Ű����� �� �����͸� �о�� ������ ������ ���� �Դϴ�.
	// 
	// 
	// fread(buffer, 1, SIZE, file);
	// 
	// printf("%s", buffer);
	// 
	// fclose(file);
	// 
	//  �д� ���Ͽ� ������ �߰��Ұ�� ���� ���ڵ� ���Ŀ� ���� 
	//  ���ڰ� �����ų� ������ �����ִ�.
	// �׷���� �ش����ϰ�θ����� ������ �ٸ��̸����� 
	// ����â�� ��� �ش� ���ڵ� ������ ���� �ϸ� ����̵ȴ�.



	Load("data.txt");
	Load("unit.TXT");

#pragma endregion


	return 0;
}