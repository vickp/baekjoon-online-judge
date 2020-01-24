// 2007³â
/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int x, y;

	scanf("%d %d", &x, &y);

	if (x == 1) {
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 2) {
		y += 31;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 3) {
		y += 31 + 28;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 4) {
		y += 31 + 28 + 31;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 5) {
		y += 31 + 28 + 31 + 30;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 6) {
		y += 31 + 28 + 31 + 30 + 31;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 7) {
		y += 31 + 28 + 31 + 30 + 31 + 30;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 8) {
		y += 31 + 28 + 31 + 30 + 31 + 30 + 31;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 9) {
		y += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 10) {
		y += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 11) {
		y += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
	if (x == 12) {
		y += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		if (y % 7 == 0)		printf("SUN");
		if (y % 7 == 1)		printf("MON");
		if (y % 7 == 2)		printf("TUE");
		if (y % 7 == 3)		printf("WED");
		if (y % 7 == 4)		printf("THU");
		if (y % 7 == 5)		printf("FRI");
		if (y % 7 == 6)		printf("SAT");
	}
}
*/