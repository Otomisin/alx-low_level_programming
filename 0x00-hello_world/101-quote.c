/**
 * main - a function that prints out a message
 * Return: returns a value of 1 when it runs successfully
 */
#include <stdio.h>
#include <unistd.h> //library for write function in c
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
