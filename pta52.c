#include<stdio.h>

int main(){
    int x;
    int wei;
    int y;
    scanf("%d",&x);
    int xx=x;
    for(wei=1; (x/10)>0; wei++){
        x/=10;
    }
    for(y=0; xx>0; xx = (xx - (xx%10))/10){
        y+=(xx%10);
    }
    printf("%d %d", wei, y);
}