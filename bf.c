#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    // number of cells
    int mem[128] = {0};
    // amount of characters the code can be. this can be changed
    char code[512];
    // this represents what character in the code is currently selected.
    int cmd = 0;
    // a int that represents the selected cell in the variable "mem"
    int pointer = 0;
    // this enables open bracket mode where it skips code until it reaches after a closed bracket
    bool openb = false;
    // this enables closed bracket mode where it reverses the direction of the loop until it reaches a open bracket
     bool closedb = false;
    printf("Monkeboi's BrainFuck interpereter v0.2\n: ");
    scanf("%s", &code);
    int length = strlen(code);
    while (cmd < length) {
            switch (code[cmd]) {
                case '[':
                    if (mem[pointer] != 0) {
                        openb = true;
                        break;
                    }
                    else {
                        break;
                    }
                case ']':
                    if (mem[pointer] > 0) {
                        closedb = true;
                        break;
                    }
                    else {
                        break;
                    }
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
                    printf("%c", mem[pointer]);
                    break;
                case ',':
                    scanf("%d", &mem[pointer]);
				    break;
			    }
            cmd++;
        }
printf("\n");

}
