//����Ļ������˷��ھ���
//������9�У��������кž��Ƕ��٣���ȷ���У���ȷ����
#include <stdio.h>
int main(void)
{
	int i = 0;//��
	//ȷ����ӡ9��
	for (i = 1; i <= 9; i++)
	{
		//��ӡ1��
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf(" %d * %d = %-2d ", i, j, i*j);

		}
		//����س�����
		printf("\n");
	}
	return 0;
}