// Implement the data link layer framing methods such as Bit Stuffing
#include<stdio.h>
#include<string.h>

int main(){
    char data[50], stuffed[100];
    int i, j=0, count= 0;

    printf("Enter bit stream: ");
    scanf("%s", data);

    for(i=0; i< strlen(data); i++){
        stuffed[j++] = data[i];
        if( data[i] == '1'){
            count++;
            if( count==5){
                stuffed[j++] = '0';
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    stuffed[j] = '\0';

    printf("\n After Bit Stuffing: 01111110 %s 01111110\n", stuffed);
    return 0;
}
