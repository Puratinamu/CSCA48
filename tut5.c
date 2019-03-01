#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

/*
Remember this?
This function concatenates strSrc at the end of strDest using pointers
*/
void stringConcatenate(char *strDest, char *strSrc) {

    if (strDest && strSrc) {
        int len_strDest = strlen(strDest);
        //code goes here
        for (int i = len_strDest; i <= len_strDest + strlen(strSrc); i++) {
            // printf("%d %c\n", i, strSrc[i - len_strDest]);
            strDest[i] = strSrc[i - len_strDest];
        }
    }

}


void testWithNormalInput() {
     char string[20] = "abc";

    stringConcatenate(string, "def");

    if (strcmp("abcdef", string) == 0) {
        printf("test 1 success\n");
    } else {
        printf("test 1 failed!\n");
    }
}


void testWithEmptyStrings() {
    char string[20] = "";

    stringConcatenate(string, "");

    if (strcmp("", string) == 0) {
        printf("test 2 success\n");
    } else {
        printf("test 2 failed!\n");
    }
}


void test_empty_dest() {
    char string[20] = "";

    stringConcatenate(string, "abc");

    if (strcmp("abc", string) == 0) {
        printf("test 3 success\n");
    } else {
        printf("test 3 failed!\n");
    }
}


void test_empty_src() {
    char string[20] = "abc";

    stringConcatenate(string, "");

    if (strcmp("abc", string) == 0) {
        printf("test 4 success\n");
    } else {
        printf("test 4 failed!\n");
    }
}


void test_null_dest() {
    char *string = NULL;

    stringConcatenate(string, "abc");

    if (!string) {
        printf("test 5 success\n");
    } else {
        printf("test 5 failed!\n");
        printf("%s\n", string);
    }
}

void test_null_src() {
    char *string = "abc";

    stringConcatenate(string, NULL);

    if (strcmp(string, "abc") == 0) {
        printf("test 6 success\n");
    } else {
        printf("test 6 failed!\n");
        printf("%s\n", string);
    }
}


 int main() {

    testWithNormalInput();
    testWithEmptyStrings();
    test_empty_dest();
    test_empty_src();
    test_null_dest();
    test_null_src();

 }