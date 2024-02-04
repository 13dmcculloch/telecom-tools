#include <stdio.h>

/* Assuming that library and object are in /usr/local/ */
#include <telecom.h> 

int main()
{
    fputs("50 mW in dBm is ", stdout);
    printf("%.2f\n", mwtodbm(50.0));

    return 0;
}
