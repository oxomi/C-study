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



//int main()
//{
//	char str[80];
//
//	printf("���ڿ� �Է� : ");
//	gets(str);
//	puts("�Էµ� ���ڿ� : ");
//	puts(str);
//
//	return 0;
//}



//8-2 Ȯ�ι���3
//int main()
//{
//	char str1[80], str2[80];
//	char temp[80];  //������� �긦 �ϳ� �� �߰������ str1,2�� ���������� ����� �� ����.
//
//	printf("�� ���ڿ� �Է� : ");
//	scanf("%s %s", str1, str2);
//	printf("�ٲٱ� �� : %s, %s\n", str1, str2);
//	strcpy(temp, str1);
//	strcpy(str1, str2);
//	strcpy(str2, temp);
//	printf("�ٲ� �� : %s, %s\n", str1, str2);
//
//	return 0;
//}



//8-2 �������� (�ƽ�Ű�ڵ带 �̿��� �� ������ ¥�� ��� �ִ��� �ϴ� �װ� �㿡 �Ұ���)
int main()
{
	char str[80];
	char small[80] = "abcdefghijklmnopqrstuvwxyz";
	char big[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cnt = 0, i, j;

	printf("���� �Է� : ");
	gets(str);

	for (i = 0; i < 80; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == big[j])
			{
				str[i] = small[j];
				cnt++;
			}
		}
	}
	printf("�ٲ� ���� :");
	puts(str);
	printf("�ٲ� ���� �� : %d", cnt);

	return 0;
}