#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char filename[250];
    int wordCount = 0;

    if (argc < 2) {
        printf("   Enter a file name: ");
        fflush(stdout);
        scanf("%s", filename);
        fflush(stdout);
    // int isspace(int c)
    } else {
        strcpy(filename, argv[1]);
        fflush(stdout);
    }

    FILE *in = fopen(argv[1], "r");
    if (!in)
    {
        printf("File %s does not exist\n", argv[1]);
        return 2;
    }

    while( 1 ) {
        int c = fgetc( in );
        if (isspace(c)) {
            wordCount++;
        }
        if( c == EOF ) break;
    }

    wordCount++;

    printf("Word count: %d", wordCount);

    fclose(in);
    exit(0);
}