#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
//首先将123传到n这里
//程序运行到if这里，进行判断,123>9条件成立，进行下一步,进入if
//接着将123/10 = 12余的3丢掉
//函数接着调用自己
//12>9条件成立，继续进行下一步，进入if
//再将12/10 = 1 余的2丢掉
//函数再次调用自己
//此时1>9条件不成立，进行到printf处，1%10 = 0余1，将1输出
//到现在，递归函数的条件已经终止(不成立)，开始进行逐层返回
//梳理一下层数
//1层 输入 123，
//2层 输入 12
//3层 输入 1
//4层 条件不成立打印出1
//由2层开始逐层向上返回
//2层 12%10 = 1余数 2，将2输出
//1层 123%10 = 12余数3，将3输出
//最后得出结果1 2 3 
int main(void)
{
	unsigned int num = 0;
	scanf_s("%d", &num);
	print(num);
	return 0;
}
