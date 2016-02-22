#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//Premiere fonction de tache
void* task_a(void* p_data){
	int* x = (int*) p_data;
	printf("Je suis A!\n");
	printf("X vaut %d\n", *x);
	return NULL;
}
//Seconde fonction de tache
void* task_b(void* p_data){
	printf("Je suis B!\n");
	return NULL;
}

int main(){
	pthread_t main_thread;
	pthread_t thread_two;
	int x = 10;
	//Creation et lancement des threads 
	//Passage d'un pointeur sur la variable x lors de la creation du thread
	int res = pthread_create(&main_thread, NULL, task_a, &x);
	printf("res = %d\n", res);
	res = pthread_create(&thread_two, NULL, task_b, NULL);
	printf("res = %d\n", res);

	//Attendre que les threads se soient exécutés avant de terminer le prog
	pthread_join(main_thread, NULL);
	pthread_join(thread_two, NULL);
	return 0;
}
