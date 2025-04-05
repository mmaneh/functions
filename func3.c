#include <stdio.h>
int fuctorial(int n){
	int res = 1;
	if(n < 0){
	printf("Cannot count");
	return 0;
	}
	for (int i = 1; i <= n; ++i){
	res  *= i; 
	}
	printf("%d", res);

}
int main() {
	int n = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	fuctorial(n);
}
