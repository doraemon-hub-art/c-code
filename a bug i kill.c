#include <stdio.h>
int main(void)
{
	char password, prove;
	printf("����������:");
	scanf("%s", &password);
	getchar();
	printf("��ȷ������Y/N");
	prove = getchar();
	if (prove == 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("ȷ��ʧ��");
	return 0;
}