#include <stdio.h>
#include <time.h>

int main () {
    time_t begin = time( NULL );
    
    for (int i = 0; i < 1000000000; i++) "";
    
    time_t end = time( NULL);

    double secondes = difftime( end, begin );
    printf( "Execution time: %.2f s\n", secondes );  
      
    return 0;
}