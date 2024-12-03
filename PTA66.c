//#include<stdio.h>
//#include<math.h>
//
//int main(){
//    int n, x;
//    int i = 1;
//    int m;
//    scanf("%d", &n);
//    if( n!=1 ){
//        for( ; i<=n; i++){
//            x = pow( 2 , i ) - 1;
//            if( (x%2)==1 ){
//                for( m=2; m<x; m++){
//                    if( (x%m)==0 ){
//                        break;
//                    }if( (x%m)!=0 && m==(x-1)){
//                        printf("%d\n", x);
//                        break;
//                    }
//                }
//            }
//        }
//    }else{
//        printf("None");
//    }
//
//}
#include <stdio.h>

int cnt = 0;

void print(int array[8][8]) {
    printf("---------------------------------\n");
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
}

void rec(int array[8][8], int depth) {
    if (depth == 8) {
        // 列
        for(int i = 0; i < 8; i++) {
            int sum = 0;
            for(int j = 0; j < 8; j++) {
                sum += array[j][i];
            }
            if(sum != 1) {
                return;
            }
        }

        // 从左到右的斜线
        int sum = 0;
        for(int i = 0; i < 8; i++) {
            sum += array[i][i];
        }
        if(sum != 1) {
            return;
        }

        // 从右到左的对角线
        sum = 0;
        for (int i = 0; i < 8; i++) {
            sum += array[i][7-i];
        }
        if (sum != 1) {
            return;
        }

        cnt++;
        print(array);
        return;
    }



    for (int i = 0; i < 8; i++) {
        array[depth][i] = 1;
        rec(array, depth +1);
        //print(array);
        array[depth][i] = 0;
    }

}



int main()
{

    /*  Write C code in this online editor and run it. */
    printf("Hello, World! \n");
    int array[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            array[i][j] = 0;
        }
    }
    rec(array, 0);
    printf("Hello, World!  %d\n", cnt);
    return 0;
}