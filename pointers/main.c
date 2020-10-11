

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
    


    
int a[3][3]={{5,7,9},{40,58,36},{42,65,34}};


printf("%u\n", *(a+1)+2);
printf("%d\n", *(*(a+1)+2));
    
    
    return 0;
}
