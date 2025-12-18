// Selective repeat protocol

#include<stdio.h>

int main(){
    int i, n, window;
    printf("Enter total number of frames: ");
    scanf("%d", &n);
    printf("Enter the window size: ");
    scanf("%d", &window);

    for(i = 1; i <= n; i++){
        printf("Frame %d sent\n", i);
        printf("Acknowledgement for frame %d received\n", i);
    }

    printf("All frames transmitted using Selective Repeat.\n");
    return 0;
}
