#include <stdio.h>
int mul_table(int n){
	int res = 0;
	for (int i = 1; i < 10; ++i){
	res = n * i;
	printf("%d * %d =%d\n", n, i, res);
	}

}
int main() {
	for(int n = 1; n <= 10; ++n){
	mul_table(n);
	}



}
