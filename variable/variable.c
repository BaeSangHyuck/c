#include<stdio.h>
void main() {
	int i = 10;
	long l = 10L;
	float f = 3.9F;
	double d = 3.9;
	char c = 'a';
	//char* str = "ABC";

	//ctrl + k눌렀다가 땐 후 c : 한줄 주석
	//ctrl + k눌렀다가 땐 후 u : 주석 해제
	//sizeof(자료형) : 소괄호 안에 작성한 변수 또는 자료형의 크기를 알려주는 함수이다.
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(str));
}