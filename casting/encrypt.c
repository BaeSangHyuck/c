#include<stdio.h>
void main() {
	//�ܹ��� ��ȣȭ : ������ �� �� ������, ��ȣȭ �� �� ���� ���Ѵ�.
	//����� ��ȣȭ : ������ �� �� ������, ��ȣȭ �� �� ���Ѵ�.

	//���ڿ� ������ ������ ����� �����̴�.
	char pw[7] = "a1b2c3";
	char en_pw[7] = "";
	char de_pw[7] = "";
	const int KEY = 3;	//��� : �ڷ��� �տ� const�� �ۼ��Ѵ�.

	for (int i = 0; i < sizeof(pw); i++) {
		en_pw[i] = (char)(pw[i] + KEY);
	}

	for (int i = 0; i < sizeof(en_pw); i++) {
		de_pw[i] = (char)(en_pw[i] - KEY);
	}

	printf("�⺻ : ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", pw[i]);
	}

	printf("\n��ȣȭ : ");
	for (int i = 0; i < sizeof(en_pw); i++) {
		printf("%c", en_pw[i]);
	}

	printf("\n��ȣȭ : ");
	for (int i = 0; i < sizeof(de_pw); i++) {
		printf("%c", de_pw[i]);
	}

}