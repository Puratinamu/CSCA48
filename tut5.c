#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

/*
Remember this?
This function concatenates strSrc at the end of strDest using pointers
*/
void stringConcatenate(char *strDest, char *strSrc) {
    
    //code goes here
    for (int i = strlen(strDest) + 1; i < strlen(strDest) + strlen(strSrc); i++) {
        strDest[i] = strSrc[i - strlen(strDest) - 1];
    }

}


 int main() {

     // its time to test!

    // what values should we test with?


 }