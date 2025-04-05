#include <stdio.h>
int reverse(int n){
	int res = 0;

	while(n!=0){

	int remain = n % 10;
	res = res * 10 + remain;
       	n = n / 10;
	}
	printf("%d", res);
}
int main() {
	int num = 0;
	printf("Enter num: ");
	scanf("%d", &num);
	reverse(num);
}
