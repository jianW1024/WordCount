#include<stdio.h>
#include<string.h>
#include<stdlib.h>

FILE* fp;
char filename[50];//��������ļ���
char choose = 'c';//����ѡ��
int num = 0;//����ͳ��Ŀ���ļ��ַ�/���ʸ���
void danci();//������ѯ������
void zifu();//������ѯ�ַ���

int main()
{
	//scanf("%s", filename);
	//printf("%s", filename);
	//scanf("%c",&choose);
	//printf("test\n");
	//scanf("%s",filename);   
	scanf("-%c %s", &choose, filename);
	//gets(filename);
	//scanf("%s", filename);
	//scanf("%c", &choose);
	if (choose == 'w')
	{
		danci();
	}
	else if (choose == 'c')
	{
		zifu();
	}
	else {
		printf("������ʽ�������");
	}
	//fclose(fp);  �Ҳ���dosָ�������������취�����cmd���뵽����ĸ���š�exe���ļ�����������
	system("PAUSE");
	return 0;
}

void danci() {
	if ((fp = fopen(filename, "r")) == NULL)
	{
		num = 0;
	}
	while (!feof(fp)) {
		int totest = fgetc(fp);
		if (totest == ',' || totest == ' ')
		{
			num++;
		}
	}
	num += 1;
	fclose(fp);
	printf("%s�ĵ��еĵ���������: %d��\n", filename, num);
}

void zifu() {
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("�ļ������ַ�������");
	}
	while (!feof(fp)) {
		int totest = fgetc(fp);
		if (totest != EOF)
		{
			num++;
		}
	}
	fclose(fp);
	printf("%s�ĵ��е��ַ�������: %d��\n", filename, num);

}


