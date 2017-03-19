#include <stdio.h>
#include <stdlib.h>
int i = 0;
int move(int n,char A,char C)
{
    printf("第%d步：把第%d号 %c----->%c\n",++i,n,A,C);
}
int hano(int n,char A,char B,char C)
{
    if(n==1)
        move(1,A,C);
    else{
        hano(n-1,A,C,B);
        move(n,A,C);
        hano(n-1,B,A,C);
    }
}
int main()
{
    int n;
    char start = 'A',help = 'B',endd = 'C';
    printf("请输入盘子的个数：");
    scanf("%d",&n);
    hano(n,start,help,endd);

    return 0;
}
