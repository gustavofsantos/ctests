#include <stdio.h>
#include <pthread.h>

int x = 1;

void *inc_x(void *arg) { x = x + 1; return NULL; }

int main() {
    pthread_t t1, t2, t3, t4, t5, t6, t7, t8;

    pthread_create(&t1, NULL, inc_x, NULL);
    pthread_create(&t2, NULL, inc_x, NULL);
    pthread_create(&t3, NULL, inc_x, NULL);
    pthread_create(&t4, NULL, inc_x, NULL);
    pthread_create(&t5, NULL, inc_x, NULL);
    pthread_create(&t6, NULL, inc_x, NULL);
    pthread_create(&t7, NULL, inc_x, NULL);
    pthread_create(&t8, NULL, inc_x, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    pthread_join(t4, NULL);
    pthread_join(t5, NULL);
    pthread_join(t6, NULL);
    pthread_join(t7, NULL);
    pthread_join(t8, NULL);


    printf("x=%d\n", x);
    return 0;
}