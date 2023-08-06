#include<stdio.h>

//7-1 확인문제3
//double centi_to_meter(double);
//
//int main(void)
//{
//	double res;
//
//	res = centi_to_meter(187);
//	printf("%.2lfm\n", res);
//
//	return 0;
//}
//
//double centi_to_meter(double a)
//{
//	double meter;
//
//	meter = a * 0.01;
//
//	return meter;
//}



//int get_num(void);
//
//int main(void)
//{
//	int result;
//
//	result = get_num();
//	printf("반환값 : %d\n", result);
//	return 0;
//
//}
//
//int get_num(void)
//{
//	int num;
//	printf("양수입력 : ");
//	scanf("%d", &num);
//	if (num < 0)
//	{
//		printf("양수를 입력하세요\n");
//		printf("양수입력 : ");
//		scanf("%d", num);
//
//	}
//	return num;
//}


//void print_char(char ch, int count);
//
//int main(void)
//{
//	print_char('@', 11);
//
//	return 0;
//}
//
//
//void print_char(char ch, int count)
//{
//	int i;
//
//	if (count > 10) return; //여기서 return하면 함수의 실행이 종료되므로 컴파일 했을때 아무런 결과가 나오지 않음
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//	return;
//}



//void print_line(void);
//
//int main(void)
//{
//	print_line();
//	printf("학번    이름    전공    학점\n");
//	print_line();
//
//	return 0;
//}
//
//
//void print_line(void)
//{
//	int i;
//
//	for (i = 0; i < 50; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//}




//void fruit(int count);
//
//int main(void)
//{
//	fruit(1);
//
//	return 0;
//}
//
//void fruit(int count)
//{
//	printf("apple\n");
//	if (count == 3) return;
//	fruit(count + 1);
//}



//7-2 확인문제2
//int sum(int num);
//
//int main(void)
//{
//	sum(10);
//	sum(100);
//	return 0;
//}
//
//int sum(int num)
//{
//	int tot = 0, i;
//
//	for (i = 1; i <= num; i++)
//	{
//		tot = tot + i;
//	}
//	printf("1부터 %d까지의 합은 %d입니다.\n", num, tot);
//}


//7-2 확인문제3
//int func(int n);
//int poly(int n);
//
//int main(void)
//{
//	printf("%d\n", func(-3));
//	return 0;
//}
//
//int func(int n)
//{
//	int res;
//	res = poly(n);
//	if (res >= 0) return res;
//	else return -res;
//}
//int poly(int n)
//{
//	return((2 * n * n) + (3 * n));
//}




//7-2 도전문제
//1부터 n까지의 합을 재귀호출을 이용해 구하라.


int rec_func(int n);


int main(void)
{

	printf("%d", rec_func(10));


	return 0;
}

int rec_func(int n) //n까지의 합
{
	if (n == 1) return 1;
	else
	{
		return n + rec_func(n - 1); //재귀를 써서 n-1까지의 합에 n만을 계속 더해주는 방식.
	}

}

