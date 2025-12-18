#include<stdio.h>
#include<string.h>

void xor_op(char *dividend, char *divisor, int pos){
    for(int i = 0; i < strlen(divisor); i++)
    dividend[pos + i] = (dividend[pos + i] == divisor[i]) ? '0' : '1';
}


int main(){
    char data[50], divisor[10], dividend[60];
    printf("Enter data bits: ");
    scanf("%s", data);
    printf("Enter divisor: ");
    scanf("%s", divisor);

    strcpy(dividend,data);
    int dlen = strlen(divisor);
    for(int i = 0; i < dlen; i++)
        strcat(dividend, "0");

    for(int i = 0; i <= strlen(dividend) - dlen; i++)
        if(dividend[i] == '1')
            xor_op(dividend, divisor, i);
    char remainder[10];
    strcpy(remainder, dividend + strlen(dividend) - dlen + 1);

    printf("CRC remainder: %s\n", remainder);
    printf("Transmitted codeword: %s%s\n", data, remainder);
    return 0;
}
