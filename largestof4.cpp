#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
    int largerst = 0;
    if (a > b)
    {
        largerst = a;
    }
    if (b > a)
    {
        largerst = b;
    }
   
    if (largerst < c)
    {
        largerst = c;
    }
    if  (largerst < d)
    {
        largerst = d;
    }

    return largerst;

}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
