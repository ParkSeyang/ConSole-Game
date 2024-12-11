#include<stdio.h>
#include<windows.h>
#define SIZE 10

int main()
{
	const char* dialog[SIZE];

	dialog[0] = " 안녕하십니까 저는 탐정 김XX입니다.";

	dialog[1] = " 네 방갑습니다 이XX입니다. 의뢰에 응해주셔서 감사합니다.";

	dialog[2] = " 아닙니다 무슨일이신지 다시한번 설명 부탁 드려도 될까요?";

	dialog[3] = " 네 탐정님 다름이 아니라 집에 도둑이 든거 같습니다 저희집 가보가 사라졌어요.";

	dialog[4] = " 혹시 직접 도둑을 본적이 있습니까?";

	dialog[5] = " 예 새벽에 자다가 목이말라서 냉장고로 향하던중에 누군가가 물건을 들고 달아나는걸 봤습니다.";

	dialog[6] = " 혹시 생김새 라든가 의상이 어떻게 생겼는지 아십니까?";

	dialog[7] = " 분명 눈매가 날카롭고 키가 매우컸습니다 목소리는 좀굵은게 30대 남성인거 같았습니다.";

	dialog[8] = " 그렇군요 협조해주셔서 감사합니다. 현장 조사후에 다시 연락 드리도록 하겠습니다. 다른 특별한 사항이 있다면 연락주세요";

	dialog[9] = " 네 알겠습니다 꼭 좀 범인을 잡아주세요 잘 부탁드리겠습니다.";

	int count = 0;

	while (count < SIZE)
	{
		// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

		// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

		// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태

		// 0x8001 : 이전에 누른 적이 있고 호출 시점에 눌려있는 상태


		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			if (count % 2 == 0)
			{
				printf("탐정 :");
			}
			else
			{
				printf("의뢰인 :");
			}


			printf("%s\n", dialog[count]);

			count++;

		}
	}
	// for 문을 통한 대사글 반복출력
	// for (int i = 0; i < SIZE; i++)
	//  {
	// 
	// printf("%s\n", dialog[SIZE]);
	//  }


	// 가독성이 안좋은 예제

	// printf("게임대사 : %s\n", dialog[0]);
	// printf("게임대사 : %s\n", dialog[0]);
	// printf("게임대사 : %s\n", dialog[1]);
	// printf("게임대사 : %s\n", dialog[2]);
	// printf("게임대사 : %s\n", dialog[3]);
	// printf("게임대사 : %s\n", dialog[4]);
	// printf("게임대사 : %s\n", dialog[5]);
	// printf("게임대사 : %s\n", dialog[6]);
	// printf("게임대사 : %s\n", dialog[7]);
	// printf("게임대사 : %s\n", dialog[8]);
	// printf("게임대사 : %s\n", dialog[9]);

	return 0;
}