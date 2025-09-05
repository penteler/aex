 
- [preprocessor directives](#preprocessor-directives)
- [structure definition](#structure-definition)
- [function prototypes AKA declarations](#function-prototypes-aka-declarations)
  - [parameter list](#parameter-list)
      - [pointers](#pointers)
        - [addresses](#addresses)
        - [reading](#reading)
    - [function arguments](#function-arguments)
 
## preprocessor directives
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "Trainers.dat"
```

These lines begin with the preprocessor directive symbol `#` and hence they 
will get processed before the compilation begins. The `include` preprocessor command 
is used to tell the compiler to **include** a file. `<stdio.h>` the standard input output 
header file is a system file and that's why it has been enclosed within angle brackets. It has 
standard input output functions such as `scanf()` and `printf()` . The standard library header 
is for functions like `malloc()` and `exit()` and the string header is for 
functions like string complimentary span `strcspn()` , `strcpy()` 
and  `strlen()`. The define preprocessor directive is for defining macros and constants 
here it defines the `FILENAME` macro which is followed by a string literal. The preprocessor will 
replace FILENAME with the replacement text anywhere in the following lines.

## structure definition
```c
struct Trainer {
    int trainerID;
    char name[50];
    float salary;
    char department[50];
    char position[50];
    char dateofjoining[15];
};
```

We will begin the structure definition with the struct keyword and the tag/name of the structure. 
We can use the structure to create our any data type in fact the structure itself has been 
described as a user-defined data type and here it is a grouping of related data. 
The trainerID is an has an integer data type and name 
is a character array of 49 characters and the null terminator `/0`. These variables are also called 
structure members. `;` is the statement terminator since these statements declare a 
variable here the semicolon terminates the declaration. The float datatype holds a floating point 
number (decimal). The closing brace `}` ends the definition and it is also followed by a statement 
terminator at the end of the declaration.

## function prototypes AKA declarations
```c
void createRecord(struct Trainer trainers[], int *count);
void listRecords(struct Trainer trainers[], int count);
void modifyRecord(struct Trainer trainers[], int count);
void deleteRecord(struct Trainer trainers[], int *count);
```
The return type `void` will return no value. The function prototype begins with 
the return type followed by the name of the function and then we have a parameter 
list and a compulsory semicolon as a statement terminator to end the declaration.
### parameter list
The `struct` keyword introduces a structure type and `Trainer` is the struct tag which makes 
`struct Trainer` the  type specifier and `trainers[]` is an array of the `struct Trainer`.
When an array is passed to a function it decays to  a pointer to its first element.
##### pointers
are variables that store *memory addresses* as their values
###### addresses 
like `0x1000` which can be read as hex one thousand or hex one zero zero zero
If the value of a variable is the memory address of another variable then we can 
say that the former points to the later and that is way we call it a pointer. The 
pointer to an integer can point to a 4 byte value.
###### reading
`int x = 4;` **integer named x is set to 4 the value.** Integer data type is ***4*** bytes wide. 
`int *pX = &x;` **integer pointer named pX is set to the address of x.**
`*` when placed next to type it modifies the variable so now this 
variable is a pointer
`int y = *pX;` **integer named y is set to the thing pointed to by pX** here the `*` is 
a dereference so we are saying go to the address pointed to by the pointer and fetch that 
value.
#### function arguments
When passing array to a function even if the function parameter is declared as `int array[]`
it is internally treated as a pointer to the first element `int* array`. When this 
happens the compiler loses track of the original size of the array so sizeof(array) will return 
size of the pointer type which can be 4-8 bytes regardless of the size of the array.

