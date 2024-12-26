#include<stdio.h>
#define SIZE 10000


void Load(const char* fileName)
{
	// ex) 함수로 만들경우
	// "r" read : 파일을 읽기위해 사용하는 모드입니다.
	FILE* file = fopen(fileName, "r");

	char buffer[SIZE] = { 0, };

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);

}


int main()
{
#pragma region 파일 쓰기

	//"w" write : 파일 쓰기 모드로 진행합니다.
	// FILE* file = fopen("data.txt", "w");
	// 
	// fputs("Character Name\n", file);
	// 
	// fputs("Health 100 \n", file);
	// fputs("Level 15 \n", file);
	// 
	//  Health
	//  Level 을 저장시켜라
	// 
	// 
	// fclose(file);



#pragma endregion

#pragma region 파일 읽기
	// "r" read : 파일을 읽기위해 사용하는 모드입니다.
	// FILE* file = fopen("data.txt", "r");
	// 
	// char buffer[SIZE] = { 0, };
	// 
	//  첫 번째 매개변수 는 읽은 데이터를 저장할 메모리 버퍼의 포인터 변수입니다.
	//  두 번째 매개변수 는 각 데이터 항목의 크기입니다.
	//  세 번째 매개변수 는 데이터를 읽어올 데이터 항목의 수 입니다.
	//  네 번쨰 매개변수 는 데이터를 읽어올 파일의 포인터 변수 입니다.
	// 
	// 
	// fread(buffer, 1, SIZE, file);
	// 
	// printf("%s", buffer);
	// 
	// fclose(file);
	// 
	//  읽는 파일에 내용을 추가할경우 파일 인코딩 형식에 따라서 
	//  글자가 깨지거나 오류가 날수있다.
	// 그럴경우 해당파일경로를열어 파일을 다른이름으로 
	// 저장창을 열어서 해당 인코딩 형식을 수정 하면 출력이된다.



	Load("data.txt");
	Load("unit.TXT");

#pragma endregion


	return 0;
}