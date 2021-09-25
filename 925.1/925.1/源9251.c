#include<stdio.h>
struct stu
{
	char name[20];
	int age;
	char score;
};

struct book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct stu s = { "°¡°¡°¡","22","1234"};
	printf("%s %d %d\n", s.name, s. age, s.score);
	struct stu* ps = &s;
	printf("%s %d %d\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %d", ps->name, ps->age, ps->score);

	return 0;
}