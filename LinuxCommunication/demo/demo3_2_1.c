#include <stdio.h>
#include <unistd.h> //sleep��Ҫ������ͷ�ļ�

int main()
{
	printf("start to learn nginx at Linux!\n");

	while (1)
	{
		sleep(1);
		printf("sleep 1 second.\n");
	}

	printf("Exit.\n");

	return 0;
}