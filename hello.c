#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("enter your name:");//ask user to enter name
    
    printf("hello, %s\n", name);
}