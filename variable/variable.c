#include<stdio.h>
void main() {
	int i = 10;
	long l = 10L;
	float f = 3.9F;
	double d = 3.9;
	char c = 'a';
	//char* str = "ABC";

	//ctrl + k�����ٰ� �� �� c : ���� �ּ�
	//ctrl + k�����ٰ� �� �� u : �ּ� ����
	//sizeof(�ڷ���) : �Ұ�ȣ �ȿ� �ۼ��� ���� �Ǵ� �ڷ����� ũ�⸦ �˷��ִ� �Լ��̴�.
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(str));
}