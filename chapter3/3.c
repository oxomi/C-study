#include <stdio.h>
#include <string.h>


int main(void)
{
	int a = 0;

	a = a + 1;
	a = a + 2;
	a = a + 3;
	printf("a : %d", a);
	return 0;

}


//3-1 확인문제
int main(void)
{
	int kor = 70, eng = 80, mat = 90; /*한줄에 변수 지정하는 방법!*/
	int tot;

	tot = kor + eng + mat;
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	printf("총점 : %d", tot);

	return 0;
}


int main(void)
{
	int a;

	scanf("%d", &a);
	printf("입력된 값 : %d", a);
	return 0;
}


int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm 입니다", age, height);
	return 0;
}


//3-2 확인문제
int main(void)
{
	char ch;

	printf("문자 입력 : ");
	scanf("%c", &ch);
	printf("%c문자의 아스키 코드 값은 %d입니다.", ch, ch);

	return 0;
}


