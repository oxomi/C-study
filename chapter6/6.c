#include <stdio.h>

//6-1 Ȯ�ι���1
do
{
	scanf("%d", &a);
} while (a < 0);


//6-1 Ȯ�ι���2
for (i = 0; i < 5; 1++)
{
	printf("Be happy\n");
}


//6-1 Ȯ�ι���3
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("$");
	}

	return 0;
}


//������
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

	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);

	return 0;
}


//6-2 Ȯ�ι���1,2
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


//6-2 Ȯ�ι���3 �����س�!
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


//6-2 �������� ������Ƴ� Ƽ��
int main(void)
{
	int num, i, j, cnt = 0;  //i, j�� �Ҽ��Ǻ���, cnt�� 5���� ����ϰ� �ٳѱ��ϱ����� �Ǻ���
	int test; //test�� 1�϶� �Ҽ�

	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &num);


	for (i = 2; i <= num; i++) //2���� num������ ���� �ȿ��� �Ҽ��� ã�Ƴ�����
	{
		test = 1; //�Ҽ���� ��, ������ ����. ����� �갡 i-for���� �ƴ� ���� ������ �ȵ�
		for (j = 2; j < i; j++) //i���� �Ҽ������� �Ǻ����ִ� �ݺ���
		{
			if ((i % j) == 0)
			{
				test = 0;
				break;
			}
		}
		if (test == 1) // ���� �ݺ����� ���� �Ŀ��� test�� 1�̸� 'i'�� �Ҽ���
		{
			printf("%5d", i);
			cnt++;
			if (cnt % 5 == 0) //5�� �Ҽ� ��� �� �ٳѱ��� ���ؼ�!
			{
				printf("\n");
			}
		}
	}


	return 0;
}


