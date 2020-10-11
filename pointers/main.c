

#include <stdio.h>

int main()
{
int a[4]={101,4,9,25,36};


printf("%d\n", a);
printf("%p\n", a);
printf("%d\n", *a);
printf("%d\n", *a+1);
printf("%d\n", *(a+1));

printf("%u\n", &a);
printf("%u\n", &a[0]+1);
printf("%u\n", &a+1);
printf("%u\n", &a+2);

    return 0;
}
