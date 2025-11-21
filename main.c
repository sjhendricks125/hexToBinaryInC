#include <stdio.h>

char userInput(); 
int toInt(char input);

int main(){
    char input = userInput();
    int integer = toInt(input);
    if (integer < 0){
        printf("Invalid hex: ")
        return 1;
    }
    
    return 0;
}

int toInt(char input){
    input = toupper((unsigned char)input);
    switch (c){
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
        default : return -1;

    }
}

char userInput(){
    char input;
    printf("Enter a Hexadecimal digit: ");
    scanf(%c, input);
    return input; 
}