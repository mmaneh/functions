#include <stdio.h>
int mul_table(int n){
	int res = 0;
	for (int i = 1; i < 10; ++i){
		res = n * i;
		printf("%d * %d = %d\n",n,i, res);
	}

}
int main() {
	int n = 0;
	printf("Enter n: ");
	scanf("%d", &n);
      	mul_table(n);

}
