/*************************************
2016 POSTECH SMP Week6_2
Q.�� ���ڰ� �ִ� ��In.txt�������� �ް�
�� �� ���ڵ�� �����ϴ� �Ǻ���ġ ����30����
���� ��Out.txt���� ��� �Ͻÿ�
**************************************/

#include <stdio.h>
int fibo(int f0, int f1, int n);

int main(void) {
	FILE *InFile, *OutFile;
	int i, f0, f1;
	//���� ����
	InFile = fopen("In.txt", "r");
	OutFile = fopen("Out.txt", "w");
	
	//ù��°�� �ι�° �� �б�
	fscanf(InFile, "%d%d", &f0, &f1);

	//���� ���
	for (i = 0; i < 30; i++) {
		printf("print %d fibonacci number\n", i);
		fprintf(OutFile, "%d\n", fibo(f0, f1, i));
	}

	//���� �ݱ�(������ ���� ������ �ݴ� ������ ���Խô�.)
	fclose(InFile);
	fclose(OutFile);
	return 0;
}

int fibo(int f0, int f1, int n) {
	switch (n) {
	//ù��° �Ǻ���ġ ��
	case 0:
		return f0;
	//�ι�° �Ǻ���ġ ��
	case 1:
		return f1;
	//������ ���
	default:
		return fibo(f0, f1, n - 1) + fibo(f0, f1, n - 2);
	}
}