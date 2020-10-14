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
/*2147500000
// fib(-2147467296) = 0
//2147400000
//fib(2147400000) = 4111044352
 2147483645
 fib(2147483645) = 13886581
 2147483649
 fib(-2147483647) = 0
 2147483647
 fib(2147483647) = 3224697117
 2147483648
 fib(-2147483648) = 0
 */
 //2147483647 is the largest argument that fib_iter() can handle
int main(void)
{
    int input;
    unsigned long bigVal = ULONG_MAX;
    while (scanf("%d", &input) == 1) {
            printf("fib(%d) = %lu\n", input, fib_iter(input));
    }
}


//9.b.1
// 0 1 2 3 4 5 6
//union sets 0 and 2
// 2 1 2 3 4 5 6
// union sets 4 and 6
// 2 1 2 3 6 5 6
// union sets 3 and 5
// 2 1 2 5 6 5 6
// union sets 0 and 1
// 2 2 2 5 6 5 6
// union sets 4 and 5
// 2 2 2 6 6 6 6
// union sets 2 and 3
// 6 6 6 6 6 6 6
//
//
//9.b.2
// This video showed four different algorithms to implement union find
// 1. union searches: Union O(n) ;find O(1)
// search the array for anything with s2's canonical element & replace with s1's
// 2. use links in find: Union O(n) ; Find O(n)
// find: need traverse the entire list to find in worst cases
// union: the one we are looking for might linked to some others, so we can't just
// change the arguments of s1 and s2, we need to do find first, the change
// the s1's entry to be find(s2)
// 3. track the sizes to avoid long chains
// put more information (size) into the data structure to help us decide which direction we should go.
// we don't want to change the one with large sizes, because it contains long chains
// we should change the smaller size to chain
// 4. path compression
//    O(log * n) almost constant time
//