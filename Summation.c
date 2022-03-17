#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int sum_to = 0;;
	int sum = 0;
	int i;
	printf("When do you want to sum to: ");
	scanf("%d", &sum_to);
	for (i = 1; i <= sum_to; i++) {
		sum += i;
	}
	printf("The answer is %d\n.", sum);

}