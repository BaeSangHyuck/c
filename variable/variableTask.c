#include<stdio.h>
void main() {
	//애완동물 정보
	char* name = "고양이";
	int age = 3;
	char gender = 'M';
	float weight = 6.3;

	//제어문자
	//반드시 따옴표 안에서 작성한다.
	// \n : new line(줄바꿈, 개행문자)
	// \t : tab(위 아래 줄 간격 맞추어 띄기)
	// \\ : \표현
	// \' : '표현
	// \" : "표현

	//printf("이름 : %s\n", name);
	printf("이름 : ");
	//puts() : 문자열 출력, 마지막에는 줄바꿈이 자동으로 삽입된다.
	puts(name);
	printf("\"나이 : %d살\"\n", age);
	printf("성별 : %c\n", gender);
	printf("\\몸무게 : %.1fkg\n", weight);

}