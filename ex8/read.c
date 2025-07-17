#include<stdio.h>
#include<string.h>
#include"read.h"
#include<stdlib.h>
#define line 250
void read(const char *filename) {
    FILE *fp = fopen(filename, "r");  
    if (fp == NULL) {
        perror("Error ");
        return;
    }

    char store[line];
    while (fgets(store, sizeof(store), fp)) {
        printf("%s",store);  
    }

    fclose(fp);  
}
