#include <stdio.h>

//5-1 확인문제1-1
int main(void)
{
	if (a < 0)
	{
		a = -a;
	}
	return 0;
}

//5-1 확인문제1-2
int main(void)
{
	if (a % 2 == 0)
	{
		a = 2;
	}
	else
	{
		a = 1;
	}
	return 0;
}

//5-1 확인문제2
int main(void)
{
	int chest = 95;
	char size;
	if (chest <= 90)
	{
		size = 'S';
	}
	else if ((chest > 90) && (chest <= 100))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	return 0;

}

//5-1 확인문제3
int main(void)
{
	double height = 179.5;
	double weight = 75.0;
	if (height >= 187.5 && weight < 80)
	{
		printf("ok\n");
	}
	else
	{
		printf("cancel\n");
	}
	return 0;
}


//5-2 확인문제2
int main(void)
{
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);
	switch (n % 3)
	{
	case 0:
		printf("거짓");
		break;
	default:
		printf("참");
		break;
	}

	return 0;
}


//5-2 확인문제3
int main(void)
{
	int age = 25, chest = 95;
	char size;
	if (age < 20)
	{
		if (chest < 85)
		{
			size = 'S';
		}
		else if (chest >= 85 && chest < 95)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	else
	{
		if (chest < 90)
		{
			size = 'S';
		}
		else if (chest >= 90 && chest < 100)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	printf("사이즈는 %c입니다.", size);
	return 0;
}


//5-2 도전문제
int main(void)
{
	int num1, num2, res;
	char giho;

	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &num1, &giho, &num2);

	switch (giho) /*char은 비록 문자 지정에 사용되지만 정수 자료형이므로 switch~case구문에 사용가능하다*/
	{
	case '+': res = num1 + num2; break;
	case '-': res = num1 - num2; break;
	case '*': res = num1 * num2; break;
	case '/': res = num1 / num2; break;
	}
	printf("%d%c%d=%d", num1, giho, num2, res);

	return 0;
}