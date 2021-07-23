#include <stdio.h>
#include <string.h>

int m=0;
struct abonents
  {
        int n;
        char name[50];
        char tel[12];
  } ab[10];

  void list(void)
{
	
		printf("Список абонентов:\n");
		for(int i=0; i<10; i++)
		{
			if ((ab[i].name[0]!='0')||(ab[i].tel[0]!='0'))
			printf("%d %15s %15s\n", ab[i].n, ab[i].name, ab[i].tel);
	
			else
			{ 
			printf("No more abonents\n");
				break;
			}
		}		
}

 void plus(void)
 {
 	printf("Введите имя абонента\n");
 	scanf("%s", ab[m].name);
 	printf("Введите номер телефона абонента\n");
 	scanf("%s", ab[m].tel);
 	ab[m].n=m+1;
 	m++;
 }

 void delete(void)
 {
 	int k;
 	printf("Введите порядковый номер абонента, которого хотите удалить\n");
 	scanf("%d", &k);
 	for(int i=k-1; i<m; i++)
 	{
 		for(int j=0; j<50; j++)
 		{
 			ab[i].name[j]=ab[i+1].name[j];
 			ab[i].tel[j]=ab[i+1].tel[j];
 		}
 	}
 	m--;
 }
 void poisk(char string[50])
 {
 	int f;
 	printf("Выберете действие:\n");
 	printf("1.Поиск по имени.\n");
 	printf("2.Поиск по номеру телефона.\n");
 	scanf("%d", &f);
 		if (f == 1)
 		{
 			for(int i=0; i<10; i++)
 			{
 				if (strcmp(string, ab[i].name)==0)
 					printf("%d %15s %15s\n", ab[i].n, ab[i].name, ab[i].tel);
 			}
 			printf("Поиск окончен. Больше совпадений нет\n");
 		}
 		if (f == 2)
 		{
 			for(int i=0; i<10; i++)
 			{
 				if (strcmp(string, ab[i].tel)==0)
 					printf("%d %15s %15s\n", ab[i].n, ab[i].name, ab[i].tel);
 			}
 			printf("Поиск окончен. Больше совпадений нет\n");
 		}
 }

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
 			delete();
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