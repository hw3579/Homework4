#include<stdio.h>
#include<stdlib.h>









typedef int ELEMENT;

typedef struct Stack {
	int* List;  // �����洢Ԫ�ص�˳���
	int curNumber;   // �����洢��ǰԪ�ص��ܸ���
}Stack;

void iniStack(Stack* A);   // ��ʼ����ջ
int is_empty(Stack* A);      //�жϵ�ǰ��ջ�Ƿ�Ϊ�գ��շ���1���ǿշ���0
void clearStack(Stack* A);  //��ն�ջ
void push(Stack* A, ELEMENT obj);	//��Ԫ��objѹ���ջ��ջ��
void pop(Stack* A);	//����ǰջ����Ԫ�ص���ջ��Ҫ��ջ��Ϊ��
ELEMENT get_top(Stack* A);     //���ص�ǰջ����Ԫ��ֵ��Ҫ��ջ��Ϊ��
void display(Stack* A);     //�Զ�������ʾ��ջ�е�Ԫ��

int fun3(int x) {
	Stack* A = (Stack*)malloc(10 * sizeof(Stack));
	iniStack(A);
	int i, temp, n;

	printf("��������������Ԫ�ؽ�ջ��������������\n");
	printf("����Ҫ��ջ��Ԫ������(ջ�ռ�Ϊ10)��");
	scanf_s("%d", &n);
	while (n > 10) {
		printf("�Ѿ�����ջ�ռ����������������룺");
		scanf_s("%d", &n);
	}
	printf("��ʼ��ջ��");
	for (i = 0; i < n; i++) {
		scanf_s("%d", &temp);
		push(A, temp);
	}
	printf("��ջ����");
	printf("\n������������ǰջ��Ԫ�ء�������������\n");
	display(A);//�Զ�������ʾ��ջ�е�Ԫ��
	printf("\n������������������������������������\n");

	printf("�����ǰջ����Ԫ��ֵ,����ȳ�\n");
	while (!is_empty(A)) {
		if (A->curNumber < 0)break;
		printf("%d \n", get_top(A));
		pop(A);
	}


	clearStack(A);
	free(A);
	return 0;
}

void iniStack(Stack* A) {// ��ʼ����ջ
	A->curNumber = -1;
	A->List = (int*)malloc(10 * sizeof(int));
}

void clearStack(Stack* A) {//��ն�ջ
	free(A->List);
}

void push(Stack* A, ELEMENT obj) {//��Ԫ��objѹ���ջ��ջ��
	A->curNumber++;
	*((A->List) + A->curNumber) = obj;
}

void pop(Stack* A) {//����ǰջ����Ԫ�ص���ջ��Ҫ��ջ��Ϊ��
	if (!is_empty(A)) A->curNumber--;
}

ELEMENT get_top(Stack* A) {//���ص�ǰջ����Ԫ��ֵ��Ҫ��ջ��Ϊ��
	if (!is_empty(A)) return *(A->List + A->curNumber);
}

int is_empty(Stack* A) {//�жϵ�ǰ��ջ�Ƿ�Ϊ�գ��շ���1���ǿշ���0
	if (A->curNumber > -1) return 0;
	else return 1;
}

void display(Stack* A) {//�Զ�������ʾ��ջ�е�Ԫ��
	int i;
	if (A->curNumber > -1) {
		for (i = A->curNumber; i >= 0; i--) {
			printf("%d \n", *(A->List + i));
		}
	}
}
//�����ҵģ�����һЩ����Ȼ������Щ���ᣬ��Ҫ�����













int fun2(int n)

{

	int x, y, z, a, b;

	for (x = 1; x <= 9; x++)

	{
		a = 5 + 10 * x;

		for (y = 1; y <= x; y++)

		{
			b = 5 + 10 * y;

			z = a * b;

			printf("%d*%d=%d  ", a, b, z);

		}

		printf("\n");

	}
	return 0;
		 
}


#include <stdio.h>

int add(int a)
{
	int b = a + 3;
	return b;
}












int fun1(int argc)
{
	printf("Hello Robomaster!\r\n");
	return 2;

}


int main()
{
	int y, n=0, x=0;
A:
	printf("ѡ����ҵ����ҵ1Ϊhelloworld����ҵ2Ϊ15*15����\n");
	printf("��ҵ3Ϊ��ջ\n");
	scanf_s("%d", &y);
	switch (y) {
	case 1:
		return fun1(n);
		break;
	case 2:
		return fun2(n);
		break;
	case 3:
		return fun3(x);
		break;
	default:
		printf("����\n");
		goto A;

	}
}





