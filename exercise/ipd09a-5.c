#include <limits.h>
#include <stdio.h>

// Computes the Fibs[n] iteratively.
//
// This is fast, but it gives the correct result only when the
// result <= ULONG_MAX.
unsigned long fib_iter(int n)
{
    unsigned long curr = 0,
                  next = 1;

    while (n > 0) {
        unsigned long prev = curr;

        curr = next;
        next = prev + curr;
        n -= 1;
    }

    return curr;
}

int main(void)
{
    int input;
    unsigned long bigVal = ULONG_MAX;
    while ((scanf("%d", &input) == 1) && ( fib_iter(input) < ULONG_MAX)){

            printf("fib(%d) = %lu\n", input, fib_iter(input));

    }
}
