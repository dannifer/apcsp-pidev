#include <stdio.h>  
#include <string.h>
struct Student 
{
        char first[20];
        char last[20];
        char age[100];
        char id[100];
};
int main() {
	struct Student arr[2];
	for (int i = 0; i < 2; i++)
	{
		printf("first Name:\n");
		scanf("%s", arr[i].first);
		printf("Last Name:\n");
		scanf("%s", arr[i].last);
		printf("Age:\n");
		scanf("%s", arr[i].age);
		printf("Student Id:\n");
		scanf("%s", arr[i].id);
	}
	for (int i = 0; i < 2; i++)
	{
		printStudent(&arr[i]);
	}
}
