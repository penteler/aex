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

## function prototypes
```c
void createRecord(struct Trainer trainers[], int *count);
void listRecords(struct Trainer trainers[], int count);
void modifyRecord(struct Trainer trainers[], int count);
void deleteRecord(struct Trainer trainers[], int *count);
```
The return type `void` will return no value.
