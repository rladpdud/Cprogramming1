#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//이거 연습문제인데 배열로 못 바꾸겠다.. 
//인터넷 구글링했더니 그건 C++인가 암튼 여기 안 맞는다고 떠서 그냥 이거 제출하게 됐다. ㅜㅜ

int convCase(int ch)
{
	// 모든 문자의 대소문자간 차의 크기는 같다.
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void)
{
	int ch;
	printf("문자 입력: ");
	ch = getchar(); // 문자 입력
	ch = convCase(ch); // 문자 변환
	if (ch == -1)
	{
		puts("범위를 벗어난 입력입니다.");
		return -1;
	}
	putchar(ch); // 변환된 문자 출력
	return 0;
}
