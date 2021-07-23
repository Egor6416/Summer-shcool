#include <stdio.h>
#include <string.h>
#include "spravochnik3.h"

int main()
{
 int a;
 char string[50];
 for(int i=0; i<10; i++)
  	{
  		ab[i].name[0] = '0';
  		ab[i].tel[0] = '0';
	}
	while (a!=5)
	{
 		printf("Выберете действие:\n");
 		printf("1.Показать список абонентов.\n");
 		printf("2.Добавить абонента.\n");
 		printf("3.Удалить абонента.\n");
 		printf("4.Найти абонента.\n");
 		printf("5.Выйти из программы.\n");
		scanf("%d", &a);

 		if (a == 1)
 		{
 			list();
 		}
 	
 		if (a == 2)
 		{
 			plus();
 		}
 		if (a == 3)
 		{
 			deleter();
 		}
 		if (a == 4)
 		{
 			printf("Введите поисковый элемент:\n");
 			scanf("%s", string);
 			poisk(string);
 		}
 	}

return 0;
}