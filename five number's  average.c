//�����������ƽ����
#include <stdio.h>
int main(void)
{
	int a, b, c, d, e;
	float ret;
	printf("����������ɼ���\n");
	//��ʽ���ַ��� ȡ��ַ��
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	ret = (a + b + c + d + e) / 5.0;
	//С�������һλС��
	printf("%.1f", ret);
	return 0;
}