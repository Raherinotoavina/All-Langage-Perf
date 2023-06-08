#include <stdio.h>
#include <time.h>

int main( int argc, char * argv[] ) {

    time_t begin = time( NULL );
    
    for (int i = 0; i < 1000000000; i++) "";
    
    time_t end = time( NULL);

    unsigned long secondes = (unsigned long) difftime( end, begin );
    printf( "Finished in %ld sec\n", secondes );  
        
    return 0;
}