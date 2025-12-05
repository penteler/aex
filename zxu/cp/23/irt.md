This program can be compiled without any errors but the executable running as intended after  taking in any user input. Inside the main function we have two variables that are being declared `num` and `i` both of them are integers. After that in the next line the variable `fact` is being declared which is a `long int` making it atleast 32-bits in size. It is being initiazed to `1` but factorials of relatively small numbers can be quite large so the 32-bits are not excessive. The keyword `fact` is  obviously short for factorial. Then a prompt for the user is being printfed and an integer input is being scanfed. The user input is being assigned to the address of num `&num`. If statement prints `"factorial doesn't exist for negative numbers"` if the condition `num < 0` is true or else a for loop will begin. For every index `i = 1` (initialization statement), if `i <= num`(test expression), `i++`(update statement). Which seems like it means that initially i is set to 1 and it will be incremented by 1 for as long as i is less than or equal to `num` from the user input so we will run the loop increasing i untill it is equal to num but it will never exeed `num`. However when we run the program with a 0, i is initially 1 it gets the condition `i <= 0` is not true because 1 !=< 0. On the contrary is is greater than zero so the loop doesn't run at all, not even once. The value of `fact` remains 1 and the following print statement prints `"The factorial of 0 is 1"`. If we run it with a 1, the condition `num <= i` is true because 1 = 1 so the 1 becomes 1 times 1 because `fact *=i` multiplies the current value of i with the current value of fact but after running the loop once the update statement `i++` increases 1 by 1 and that makes i = 2. Since 2 is greater than 1 the loop doesn't run a second time and 1! is 1 gets printfed. Now if the user input is 2 the same story would repeat but the loop would run when i reaches 2 because 2 !> 2 and the value of fact would become 2 times 1 but after this i becomes 3 the condition `i <= num` is no longer true and 2! is 2 gets printfed. for three however this loop would run a third time to multiply the current value of i which is 3 by the current value of fact which is 2 and 3! is 6 would get printfed. This cycle would  continue 1 iteration after another for larger values of `num`. Since we are not recursively making our way down to the base case before finding our way back upto num! this aproach at least in this case is better performance wise. How exactly would it use more memory or processing? Could you also point out my spelling mistakes make other corrections to improve my understanding of such iterative programs?


```c
#include <stdio.h>

int main() {
	int num, i;
	long int fact = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num < 0) {
		printf("Factorial of a negative number doesn't exist.\n");
	} else {
		for (i = 1; i <= num; i++)
			fact *=i;
		printf("Factorial of %d is %ld\n", num, fact);
	}

	return 0;
	```