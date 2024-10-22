//某班的课崇排列得非常坚齐，一共有n排，每排有m张课桌。上次数学
//        考试试卷发下来了，每个学生的试卷摆在课桌上，现在要统计每个小组
//        所有学生的总分，注意，每一列是一个小組。
//输入格式
//        输入数据第一行为两个正整数n和m.n，m≤8。接下来有n行，每行有
//        m个0~100的分数，用空格隔开。
//输出格式
//        输出占一行，为m个正整数，用空格隔开，办m个小组的总分
#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int grade[x][y];
    for( int m=0; m<x; m++){
        for( int n=0; n<y; n++){
            scanf("%d", &grade[m][n]);
        }
    }
    for( int m=0; m<y; m++){
        int sum = 0;
        for( int n=0; n<x; n++){
            sum += grade[n][m];
        }
        printf("%d ", sum);
    }
}