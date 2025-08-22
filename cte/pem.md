## preprocessor directives
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "Trainers.dat"
```

These lines begin with the preprocessor directive symbol `#` and hence they 
will get processed before the complilation begins. The `include` preprocessor command 
is used to tell the compliler to **include** a file. `<stdio.h>` the standard input output 
header file is a system file and that's why it has been enclosed within angle brackets. It has 
standard input output functions such as `scanf()` and `printf() . The standard library header 
is for functions like `malloc()` and `exit()` and the sring header is for functions like `strcpy()` 
and  `strlen(). The define preprocessor directive is for defining macros and constants 
here it defines the `FILENAME` macro which is followed by a sring literal. The preprocessor will 
replace FILENAME with the replacement text anywhere in the following lines.



