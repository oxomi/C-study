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


//void swap(int* pa, int* pb);
//
//int main()
//{
//	int a = 10, b = 20;
//
//	swap(&a, &b); //pa변수에는 주솟값을 넣어야 하므로 인수에 &a를 넣어야 하는 것. 그래야 swap함수에서 간접 참조 연산을 수행할 수 있게 됨.
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



//Q. 포인터 없이 두 변수의 값을 바꾸는 함수는 불가능한가?

//A. 불가능 case 1) swap의 인수가 없을때
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
//에러발생. 
//이유 : 함수 안에 선언된 함수명은 사용 번위가 함수 내부로 제한되므로 main함수에 있는 변수 a, b는 다른 함수인 swap내에서 사용 불가.


//A. 불가능 case 2) swap의 인수가 있을때
//void swap(int x, int y);
//
//int main()
//{
//	int a = 10, b = 20;
//
//	swap(a, b);
//	printf("a:%d, b:%d", a, b);
//
//	return 0;
//}
//
//void swap(int x, int y)
//{
//	int temp;
//
//	temp = x;
//	x = y;
//	y = temp;
//}
//a, b값이 바뀌지 않음.
//이유: swap 함수를 호출 할 때, main함수의 a, b값이 복사되어 swap함수의 x,y에 저장되므로 결국 swap함수 안에서는 a, b의 복사본을 바꾸는게 되기 때문에
//정작 main함수의 a, b값은 바뀌지 않게 된다. swap함수의 매개변수 이름을 a, b로 바꾸얻 마찬가지다.


//A. 불가능 case 3) case 2에서 swap의 바꾼 값을 main함수로 반환하도록 수정했을때
//애초에 불가능함.
//이유: 함수는 오직 하나의 값만을 반환할 수 있기 떄분에 두개의 변화값을 반환할 수가 없다.



//9-2 도전문제
void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main()
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);  //이름만 이렇게 지었지 큰 숫자 순서대로 입력받는거 아님.
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp) swap(maxp, midp); // *붙여줘야하는부분 주의!
	if (*maxp < *minp) swap(maxp, minp);
	if (*midp < *minp) swap(midp, minp);
}

// 혹은 
//if (*maxp < *midp) swap(maxp, midp); 
//if (*midp < *minp) swap(midp, mi
//if (*maxp < *midp) swap(maxp, minp); //이게 더 나은듯??


// !!! 무턱대고 어렵게 생각했는데 알고보니 간단함. 직접 써보면서 간결한 로직을 찾으려는 버릇 들이자.