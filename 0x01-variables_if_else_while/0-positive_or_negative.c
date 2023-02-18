#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // do not touch this code

    int n = rand() - RAND_MAX / 2;

    printf("%d ", n); // print the number

    if (n > 0) {
        printf("is positive\n"); // if the number is greater than 0, print "is positive"
    } else if (n == 0) {
        printf("is zero\n"); // if the number is 0, print "is zero"
    } else {
        printf("is negative\n"); // if the number is less than 0, print "is negative"
    }

    return 0;
}
