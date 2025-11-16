#include<stdio.h>

static inline void write_satp(int value)
{
    __asm__ __volatile__("csrw satp, %w0" :: "r"(value));
}

int main()
{

}


