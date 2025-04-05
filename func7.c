#include <stdio.h>
int power(int num, int exp){
        int res = 1;	
	for(int i = 0; i < exp; ++i){
	res *= num;
	}
	printf("%d",res);
}
int main() {
	int num = 0;
	printf("Enter num: ");
	scanf("%d", &num);

	int exp = 0;
        printf("Enter exp: ");
        scanf("%d", &exp);

	power(num, exp);

}
