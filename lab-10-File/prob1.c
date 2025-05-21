#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *srcFile, *destFile;
    char source[100], destination[100];
    char line[100];

    printf("Enter the source file name to be copied: ");
    gets(source);
    printf("Enter the destination file name: ");
    gets(destination);

    srcFile = fopen(source, "r");
    if (srcFile == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    destFile = fopen(destination, "w");
    if (destFile == NULL) {
        printf("Unable to create destination file.\n");
        fclose(srcFile);
        return 1;
    }

    while (fgets(line, sizeof(line), srcFile)) {
        fputs(line, destFile);
    }

    printf("Copy completed\n");

    fclose(srcFile);
    fclose(destFile);
    return 0;
}

