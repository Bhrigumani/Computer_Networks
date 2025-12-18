#include<stdio.h>

int main(){
    int i, n, window;
    printf("Enter total number of frames: ");
    scanf("%d", &n);
    printf("Enter window size: ");
    scanf("%d", &window);

    for(i = 1; i <= n; i++){
        printf("Frame %d sent\n", i);
        if(i % window ==0){
            printf("Acknowledgement for frame %d to %d received\n", i - window + 1, i);
        }
    }
    if(n % window != 0)
        printf("Acknowledgement for frames %d to %d received\n", n - n % window + 1, n);

    return 0;
}
