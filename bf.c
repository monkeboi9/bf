#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    // number of cells
    int mem[128] = {0};
    // amount of characters the code can be. this can be changed
    char code[512] = {0};
    // this represents what character in the code is currently selected.
    int cmd = 0;
    // a int that represents the selected cell in the variable "mem"
    int pointer = 0;

    printf("Monkeboi's BrainFuck interpereter v0.2\n: ");
    scanf("%s", &code);
    int length = strlen(code);

    while (cmd < length) {
        switch (code[cmd]) {
            case '[':
                if (mem[pointer] == 0) {
                    // Skip the code inside the loop
                    int nest = 1;
                    while (nest > 0) {
                        cmd++;
                        if (code[cmd] == '[') {
                            nest++;
                        } else if (code[cmd] == ']') {
                            nest--;
                        }
                    }
                }
                break;
            case ']':
                if (mem[pointer] != 0) {
                    // Reverse the direction of the loop
                    int nest = 1;
                    while (nest > 0) {
                        cmd--;
                        if (code[cmd] == ']') {
                            nest++;
                        } else if (code[cmd] == '[') {
                            nest--;
                        }
                    }
                }
                break;
            case '>':
                pointer++;
                break;
            case '<':
                pointer--;
                break;
            case '+':
                mem[pointer]++;
                break;
            case '-':
                mem[pointer]--;
                break;
            case '.':
                putchar(mem[pointer]);
                break;
            case ',':
                mem[pointer] = getchar();
                break;
        }
        cmd++;
    }

    return 0;
}
