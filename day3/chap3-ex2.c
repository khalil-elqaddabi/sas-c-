#include <stdio.h>
#include <string.h>

int main()
{
  int i, degit;
  int count[10] = {0};
  long n;
  printf("Entrez un nombre : ");
  scanf("%ld", &n);
  while (n > 0)
  {
    degit = n % 10;
    count[degit]++;
    n /= 10;
  }
  printf("Chiffre     :");
  for (i = 0; i < 10; i++)
  {

    printf(" %d ", i);
  }

  printf("\n");
  printf("Occurrences :");
  for (i = 0; i < 10; i++)
  {

    printf(" %d ", count[i]);
  }

  return 0;
}
