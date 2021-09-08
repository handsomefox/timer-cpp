#include "pch.h"
#include "timer.h"

void count()
{
    size_t n = 2000000;
    timer example("Timer example");

    while (n > 0)
        n -= 1;
}

int main()
{
    count();
    return 0;
}
