#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*��֪n��n��ż���������ӣ���������6������С��ͬ��������������������һ�𣬵�����������Ǻ�ɫ���������������ɫ��
Ҫ��
    1��ÿ��ֻ���ƶ�һ������
    2�������Ӳ��ܷ���С��������
    3�����ƶ��Ĺ����в��ܳ���������С��ͬ�����ӵ���һ�����������������ɫ������������Ǻ�ɫ�������
    ���⣺��n�����Ӵ�A���ƶ���C�̵�ʱ�临�Ӷ��Ƕ��٣����ʵ�����ӵ��ƶ�������
*/
int i = 0;
int move(int n,char A,char C)
{
    printf ("��%d�����ѵ�%d�Ŵ�%c---->%c\n",++i,n,A,C);
    return 0;
}
int hano(int n ,char A,char B,char C)
{
    if(n==1){
        move(1,A,B);
        move(2,A,C);
        move(1,B,C);
    }
    else{
        hano( n-1,A,B,C );//1
        move( 2*(n-1)+1,A,B );
        hano( n-1,C,A,B );//2
        move( 2*n,A,C );
        hano( n-1,B,C,A );//3
        move( 2*(n-1)+1,B,C );
        hano( n-1,A,B,C );//4
    }

    return 0;
}

int main(int argc, char const* argv[])
{
    int n;//n���������nΪ1������Ϊ2
    printf("������n��");
    scanf("%d",&n);
    char start = 'A',help = 'B',end = 'C';
    hano(n,start,help,end);
    return 0;
}
