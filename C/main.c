#include <stdio.h>

int statc(){
    
    static int a = 0;
    printf("value of a is %d\n", a);
    a++;
    return a;
}

int main()
{
    int a;
    a = statc();
    a = statc();
    a = statc();
    a = statc();
    return 0;
}
