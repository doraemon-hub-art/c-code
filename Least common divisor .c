//շת������������������Լ��
#incldue<stdio.h>
int main(void)
{	
	int r, n, m;
	printf("���������������������");
	scanf_s("%d %d", &m, &n);
	while (m%n)
	{
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}