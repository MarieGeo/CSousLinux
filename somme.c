#include <stdio.h>
#include <stdarg.h>

int sum(int num,...) {
	
	va_list args;
	int sum = 0, i;
	va_start(args, num);

	for(i = 0; i < num; i++){
		//Un S en trop sur la methode
		sum += va_arg(args, int);
	}

	va_end(args);

	return sum;

}

int main(){
	printf("%d\n", sum(3,4,5, 6));
	printf("%d\n", sum(5,8,9,6, 5, 6));

	return 0;
}
