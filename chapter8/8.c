#include <stdio.h>

//int main(void)
//{
//	int ary[5];
//
//	ary[0] = 10;
//	ary[1] = 20;
//	ary[2] = ary[0] + ary[1];
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);
//
//	return 0;
//
//}



//int main()
//{
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//
//	for (i = 0; i < 5; i++)
//	{
//		total += score[i];
//	}
//
//	avg = total / 5.0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5d", score[i]);
//	}
//	printf("\n");
//
//	printf("���: %.1lf", avg);
//
//	return 0;
//}



//sizeof �����ڸ� �̿��� �迭 ó�� �߰�
//int main()
//{
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]); /* �迭 ����� ���� = �迭 ��ü ����Ʈ / �迭 ��� 1���� ����Ʈ */
//
//	for (i = 0; i < count; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//
//	for (i = 0; i < count; i++)
//	{
//		total += score[i];
//	}
//
//	avg = total / 5.0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5d", score[i]);
//	}
//	printf("\n");
//
//	printf("���: %.1lf", avg);
//
//	return 0;
//}
 

//8-1 Ȯ�ι���3
//int main()
//{
//	int A[3] = { 1,2,3 };
//	int B[10];
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		B[i] = A[i % 3]; //������ ��
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%5d", B[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char str[80] = "applejam";
//
//	printf("���� ���ڿ� : %s\n", str);
//	printf("���ڿ� �Է� : ");
//	scanf("%s", str); //scanf���� ���ڿ��� �������� ������ �տ� & �Ⱥٿ��� ��.
//	printf("�Է� �� ���ڿ� : %s\n", str);
//
//	return  0;
//}




#include <string.h>
//int main()
//{
//	char str1[80] = "cat";
//	char str2[80];
//
//	strcpy(str1, "tiger");
//	strcpy(str2, str1);
//	printf("%s, %s\n", str1, str2);
//
//	return 0;
//}



int main()
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}

