#include<stdio.h>
int main() {
	int h, m, s;
	printf("Enter current Hour = ");
	scanf("%d", &h);
	printf("Enter current Min = ");
	scanf("%d", &m);
	printf("Enter current Sec = ");
	scanf("%d", &s);
	if (h > 9 && m > 9 && s > 9) {
		printf("Current time is %d:%d:%d", h, m, s);
	}
	else if (h > 9 && m > 9 && s > 9) {
		printf("Current time is %d:%d:%d", h, m, s);
	}
	else if (h <= 9 && m > 9 && s > 9) {
		printf("Current time is 0%d:%d:%d", h, m, s);
	}
	else if (h <= 9 && m <= 9 && s > 9) {
		printf("Current time is 0%d:0%d:%d", h, m, s);
	}
	else if (h <= 9 && m <= 9 && s <= 9) {
		printf("Current time is 0%d:0%d:0%d", h, m, s);
	}
	else if (h > 9 && m <= 9 && s > 9) {
		printf("Current time is %d:0%d:%d", h, m, s);
	}
	else if (h > 9 && m <= 9 && s <= 9) {
		printf("Current time is %d:0%d:0%d", h, m, s);
	}
	else if (h > 9 && m > 9 && s <= 9) {
		printf("Current time is %d:%d:0%d", h, m, s);
	}
}