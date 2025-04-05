#include <stdio.h>
int num(int n){
	int flag = 0;
	if(n < 0){
	printf("not simple");
	return 0;
	}
	for(int i = 2; i < n/2; ++i){
		if(n % i == 0){
		flag = 1;
		printf("not simple");	
		break;
		}
	}
		if(flag == 0){
			if(n % 1 == 0 && n % n == 0){
			printf("The number is simple");
			}
		}
	
}
int main() {

	int n = 0;

	printf("Enter n: ");
	scanf("%d", &n);
	num(n);

}
