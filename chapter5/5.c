#include <stdio.h>

//5-1 Ȯ�ι���1-1
int main(void)
{
	if (a < 0)
	{
		a = -a;
	}
	return 0;
}

//5-1 Ȯ�ι���1-2
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

//5-1 Ȯ�ι���2
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

//5-1 Ȯ�ι���3
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


//5-2 Ȯ�ι���2
int main(void)
{
	int n;
	printf("���� �Է� : ");
	scanf("%d", &n);
	switch (n % 3)
	{
	case 0:
		printf("����");
		break;
	default:
		printf("��");
		break;
	}

	return 0;
}


//5-2 Ȯ�ι���3
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
	printf("������� %c�Դϴ�.", size);
	return 0;
}


//5-2 ��������
int main(void)
{
	int num1, num2, res;
	char giho;

	printf("��Ģ���� �Է�(����) : ");
	scanf("%d%c%d", &num1, &giho, &num2);

	switch (giho) /*char�� ��� ���� ������ �������� ���� �ڷ����̹Ƿ� switch~case������ ��밡���ϴ�*/
	{
	case '+': res = num1 + num2; break;
	case '-': res = num1 - num2; break;
	case '*': res = num1 * num2; break;
	case '/': res = num1 / num2; break;
	}
	printf("%d%c%d=%d", num1, giho, num2, res);

	return 0;
}