#include <stdio.h>
#include <ctype.h>

char userInput(); 
int toInt(char input);
void printBinary(int value);

int main(){
    while (1){
        char input = userInput();
        int integer = toInt(input);
        int bit;
        if (integer < 0){
            printf("Invalid hex:\n");
            continue;
        }
        if (integer == 16){
            printf("Quitting...\n");
            break; 
        }
        printBinary(integer);
    }
    return 0;
}

void printBinary(int value){
    for(int i = 3; i >= 0; i--){
        int bit = (value >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int toInt(char input){
    input = toupper((unsigned char)input);
    switch (input){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
        case 'X': return 16;
        default : return -1;

    }
}

char userInput(){
    char input;
    printf("Enter a Hexadecimal digit or 'X' to quit: ");
    scanf(" %c",&input);
    return input; 
}