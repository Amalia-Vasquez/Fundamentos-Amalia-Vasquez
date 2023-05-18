#include <stdio.h>
#include <stdlib.h>

int main () {

    int arr[10];

    for (int i = 0; i <10 ; i++)
    {
        arr[i] = i+1;
        printf("%d\n",arr[i]);
    }
    

    return 0;
}