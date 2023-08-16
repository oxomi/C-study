#include <stdio.h>


//int main()
//{
//	int a;
//	double b;
//	char c;
//
//	printf("int형 변수의 주소 : %u\n", &a);
//	printf("double형 변수의 주소 : %u\n",&b);
//	printf("char형 변수의 주소 : %u\n", &c);
//	return 0;
//}



//int main()
//{
//	int a;
//	int* pa;
//
//	pa = &a;  //포인터에 a의 주소 등록
//	*pa = 10; //a의 주소를 이용하여 포인터로 a에 10을 대입
//
//	printf("포인터로 a 값 출력 : %d\n", *pa);
//	printf("변수명으로 a 값 출력 : %d", a);
//
//	return 0;
//}



//int main()
//{
//	int a = 10, b = 15, total;
//	double avg;
//	int* pa, * pb;
//	int* pt = &total; // int *pt; 
//					  // pt = &total;  두줄을 줄여 초기화.
//	double* pg = &avg;
//
//	pa = &a;
//	pb = &b;
//
//	*pt = *pa + *pb;
//	*pg = *pt / 2.0;
//	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
//	printf("두 정수의 합 : %d\n", *pt);
//	printf("두 정수의 평균 : %.1lf", *pg);
//
//	return 0;
//}



//int main()
//{
//	int a = 10, b = 20;
//	const int* pa = &a; //const의 역할 알기
//
//	printf("변수 a 값 : %d\n", *pa);
//	pa = &b;
//	printf("변수 b 값 ; %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("변수 a 값 : %d\n", *pa);
//
//	return 0;
//}







