#include <unistd.h>
// _putchar - a function to return character to the stdout
int _putchar(char c)
{
    return (write(1, &c, 1));
}
