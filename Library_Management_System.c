#include <stdio.h>

typedef struct books {
    char name[100];
    char auther[100];
    int ibsn;
} book1;

int main() {
    FILE *library;
    library = fopen("./书籍管理.txt", "w+");
    int p;
    printf("查找书籍功能请输入1\n");
    printf("添加书籍功能请输入2\n");
    printf("删除书籍功能请输入3\n");
    scanf("%d", &p);
    book1 arrbook[10000];
    book1 arrbook2[10000];
    book1 arrbook3[10000];
//    int x = 0, y = 0,z = 0;
    int a = 0;
    int ture[10000];
    int ben;
    int ben2;
    if (p == 1) {
        printf("请输入你要查询的书籍名称：");
        scanf("%s", &arrbook3[0].name);
        for (int h = 0; h < 10000; h++) {
            if (arrbook3[0].name == arrbook[h].name) {
                printf("您要找的书籍为%d号书籍\n", h);
                break;
            }
            if (arrbook3[0].name != arrbook[h].name && h == 99) {
                printf("图书馆无此书！");
            }
        }
    }
    if (p == 3) {
        printf("需要删除几本书：\n");
        scanf("%d", &ben2);
        printf("请输入您要删除的书籍的书名：");
        for (int x = 0; x < ben2; x++) {
            scanf("%s", &arrbook2[a].name);
        }
        for (int y = 0; y < ben2; y++) {
            for (int z = 0; z < 100; z++) {
                if (arrbook2[y].name == arrbook[z].name) {
                    ture[z] = 0;
                    break;
                }
            }
        }
    }
    if (p == 2) {
        printf("需要添加几本书：");
        scanf("%d", &ben);
        printf("请输入需要添加的书名和作者（例如：平凡的世界 路遥）：");
        for (; a < ben; a++) {
            scanf("%s %s", &arrbook[a].name, &arrbook[a].auther);
            ture[a] = 1;
        }
        for( int h = 0; h < ben; h++){
            fprintf( library, "书名：%s 作者：%s\n", arrbook[h].name, arrbook[h].auther);
        }
        fclose(library);
        printf("添加成功。");
//        for( int h = 0; h < ben ; h++){
//            fprintf( library, "%c", arrbook[h].name);
//        }
//        printf("请输入书名对应的作者（例如:路遥 余华）：");
//        for (; b < ben; b++) {
//            scanf("%s", &arrbook[b].auther);
//        }
//        for( int h = 0; h < ben ; h++){
//            fprintf( library, "%c", arrbook[h].auther);
//        }
//        printf("请输入书名对应的isbn码：");
//        for (; c < ben; c++) {
//            scanf("%d", &arrbook[c].ibsn);
//        }
//        for( int h = 0; h < ben ; h++){
//            fprintf( library, "%d", arrbook[h].ibsn);
//        }
    }
}