#include <stdio.h>

int main(void){
    int num_1;
    int num_2;
    int num_3;
    int num_4;
    int ans;

    printf("Enter number one:\n");
    scanf("%d",&num_1);
    printf("Enter number two:\n");
    scanf("%d",&num_2);
    printf("Enter number three:\n");
    scanf("%d",&num_3);
    printf("Enter number four:\n");
    scanf("%d",&num_4);

    ans = num_1+num_2+num_3+num_4;

    printf("Summen er %d.\n",ans);
    return 0;
}