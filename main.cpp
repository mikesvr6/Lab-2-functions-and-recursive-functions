/* To demonstrate and understand recursive functions we will use the Fibonacci sequence. 
The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. 
The first two terms of the Fibonacci sequence are 0 followed by 1 */

#include "mbed.h"

int t_1 = 0; // first term of the sequence
int t_2 = 1; // second term of the sequence
int next_term = 0; // what will we the next term e.g.

int max_terms = 10; // max term in the sequence

int fib(int n){

//inp: position of the fib sequence
// out: thr number in that sequence

if(n==0) // if n is equal to a value of 0
    return 0;

if(n==1) // // if n is equal to a value of 1
    return 1;

else{
    return(fib(n-1) + fib(n-2)); // This is the return to highlight the special terms of the fibonacci sequence of the nect term being the sum of the previous teo terms


}
}

// main() runs in its own thread in the OS
int main()
{

/*printf("fibonacci series: %d,%d, \r\n", t_1, t_2); // printing a command line to say the sequence and the starting numbers

for( int i=0 ; i<max_terms ; i++ ){ // stating the terms of the for function, 
    next_term = t_1 + t_2;
printf(" %d \r\n" , next_term);
t_1 = t_2;
t_2 = next_term;
}
*/

for(int i=0;i<max_terms; i++){ // for function used as we want to loop for a defined amount of times in this case as long as i is below the value of max_terms

    printf("%d, \r\n ", fib(i)); // print to command console the next term in ther fib sequence
}

    while (true) {

    }
}

