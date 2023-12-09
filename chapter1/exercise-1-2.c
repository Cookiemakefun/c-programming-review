#include <stdio.h>

int main()
{
    /*
      It will get a warnning if use '\c' 
      An unknown escape sequence: '\c'
      But still can run and print 'the Hello, Worcld!'
    */
    printf("Hello, Wor\cld!\n");
    return 0;
}
