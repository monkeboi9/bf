#include <stdio.h>
#include <string.h>
int main(void) {
    // number of cells
    int mem[128] = {0};
    // amount of characters the code can be. this can be changed
    char code[512];
    // a int that represents the selected cell in the variable "mem"
    int pointer = 0;
    printf("Monkeboi's BrainFuck interpereter v0.1\n: ");
    scanf("%s", &code);
    int length = strlen(code);
    for (int cmd = 0; cmd < length; cmd++) {
        if (code[cmd] == '>') {
            pointer++;
            //printf("%i", pointer);
        }
        else if (code[cmd] == '<') {
            pointer--;
        }
        else if (code[cmd] == '+') {
            mem[pointer]++;
        }
        else if (code[cmd] == '-') {
            mem[pointer]--;
        }
        else if (code[cmd] == '.') {
            //added ! because i'm pretty sure the <> signs are inversed
            if (!(mem[pointer] > 31 && mem[pointer < 127])) {
            printf("%c\n", mem[pointer]);
            }
            else {
                printf("invalid ascii output");
            }
        }
        else if (code[cmd] == ',') {
            scanf("%i", mem[pointer]);
        }
        else {
        }
    }
printf("\n");
}