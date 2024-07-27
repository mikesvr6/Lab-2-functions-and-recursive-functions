/* To demonstrate and understand recursive functions we will use the Fibonacci sequence. 
The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. 
The first two terms of the Fibonacci sequence are 0 followed by 1 */

#include "mbed.h"

int t_1 = 0; // first term of the sequence
int t_2 = 1; // second term of the sequence
int next_term = 0; // what will we the next term e.g.

int max_terms = 10; // max term in the sequence

// main() runs in its own thread in the OS
int main()
{

printf("fibonacci series: %d,%d, \r\n", t_1, t_2); // printing a command line to say the sequence and the starting numbers

for( int i=0 ; i<max_terms ; i++ ){ // stating the terms of the for function, 
    next_term = t_1 + t_2;
printf(" %d \r\n" , next_term);
t_1 = t_2;
t_2 = next_term;
}

    while (true) {

    }
}

