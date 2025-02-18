#include<stdio.h>
int main() {
    int a,b;
    printf("enter ur mark\n");
    scanf("%d",&a);
    printf("enter ur attendence in percent\n");
    scanf("%d",&b);
    if(a>75){
        if (b>90) {
            printf("you are deserved for best student award\n");
        }
        else {
            printf("sry you are not deserved for that award\n");
        }
            } 
            else{
                printf("dont give up \n");
                printf("keep trying\n");
            }
            return 0;
}
