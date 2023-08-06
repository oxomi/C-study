#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("증감 연산 후 초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d/n", pre, post);
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

	printf("두 과목의 점수 : ");
	scanf("%d%d", &a, &b);

	tot = a + b;
	avg = tot / 2.0;
	/*평균계산, tot가 정수형이므로 나누는 값을 2.0과 같이 실수값으로 사용해야한다.
	그러지 않으면 피연산자가 현재 모두 정수값이므로 / 를 사용했을때 몫을 계산하게 되어버린다.*/

	printf("평균 : %.1lf", avg);
	return 0;
}


//4-1 확인문제3
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
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;

	printf("(int) %.1lf의 결과 : %d", res, a);
	return 0;
}

int main(void)
{

	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("큰 값 : %d\n", res);

	return 0;
}


//4-2 확인문제1
int main(void)
{
	int res;

	res = sizeof(short) > sizeof(long);

	printf("%s", (res == 1) ? "short" : "long"); /*중요*/

	return 0;
}


//4-2 확인문제2
int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate;

	rate = (double)audience / (double)seats * 100;

	printf("입장률 : %.1lf%%", rate);
	/*주의할 점은 % 기호를 출력하기 위해선 문자열 안에서 %% 로 이스케이프해야 한다는 점이다.
	이는 % 기호가 형식 지정자와 구분되어야 하기 때문이다.*/

	return 0;
}


//4-2 확인문제3
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
	printf("3.76시간은 %d시간 %d분 %d초입니다.", hour, min, sec);


	return 0;
}


//4-2 도전문제
int main(void)
{
	double weight, height, BMI;

	printf("몸무게(kg)과 키(cm) 입력 : ");
	scanf("%lf%lf", &weight, &height);

	BMI = weight / (height * height) * 10000;

	printf("%s", (BMI >= 20.0 && BMI < 25.0) ? "표준입니다" : "체중관리가 필요합니다");
	/*(BMI >= 20.0 && BMI < 25.0) ? printf("표준입니다") : printf("체중관리가 필요합니다");라고 해도 됨*/


	return 0;
}

