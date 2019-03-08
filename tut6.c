#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000 // add a few extra zeroes for quicksort ;)

int compare(const void *a, const void *b) {

    float x = *(float*)a;
    float y = *(float*)b;

    if (x > y) {
        return 1;
    } else if (x < y) {
        return -1;
    } else {
        return 0;
    }
}


void quick_sort() {
    // initialize array with 1 million floating point numbers
    float array[SIZE];

    // fill the array with random numbers
    for (int i = 0; i < SIZE; i++) {
        array[i] = drand48();
    }

    // sort it using qsort
    qsort(array, SIZE, sizeof(float), compare);
}


void bubble_sort() {
    // initialize array with 1 million floating point numbers
    float array[SIZE];

    // fill the array with random numbers
    for (int i = 0; i < SIZE; i++) {
        array[i] = drand48();
    }

    // sort it using bubble sort
    float temp;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (array[j] < array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

}


int main() {

    quick_sort();

}