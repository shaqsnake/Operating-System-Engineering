#include <unistd.h>
#include <stdio.h>

void fun()
{
    for (;;)
    {
        printf("Hello, I'm fun!\n");
        sleep(1);
    }
}

int main() {
    int a[5] = {0};
    
    // Overflow!!!
    a[5] = (int)fun;
    a[6] = (int)fun;
    a[7] = (int)fun;

    return 0;
}