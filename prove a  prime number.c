//����һ�����Ƿ�Ϊ������������
#include <stdio.h>
int main(void)
{
	int num;

	printf("������һ������1������:");
	scanf("%d", &num);
	//forѭ��
	for (int i = 2; i <= num - 1; i++)
	{
		//�ж�num�Ƿ��ܱ�i���� ������������Ϊ����
		if (num%i == 0)
		{
			printf("%d��������\n", num);
			//return��ֹ����
			return;

		}
	}
	printf("%d������\n", num);
	return 0;
}