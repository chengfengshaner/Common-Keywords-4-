//static���ξֲ��������ı�ֲ��������������ڣ�������ʱ�ı�����Ĵ洢���ͣ�
// 
//ջ�� - �ֲ���������������
//���� - ��̬�ڴ����
//��̬�� - ȫ�ֱ�����static���εľ�̬����
// 
//aƽʱ������ջ���ģ���staticʹa�洢�ھ�̬����ʹ�������������ӵ��������Ϊֹ

//extern �����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

#include <stdio.h>
//��������
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);

	return 0;
}