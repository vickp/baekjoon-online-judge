#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	if (N >= 90) {
		printf("A");
	}
	else if (N >= 80) {
		printf("B");
	}
	else if (N >= 70) {
		printf("C");
	}
	else if (N >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
}