#include <stdio.h>
int main(void)
{
	//�����ַ�����
	char prove;
	//���� �ַ���
	char password[20] = { 0 };
	printf("����������:");
	//���鱾����ǵ�ַ���ü�&
	scanf("%s", password);
	//����\n��ֹ����Ԥ����Ľ��� 
	//�ڴ������д�������Ļس�Ҳ�ᱻ�����ַ�������ȡ
	getchar();
	printf("��ȷ������Y/N:");
	prove = getchar();
	if (prove == 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("ȷ��ʧ��");
	return 0;
}