#include <stdio.h>
#include <stdarg.h>

int sum(int num,...) {
	va_list args;
	int sum = 0, i;

	va_start(args, num);

	for(i = 0, i < num; i++){
		sum += va_args(args, int);
	}

	va_end(args);

	return sum;

}

int main(){
	printf("%d\n", sum(3,4,5));
	printf("%d\n", sum(5,8,9,6));

	return 0;
}