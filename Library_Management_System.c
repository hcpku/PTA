#include <Stdio.h>

 typedef struct books{
    char name;
    char auther;
    int isn;
} book1;

int main() {
    int p;
    printf("查找书籍功能请输入1\n");
    printf("添加书籍功能请输入2\n");
    printf("删除书籍功能请输入3\n");
    scanf("%d", &p);
    book1 arrbook[1000000];
    book1 arrbook2[1000000];
    book1 arrbook3[10000];
//    int x = 0, y = 0,z = 0;
    int a=0, b=0 ,c=0;
    int ture[1000000];
    int ben;
    int ben2;
    if( p==1 ){
        printf("请输入你要查询的书籍名称：");
        scanf("%s", &arrbook3[0].name);
        for( int h = 0; h<1000000; h++){
            if( arrbook3[0].name==arrbook[h].name ){
                printf("您要找的书籍为%d号书籍", h);
                break;
            }
        }
    }
    if( p==3 ){
        printf("需要删除几本书：");
        scanf("%d", &ben2);
        printf("请输入您要删除的书籍的书名：");
        for( int x = 0; x<ben2; x++){
            scanf("%s", &arrbook2[a].name);
        }
        for( int y = 0; y<ben2; y++){
            for( int z = 0; z<1000000; z++){
                if( arrbook2[y].name==arrbook[z].name ){
                    ture[z] = 0;
                    break;
                }
            }
        }
    }
   if( p==2 ){
        printf("需要添加几本书：");
        scanf("%d", &ben);
        printf("请输入需要添加的书名（例如：平凡的世界 活着）：");
        for( ; a<ben;a++){
        scanf("%s", &arrbook[a].name);
        ture[a] = 1;
        }
        printf("请输入书名对应的作者（例如:路遥 余华）：");
        for( ;b<ben; b++){
            scanf("%s", &arrbook[b].auther);
        }
        printf("请输入书名对应的isbn码：");
        for( ;c<ben; c++){
            scanf("%d", &arrbook[c].isn);
        }
    }
}