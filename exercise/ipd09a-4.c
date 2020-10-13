#include <libipd.h>
#include <stdio.h>

// Computes the `n`th triangular number.
//
// Examples: See test_tri()
unsigned long tri(int n)
{
    return n* (n+1)/2;
}
//or
unsigned long tri2(int n)
{
    int sum = 0;
    for(int i = 0;i<=n;i++){
        sum = i+ sum;
    }
    return sum;
}

//0,1,3,6,10,15
void test_tri(void)
{
    CHECK_ULONG( tri(5), 15 );
    CHECK_ULONG( tri(3), 6 );
    CHECK_ULONG( tri(2), 3 );
    CHECK_ULONG( tri(0), 0 );
}

void test_tri2(void)
{
    CHECK_ULONG( tri(5), 15 );
    CHECK_ULONG( tri(3), 6 );
    CHECK_ULONG( tri(2), 3 );
    CHECK_ULONG( tri(0), 0 );
}




int main(void)
{
    test_tri();
    test_tri2();
}
