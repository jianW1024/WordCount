#include<stdio.h>
#include<string.h>
#include<stdlib.h>

FILE* fp;
char filename[50];//用来存放文件名
char choose = 'c';//用来选择
int num = 0;//用来统计目标文件字符/单词个数
void danci();//用来查询单词数
void zifu();//用来查询字符数

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
		printf("计数方式输入错误");
	}
	//fclose(fp);  我不会dos指令。。。。。你想办法让这个cmd进入到你的哪个存放。exe的文件夹内这样？
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
	printf("%s文档中的单词数共有: %d个\n", filename, num);
}

void zifu() {
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("文件名或地址输入错误");
	}
	while (!feof(fp)) {
		int totest = fgetc(fp);
		if (totest != EOF)
		{
			num++;
		}
	}
	fclose(fp);
	printf("%s文档中的字符数共有: %d个\n", filename, num);

}


