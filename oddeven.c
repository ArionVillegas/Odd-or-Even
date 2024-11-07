#include <stdio.h>

int main() {

    int N1 = 0;

    printf ("Enter Input: ");
    scanf ("%d", &N1);
    
    if (N1 %2 == 0) {
        printf ("The number %d is even", N1);
    }
    
    else {
        printf ("The number %d is odd", N1);
    }
    
   

    return 0;
}
