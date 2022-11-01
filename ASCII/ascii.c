#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>

// binary to ascii
// decimal to ascii
// hexa to ascii
// oct to ascii
// text to ascii

void binary_to_ascii(int bin);
void decimal_to_ascii(int dec);
void hex_to_ascii(char hex[]);
void oct_to_ascii(int oct);
void text_to_ascii(char txt[]);

int main()
{
    char ch;
    while(TRUE)
    {
        re_choose:
        printf("1) binary to ascii \n2) decimal to ASCII \n3) Hexadecimal to ASCII \n4) Octa to ASCII \n5) text to ascii\n");
        printf("0) for exit\n\n");
        printf("Choose : ");
        ch = getch();
        system("cls");
        switch(ch)
        {
            case '0':
                break;
            case '1':
                printf("\nBinary to ASCII code\n\n");
                break;
            case '2':
                printf("\nDecimal to ASCII code\n\n");
                break;
            case '3':
                printf("\nHexadecimal to ASCII code\n \n");
                break;
            case '4':
                printf("\nOcta to ASCII code\n \n");
                break;
            case '5':
                printf("\nText to ASCII code\n \n");
                break;
            default:
                printf("\nEnter valid choose!!\n\n");
                goto re_choose;
                break;
        }
        if(ch == '0'){
            break;
        }
    }
    return 0;
}

// Binary to ascii
void binary_to_ascii(int bin){
    // code ....
}

// Decimal to ascii
void dec_to_ascii(int dec){
    // code ....
}