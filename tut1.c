#include<stdio.h>
#include<math.h>
#include <string.h>

void part1() {
    int a =2;
    int b =0;
    int c =7;

    if ((a=b && (c=3) & b==0)) {
        printf("Is this going to get printed?\n");
    }
    else {
        printf("Or is this going to get printed?\n");
    }
}

void part2() {
    double double_sqrt_i;
    int int_sqrt_i;
    for (int i = 0; i < 100; i++) {
        double_sqrt_i = sqrt((double) i);
        int_sqrt_i = (int) double_sqrt_i;
        if (double_sqrt_i == int_sqrt_i) {
            printf("%i\n", i);
        }
    }
}

int main() {

    char input[30];

    printf("Enter function to run.\n");
    gets(input);
    if (strcmp(input, "part1") == 0) {
        part1();
    }
    else if (strcmp(input, "part2") == 0) {
        part2();
    } else {
        printf("Unrecognized function name.\n");
    }
    
    return 0;
}
