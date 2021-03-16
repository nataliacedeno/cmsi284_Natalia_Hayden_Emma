#include <stdio.h>
#include <time.h>

int main() {

    printf("This program times how long you can hold your breath\n");
    printf("Take a deep breath then press 'Enter' to start\n");
    printf("When you have to exhale press 'Enter' again and the duration will be displayed in minutes and seconds");
    
    fflush(stdout);
    
    char c;
    time_t initial;
    time_t current;

    c = fgetc(stdin);
    if(c == 0x0A){
        printf("\nSTART\n");
        initial = time(NULL);
    }

fflush(stdout);

    c = fgetc(stdin);
    if(c == 0x0A){
        printf("STOP\n\n");
        current = time(NULL);

        int elapsed = current-initial;
        int minutes = elapsed/60;
        int seconds = elapsed%60;
        printf("%d Minutes\n%d Seconds", minutes, seconds);
    }
}