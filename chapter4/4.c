#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("���� ���� �� �ʱ갪 a = %d, b = %d\n", a, b);
	printf("������: (++a) * 3 = %d, ������: (b++) * 3 = %d/n", pre, post);
	return 0;
}


int main(void)
{
	double a = 4.0, b = 1.2;

	printf("%lf", a + b);

	return 0;
}


int main(void)
{
	int a, b, tot;
	double avg;

	printf("�� ������ ���� : ");
	scanf("%d%d", &a, &b);

	tot = a + b;
	avg = tot / 2.0;
	/*��հ��, tot�� �������̹Ƿ� ������ ���� 2.0�� ���� �Ǽ������� ����ؾ��Ѵ�.
	�׷��� ������ �ǿ����ڰ� ���� ��� �������̹Ƿ� / �� ��������� ���� ����ϰ� �Ǿ������.*/

	printf("��� : %.1lf", avg);
	return 0;
}


//4-1 Ȯ�ι���3
int main(void)
{
	int kor = 3, eng = 5, mat = 4;
	int credits;
	int res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = (kscore + escore + mscore) / 3;
	res = (credits > 10) && (grade > 4.0);

	printf("%d", res);

	return 0;

}



int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a / ((double)b));
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;

	printf("(int) %.1lf�� ��� : %d", res, a);
	return 0;
}

int main(void)
{

	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("ū �� : %d\n", res);

	return 0;
}


//4-2 Ȯ�ι���1
int main(void)
{
	int res;

	res = sizeof(short) > sizeof(long);

	printf("%s", (res == 1) ? "short" : "long"); /*�߿�*/

	return 0;
}


//4-2 Ȯ�ι���2
int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate;

	rate = (double)audience / (double)seats * 100;

	printf("����� : %.1lf%%", rate);
	/*������ ���� % ��ȣ�� ����ϱ� ���ؼ� ���ڿ� �ȿ��� %% �� �̽��������ؾ� �Ѵٴ� ���̴�.
	�̴� % ��ȣ�� ���� �����ڿ� ���еǾ�� �ϱ� �����̴�.*/

	return 0;
}


//4-2 Ȯ�ι���3
int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	time *= 60;
	min = (int)time;
	time -= min;
	time *= 60;
	sec = (int)time;
	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�.", hour, min, sec);


	return 0;
}


//4-2 ��������
int main(void)
{
	double weight, height, BMI;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf%lf", &weight, &height);

	BMI = weight / (height * height) * 10000;

	printf("%s", (BMI >= 20.0 && BMI < 25.0) ? "ǥ���Դϴ�" : "ü�߰����� �ʿ��մϴ�");
	/*(BMI >= 20.0 && BMI < 25.0) ? printf("ǥ���Դϴ�") : printf("ü�߰����� �ʿ��մϴ�");��� �ص� ��*/


	return 0;
}

