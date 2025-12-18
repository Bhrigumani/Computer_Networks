// Stop and Wait program

#include<stdio.h>

int main(){
    int n, i;
    printf("Enter number of frames to send: ");
    scanf("%d", &n);

    for(i = 1; i<= n; i++){
        printf("Frame %d sent\n", i);
        printf("Acknowledgement for frame %d received\n", i);
    }

    printf("All frames sent successfully.\n");
    return 0;
}
