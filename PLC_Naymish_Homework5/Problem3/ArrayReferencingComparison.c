#include <stdio.h>
#include <time.h>


int main()
{
    subscript();   
    pointers();
    return 0;
}

// function to reference the 2D array through subscripts.
void subscript()
{ 
    clock_t start, end;
    double cpu_time_used;

    int arr[100][100];
    int i;
    int j;

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            arr[i][j] = 0;
        }        
    }

    start = clock();
    for(int j =0 ; j < 100 ; j++){
        for(int i = 0; i< < 100; i++){
            arr[i][j]; //no operation is done, only accessing the element
        }
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f, Time taken without pointer references \n", cpu_time_used);

    return;
}

// function to reference the 2D array through pointers.
void pointers()
{ 
    clock_t start, end;
    double cpu_time_used;

    int arr[100][100];
    int i;
    int j;

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            arr[i][j] = 0;
        }        
    }

    start = clock();
    for(int j = 0; j < 100 ; j++){
        for(int i = 0; i < 100; i++){
             *(*(arr+i)+j); //no operation is done, only accessing the element
        }
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f, Time taken with pointer references \n", cpu_time_used);

    return;
}