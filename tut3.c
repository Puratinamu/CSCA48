#include<stdio.h>
#include<stdlib.h>
#include <string.h>


typedef struct record {
    char *name;
    int duration;
    char *author;
    unsigned long creation_timestamp;
    struct record *next;
} Record;

int insert_into_list(Record *head, Record record, int position) {

    while(head->next) {

    }

}

int main() {

    int list_size = 10;

    Record *record_list = malloc(sizeof(Record)* (list_size + 1));

}