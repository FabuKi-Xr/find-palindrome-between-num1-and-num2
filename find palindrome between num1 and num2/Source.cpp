#include<stdio.h>
int main() {
	int num1, num2, temp, temp1, val, check = 0, i, j;
	printf("Find palindrome number between : ");
	scanf_s("%d %d", &num1, &num2);
	for (i = num1;i <= num2;i++) {
		temp = i;
		temp1 = i;
		for (j = 1;temp > 0;j++) {
			val = temp % 10;
			check = (check * 10) + val;
			temp /= 10;
		}
		if (check == temp1) printf("%d\t", temp1);
		check = 0;
	}
	return 0;
}