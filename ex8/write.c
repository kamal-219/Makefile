#include<stdio.h>
#include<stdlib.h>
#include"write.h"
void write(const char *filename, const char *mode, const char *text) {
    FILE *fp = fopen(filename, mode);
    if (fp == NULL) {
        perror("Error ");
        return;
    }

        if (fprintf(fp, "%s\n", text) < 0) {
        perror("Error writing to file");
    } else {
           printf("Written to file: %s\n", text);
    }

    fclose(fp);
}

