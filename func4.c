#include <stdio.h>
int sum(int n){
	int a = n /100;
	int b = (n / 10) % 10;
	int c = n % 10;
	int res = a + b + c;
	printf("%d", res);
}
int main() {

	int n = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	sum(n);
}
