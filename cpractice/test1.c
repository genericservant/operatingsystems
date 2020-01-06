#include <stdio.h>

int
foo(void *i, char j)
{
  switch(j)
  {
    case 'i': printf("%d\n", *(int *)i); break;
    case 'c': printf("%c\n", *(char *)i); break;
		case 's': printf("%s\n", (char *)i); break;
    default: printf("Not found!\n");
  }
  return 0;
}



int
main(void)
{
  char i = 65, j = 'c';
	char *s = "hello";
  foo(&i, j);
	foo(s, 's');

	return 0;
}
