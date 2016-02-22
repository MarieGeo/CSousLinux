#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* task_a(void* p_data){
	int* x = (int*) p_data;
	printf("Je suis A!\n");
	printf("X vaut %d\n", *x);
	return NULL;
}

void* task_b(void* p_data){
	printf("Je suis B!\n");
	return NULL;
}

int main(){
	pthread_t main_thread;
	pthread_t thread_two;
	int x = 10;
	int res = pthread_create(&main_thread, NULL, task_a, &x);
	printf("res = %d\n", res);
	res = pthread_create(&thread_two, NULL, task_b, NULL);
	printf("res = %d\n", res);


	pthread_join(main_thread, NULL);
	pthread_join(thread_two, NULL);
	return 0;
}
