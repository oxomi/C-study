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
//	printf("평균: %.1lf", avg);
//
//	return 0;
//}



//sizeof 연산자를 이용한 배열 처리 추가
//int main()
//{
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]); /* 배열 요소의 개수 = 배열 전체 바이트 / 배열 요소 1개당 바이트 */
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
//	printf("평균: %.1lf", avg);
//
//	return 0;
//}
 

//8-1 확인문제3
//int main()
//{
//	int A[3] = { 1,2,3 };
//	int B[10];
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		B[i] = A[i % 3]; //답지봄 ㅋ
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
//	printf("최초 문자열 : %s\n", str);
//	printf("문자열 입력 : ");
//	scanf("%s", str); //scanf에서 문자열을 받을때는 변수명 앞에 & 안붙여도 됨.
//	printf("입력 후 문자열 : %s\n", str);
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
//	printf("문자열 입력 : ");
//	gets(str);
//	puts("입력된 문자열 : ");
//	puts(str);
//
//	return 0;
//}



//8-2 확인문제3
//int main()
//{
//	char str1[80], str2[80];
//	char temp[80];  //빈공간인 얘를 하나 더 추가해줘야 str1,2를 순차적으로 뒤집어갈 수 있음.
//
//	printf("두 문자열 입력 : ");
//	scanf("%s %s", str1, str2);
//	printf("바꾸기 전 : %s, %s\n", str1, str2);
//	strcpy(temp, str1);
//	strcpy(str1, str2);
//	strcpy(str2, temp);
//	printf("바꾼 후 : %s, %s\n", str1, str2);
//
//	return 0;
//}



//8-2 도전문제 (아스키코드를 이용해 더 간략히 짜는 방법 있던데 일단 그건 담에 할거임)
int main()
{
	char str[80];
	char small[80] = "abcdefghijklmnopqrstuvwxyz";
	char big[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cnt = 0, i, j;

	printf("문장 입력 : ");
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
	printf("바뀐 문장 :");
	puts(str);
	printf("바뀐 문자 수 : %d", cnt);

	return 0;
}