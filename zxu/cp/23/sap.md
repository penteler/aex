Lets talk about this little program. The word boilerplate would probably be appropriate for the preprocessor directive. Void is the return type of the main function, the variable i and j are declared without being initialised for the the following loops. In the first loop i is initially set to 0 and since < 4 the condition i<4 is true the loop runs and the nested loop initialises j to 0, checks if j<=i which it is and it prints an asterisk then it seems like it prints a new line even though the following print function is outside of the nested loop. Now the i gets incremented to from 0 to 1 because of the update statement `i++` and 1<4 so the nested loop runs j gets ++ed and j is still <=i somehow this time two stars get printfed. This goes on untill we have a pattern of `*`s appears with one of them in the first line and 4 of them in the 4th line. I just want a quick clarification and then we can move on to the next subject of my choosing.
It seems so obvious now that you've pointed it out i = 0, j=0, a `* `gets printed, j = 1 the loop breaks, we get a \n, i =1, j=0, `*`printed, j=1, another `*` on the same line, j=2 the loop breaks, this goes on until i=4 and the outer loop breaks. If I have `int main( )` then I would also need `return 0;` at the end of the main function right?
```c
#include <stdio.h>

void main() {
	int i, j;
	for(i=0; i<4; i++){
		for(j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}
```