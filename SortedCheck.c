#include <stdio.h>
#define k 9
int moana ( int v[], int n )
{
    for (int i = 0; i < n-1; i++)
        if ( v[i] > v[i+1] )
            return 1;
    return 0;
}
int main()
{
    int v[k];
    printf ("enter %d numbers: ", k);
    for (int i = 0; i < k; i++)
        scanf("%d", &v[i]);
    if (moana ( v, k ))
        printf("this array isn't sorted ascendingly");
    else
        printf("array's elements are sorted in an ascending way");
    return 0;
}
