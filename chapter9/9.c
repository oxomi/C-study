#include <stdio.h>


//int main()
//{
//	int a;
//	double b;
//	char c;
//
//	printf("int�� ������ �ּ� : %u\n", &a);
//	printf("double�� ������ �ּ� : %u\n",&b);
//	printf("char�� ������ �ּ� : %u\n", &c);
//	return 0;
//}



//int main()
//{
//	int a;
//	int* pa;
//
//	pa = &a;  //�����Ϳ� a�� �ּ� ���
//	*pa = 10; //a�� �ּҸ� �̿��Ͽ� �����ͷ� a�� 10�� ����
//
//	printf("�����ͷ� a �� ��� : %d\n", *pa);
//	printf("���������� a �� ��� : %d", a);
//
//	return 0;
//}



//int main()
//{
//	int a = 10, b = 15, total;
//	double avg;
//	int* pa, * pb;
//	int* pt = &total; // int *pt; 
//					  // pt = &total;  ������ �ٿ� �ʱ�ȭ.
//	double* pg = &avg;
//
//	pa = &a;
//	pb = &b;
//
//	*pt = *pa + *pb;
//	*pg = *pt / 2.0;
//	printf("�� ������ �� : %d, %d\n", *pa, *pb);
//	printf("�� ������ �� : %d\n", *pt);
//	printf("�� ������ ��� : %.1lf", *pg);
//
//	return 0;
//}



//int main()
//{
//	int a = 10, b = 20;
//	const int* pa = &a; //const�� ���� �˱�
//
//	printf("���� a �� : %d\n", *pa);
//	pa = &b;
//	printf("���� b �� ; %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("���� a �� : %d\n", *pa);
//
//	return 0;
//}


//void swap(int* pa, int* pb);
//
//int main()
//{
//	int a = 10, b = 20;
//
//	swap(&a, &b); //pa�������� �ּڰ��� �־�� �ϹǷ� �μ��� &a�� �־�� �ϴ� ��. �׷��� swap�Լ����� ���� ���� ������ ������ �� �ְ� ��.
//	printf("a:%d, b:%d", a, b);
//
//	return 0;
//}
//
//
//void swap(int* pa, int* pb)
//{
//	int temp;
//
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//
//}



//Q. ������ ���� �� ������ ���� �ٲٴ� �Լ��� �Ұ����Ѱ�?

//A. �Ұ��� case 1) swap�� �μ��� ������
//void swap(void);
//
//int main()
//{
//	int a = 10, b = 20;
//
//	swap();
//	printf("a:%d, b:%d\n", a, b);
//
//	return 0;
//}
//
//
//void swap(void)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}

//�����߻�. 
//���� : �Լ� �ȿ� ����� �Լ����� ��� ������ �Լ� ���η� ���ѵǹǷ� main�Լ��� �ִ� ���� a, b�� �ٸ� �Լ��� swap������ ��� �Ұ�.


//A. �Ұ��� case 2) swap�� �μ��� ������
void swap(int x, int y);

int main()
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

//a, b���� �ٲ��� ����.
//����: swap �Լ��� ȣ�� �� ��, main�Լ��� a, b���� ����Ǿ� swap�Լ��� x,y�� ����ǹǷ� �ᱹ swap�Լ� �ȿ����� a, b�� ���纻�� �ٲٴ°� �Ǳ� ������
//���� main�Լ��� a, b���� �ٲ��� �ʰ� �ȴ�. swap�Լ��� �Ű����� �̸��� a, b�� �ٲپ� ����������.


//A. �Ұ��� case 3) case 2���� swap�� �ٲ� ���� main�Լ��� ��ȯ�ϵ��� ����������
//���ʿ� �Ұ�����.
//����: �Լ��� ���� �ϳ��� ������ ��ȯ�� �� �ֱ� ���п� �ΰ��� ��ȭ���� ��ȯ�� ���� ����.