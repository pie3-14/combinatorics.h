#include <stdio.h>

// 쓸모없는 걸 만드는 중일 수도 있다 ㅎ 

// 팩토리얼
double factorial(int num) {
	int result = 1;
	int i = 0;

	for (i = 1; i <= num; i++) {
		result *= i; // 팩토리얼 계산 
	}

	return result;
}

// 순열
double permutation(int n, int r) {
	double result = factorial(n) / factorial(n-r);
       	return result;
}
