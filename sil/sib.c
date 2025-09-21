#include <stdio.h>
#include <string.h>

int main() {
  
  char theSt[] = " 1234,56.789?0l ";
  int pos = strcspn(theSt, ",.?l");
  printf("without strcspn: %s as a whole\n ", theSt);
  theSt[strcspn(theSt, ",")] = '\0';
  printf("with %s trimed\n", theSt);

  printf("%d", pos);
  return 0;
}


