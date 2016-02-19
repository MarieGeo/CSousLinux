#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* task_a(void* p_data){
	printf("Je suis A!\n");
	return NULL;
}

int main(){
	pthread_t main_thread;
	int res = pthread_create(&main_thread, NULL, task_a, NULL);
	printf("res = %d\n", res);

	pthread_join(main_thread, NULL);
	return 0;
}
