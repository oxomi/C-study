#include <stdio.h>

//6-1 확인문제1
do
{
	scanf("%d", &a);
} while (a < 0);


//6-1 확인문제2
for (i = 0; i < 5; 1++)
{
	printf("Be happy\n");
}


//6-1 확인문제3
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("$");
	}

	return 0;
}


//구구단
int main(void)
{
	int i, j;
	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}


int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}


//6-2 확인문제1,2
int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Be happy~\n");
			if (j == 2) break;
		}
	}

	return 0;
}


//6-2 확인문제3 내가해냄!
int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == j || i + j == 4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}


//6-2 도전문제 존나어렵네 티발
int main(void)
{
	int num, i, j, cnt = 0;  //i, j는 소수판별용, cnt는 5개만 출력하고 줄넘김하기위한 판별용
	int test; //test가 1일때 소수

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);


	for (i = 2; i <= num; i++) //2부터 num까지의 범위 안에서 소수를 찾아내야함
	{
		test = 1; //소수라고 즉, 참으로 가정. 참고로 얘가 i-for문이 아닌 곳에 있으면 안됨
		for (j = 2; j < i; j++) //i값이 소수인지를 판별해주는 반복문
		{
			if ((i % j) == 0)
			{
				test = 0;
				break;
			}
		}
		if (test == 1) // 내부 반복문이 끝난 후에도 test가 1이면 'i'는 소수임
		{
			printf("%5d", i);
			cnt++;
			if (cnt % 5 == 0) //5개 소수 출력 후 줄넘김을 위해서!
			{
				printf("\n");
			}
		}
	}


	return 0;
}


