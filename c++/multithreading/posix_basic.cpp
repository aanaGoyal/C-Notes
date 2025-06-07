#include <stdio.h>
#include <pthread.h>

void* myThread(void* arg) {
    printf("Hello from the thread!\n");
    return NULL;
}

int main(){
    pthread_t tid;

    // Create a thread
    pthread_create(&tid, NULL, myThread, NULL);
    // First NULL --->> Attributes
    // Second NULL --->> Arguments

    // Wait for thread to finish
    pthread_join(tid, NULL);

    printf("Thread finished.\n");

    return 0;
}
