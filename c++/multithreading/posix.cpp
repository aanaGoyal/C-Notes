#include <iostream>   // For std::cout
#include <pthread.h>  // For POSIX threads
using namespace std;

void *print_message_function( void *ptr );

int main(){
    pthread_t thread1, thread2;
    const char *message1 = "First thread ";
    const char *message2 = "Second Thread " ;
    int  geeky1, geeky2; // These variables will store the return status of pthread_create

    // Create the first thread
    // pthread_create returns 0 on success, and an error number on failure.
    geeky1 = pthread_create( &thread1, NULL, print_message_function, (void*) message1);

    // Create the second thread
    geeky2 = pthread_create( &thread2, NULL, print_message_function, (void*) message2);

    // Wait for the first thread to complete
    pthread_join( thread1, NULL);

    // Wait for the second thread to complete
    pthread_join( thread2, NULL);

    // Print the return status of pthread_create calls
//     cout << ("GeeksforGeeks 1 returns: %d\n", geeky1) << endl;
//     cout << ("GeeksforGeeks 2 returns: %d\n", geeky2) << endl;

    // Exit the program
    return 0; // In C++, it's common to use return 0; instead of exit(0); in main()
              // although exit(0) works fine.
}

void *print_message_function( void *ptr ){
    char *message;
    message = (char *) ptr;
    cout << ("%s \n", message) << endl; 
    return NULL; // A thread function should return NULL (or a specific value)
}