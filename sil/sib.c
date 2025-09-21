#include <stdio.h>
#include <string.h>

int main() {
  
  char theSt[] = " 1234,56.789?0l ";
  int pos = strcspn(theSt, ",.?l");
  printf("without strcspn: %s as a whole\n ", theSt);
  theSt[8] = '\0';
  printf("\n 8 characters %s", theSt);

  theSt[strcspn(theSt, "l")] = '\0';
  printf("\n upto the l %s", theSt);

  theSt[strcspn(theSt, ",")] = '\0';
  printf("with %s trimed\n", theSt);
  theSt[6] = '\0';
  printf("with 6 charaters %s", theSt);
  theSt[strcspn(theSt, ".")] = '\0';
  printf("to the dot %s", theSt);

  printf("%d", pos);
  return 0;
}
/*
without strcspn:  1234,56.789?0l  as a whole

 8 characters  1234,56
 upto the l  1234,56with  1234 trimed
with 6 charaters  1234to the dot  12345
*/
