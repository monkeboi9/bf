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
        switch (code[cmd]) {
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

    	}
printf("\n");
}