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


//3-1 Ȯ�ι���
int main(void)
{
	int kor = 70, eng = 80, mat = 90; /*���ٿ� ���� �����ϴ� ���!*/
	int tot;

	tot = kor + eng + mat;
	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
	printf("���� : %d", tot);

	return 0;
}


int main(void)
{
	int a;

	scanf("%d", &a);
	printf("�Էµ� �� : %d", a);
	return 0;
}


int main(void)
{
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm �Դϴ�", age, height);
	return 0;
}


//3-2 Ȯ�ι���
int main(void)
{
	char ch;

	printf("���� �Է� : ");
	scanf("%c", &ch);
	printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.", ch, ch);

	return 0;
}


