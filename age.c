#include <stdio.h>
#include <stdbool.h>
main()
{
  int age;
char name[30];
  printf("what is your name");
  scanf("%s",name);
  printf("and your age?");
  scanf("%d",& age);
        printf("you're %s and you're %d years old .,"name,age);
  return 0;
}
