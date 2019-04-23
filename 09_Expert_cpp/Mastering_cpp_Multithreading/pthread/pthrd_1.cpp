#include<pthread.h>
int pthread_create(
	pthread_t *thread,
	const pthread_attr_t *attr,
	void *(* start_routine) (void *),
	void *arg
)
// pthread_t *thread -> thread handle pointer
// pthread_attr_t *attr -> thread attribute
// void *(* start_routine) (void*0) -> thread function pointer
// void *arg -> thread argument

int pthread_join(pthread_t *thread, void **retval);
// Here the function blocks the caller thread untill the thread passed in the first argument exist.

int pthread_exit(void *retval);
// Here retval is the exit code of the thread that indicate the exit code of the thread that invoke the function.

int pthread_join(pthread_t *thread, void **retval);
// Here the function blocks the caller thread untill the thread passed in the first argument exist.

int pthread_exit(void *retval);
// Here retval is the exit code of the thread that indicate the exit code of the thread that invoke the function.

int pthread_join(pthread_t *thread, void **retval);
// Here the function blocks the caller thread untill the thread passed in the first argument exist.

int pthread_exit(void *retval);
// Here retval is the exit code of the thread that indicate the exit code of the thread that invoke the function.

int pthread_join(pthread_t *thread, void **retval);
// Here the function blocks the caller thread untill the thread passed in the first argument exist.

int pthread_exit(void *retval);
// Here retval is the exit code of the thread that indicate the exit code of the thread that invoke the function.

int pthread_join(pthread_t *thread, void **retval);
// Here the function blocks the caller thread untill the thread passed in the first argument exist.

int pthread_exit(void *retval);
// Here retval is the exit code of the thread that indicate the exit code of the thread that invoke the function.

int pthread_join(pthread_t *thread, void **retval);
// Here the function blocks the caller thread untill the thread passed in the first argument exist.

int pthread_exit(void *retval);
// Here retval is the exit code of the thread that indicate the exit code of the thread that invoke the function.

int pthread_join(pthread_t *thread, void **retval);
// Here the function blocks the caller thread untill the thread passed in the first argument exist.

int pthread_exit(void *retval);
// Here retval is the exit code of the thread that indicate the exit code of the thread that invoke the function.

pthread_t pthread_self(void)
// Here function returns the thread ID

 
