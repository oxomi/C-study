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







