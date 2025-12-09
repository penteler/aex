
MCS-202 1 P.T.O.
MCS-202
POST GRADUATE DIPLOMA IN COMPUTER
APPLICATIONS (PGDCA-NEW)
Term-End Examination
June, 2022
MCS-202 : COMPUTER ORGANISATION
Time : 3 hours Maximum Marks : 100
(Weightage : 70%)
Note : Question number 1 is compulsory and carries
40 marks. Attempt any three questions from
questions number 2 to 5.
1. (a) Convert the following : 6
(i) Decimal number 249.125 to binary,
octal and hexadecimal
(ii) Hexadecimal (FA12)h
into octal,
binary and decimal
(b) Use K-map to find the optimal function for
the function
F(A, B, C, D) =  (0, 4, 8, 11, 12, 13).
Also draw the logic diagram of resultant
function using AND, OR, NOT Gates. 5
No. of Printed Pages : 5
MCS-202 2
(c) Draw and explain the logic diagram of a
RAM cell. 5
(d) A main memory has the size of 2 MB. The
word size of the main memory is 16 bits
and 1 block of main memory word/cache
memory is of 64 bits. The size of the cache
memory is 64 KB. Determine the
following : 1+1+3=5
(i) Size of the address of main memory.
(ii) The number of cache lines.
(iii) Assuming that a main memory to
cache direct address mapping is used,
explain how main memory address
will be mapped to cache memory
address.
(e) Consider the following state of registers
and main memory (All values are in
Hexadecimal) : 4
Address Main Memory
4F11 LDA
4F12 4F14
4F13 2567
4F14 6782
4F15
4F16 4F00
4F17 4F14
2511 AC
IR
4F11 PC
0002 XR
0003 BR
MCS-202 3 P.T.O.
 Assuming that the load instruction is
stored in address 4F11 and 4F12, where
the location 4F12 contains the address field
of the load instruction. Calculate the value
of operand, that would be loaded to AC, if
load instruction uses the following
addressing modes :
(i) Memory Direct Addressing
(ii) Index Addressing
(iii) Base Addressing
(iv) Immediate Addressing
(f) Explain the sequence of micro-operations
that would be required to fetch an
instruction stored in a memory location to
IP register. You may assume that the
machine uses MAR  register to stored
memory address, R1  register which
stores data received from memory or data
to be transferred to memory; AC  register
which is used to perform computation,
IP  register that stores the instruction,
which is fetched and PC  register which
stores the instruction to be fetched. Make
suitable assumptions. 5
(g) For the following values of various
registers in an 8086 microprocessor,
compute the physical memory address : 4
(i) CS : IP  0FABh : 01FAh
(ii) SS : SP  1F0Ah : 0267h
MCS-202 4
(h) Write a program in 8086 assembly
language that interchanges the value
stored in two memory locations having the
name FIRST and SECOND. Explain the
logic of the program. 6
2. (a) Simplify the following Boolean functions : 4
(i) ((A + B)) + A . B
(ii) (A + B) + (A . B) + (A . B)
(b) Explain the process of error detection and
correction using parity bit. 5
(c) Explain the floating point number
representation with the help of an example. 5
(d) Explain the working of a basic SR latch.
Draw the characteristics table of
SR flip-flop. Also make the excitation table
of SR flip-flop. 6
3. (a) Explain the internal structure of a hard
disk drive with the help of a diagram. 5
(b) Explain the concept of memory hierarchy
with the help of an example. 5
(c) What is an Interrupt ? How can it be used
for Input/Output ? Explain interrupt driven
I/O with the help of an example. 5
(d) Briefly explain any two types of printer
technologies. 5
MCS-202 5 P.T.O.
4. (a) Explain the following program control
instructions with the help of an
example : 2+2+1=5
(i) Branch
(ii) CALL
(iii) Return
(b) What is the need of an interrupt cycle
during the instruction execution ? Explain
the micro-operations of an interrupt cycle.
Make suitable assumptions. 5
(c) Explain the working of Wilkes control unit
with the help of a diagram. 5
(d) Explain the use of large register file with
the help of an example. 5
5. (a) Explain any three shift instructions in
8086 microprocessor. 6
(b) Differentiate between .com and .exe
programs in the context of
8086 microprocessor. 4
(c) Write a program using 8086 assembly
language that adds four byte values stored
in an array of size 4 in the memory. The
result of addition is stored in the fifth and
sixth location. 6
(d) Explain the characteristics of the
following : 4
(i) Array processing
(ii) Multiprocessor system




P. T. O.
No. of Printed Pages : 5 MCS–202
POST GRADUATE DIPLOMA IN
COMPUTER APPLICATIONS
(PGDCA-NEW)
Term-End Examination
June, 2024
MCS-202 : COMPUTER ORGANISATION
Time : 3 Hours Maximum Marks : 100
Weightage : 70%
Note : Question No. 1 is compulsory and carries
40 marks. Attempt any three questions
from the remaining Question No. 2 to
Question No. 5.
1. (a) Explain Harvard architecture with the
help of a diagram. 5
[ 2 ] MCS-202
(b) Perform the following conversions : 5
(i) Decimal (873)10 to Binary
(ii) Decimal (384)10 to Hexadecimal
(iii) Hexadecimal (FAB)h to Octal
(iv) ASCII string ‘the escape sequence’ to
UTF8
(v) Octal (765)8 to Decimal
(c) Differentiate between CLV and CAV type
of disk organizations. 5
(d) Explain two-way set associative Cache
mapping with a suitable example. 5
(e) Differentiate between RISC processor and
CISC processor. Give utility of each. 5
(f) What is an interrupt ? Explain the use of
interrupt in input/output with the help of
an example. 5
[ 3 ] MCS-202
P. T. O.
(g) List the various register categories
involved with 8086 microprocessor. Also,
give the role of each type of register
category. 5
(h) Compare direct addressing mode and
indirect addressing mode. Give example for
each. 5
2. (a) Simplify the function :
 F(A, B, C) = Σ (2, 3, 4, 5)
using k-map. Also, draw the circuit using
NAND gates. 5
(b) Explain the functioning of 2×4 decoder.
Draw its truth table and explain its logic
diagram with the help of example input. 8
(c) Explain the working of SR flip-flop with
the help of a logic diagram and
characteristic table. Also, explain the
excitation table of SR flip-flop. 7
[ 4 ] MCS-202
3. (a) Explain the concept of programmed I/O.
How is Direct Memory Access (DMA)
technique differ from programmed I/O
technique ? Under what situation is it
better to use DMA over programmed I/O ?
8
(b) Define disk access time. Write the equation
to compute disk access time. Also, discuss
the meaning of all the parameters involved
in the computation of disk access time. 7
(c) What are Charge-Coupled Devices
(CCDs) ? Briefly discuss the utility of
CCDs. 5
4. (a) Explain the following addressing modes,
with the help of a suitable diagram
(showing content of sample memory and
registers) : 10
(i) Register Indirect Addressing
(ii) Relative Addressing
[ 5 ] MCS-202
P. T. O.
Note : Your diagram should include
instructions, operands and addresses.
(b) What is a micro-operation ? Explain
register transfer micro-operation with a
suitable example. 5
(c) Write a program in 8086 assembly
language, which converts a two digit ASCII
number to a packed BCD number. Explain
each step of the program. 5
5. Write short notes on the following : 5×4=20
(i) Cache coherence
(ii) Parallelism in uniprocessor systems
(iii) .Com programs and .Exe programs
(iv) Wilkes control
MCS–202




end








P. T. O.
No. of Printed Pages : 4 MCS–201
POST GRADUATE DIPLOMA IN
COMPUTER APPLICATIONS
(PGDCA-NEW)
Term-End Examination
December, 2023
MCS–201 : PROGRAMMING IN C AND PYTHON
Time : 3 Hours Maximum Marks :100
Weightage : 70%
Note : Question No. 1 is compulsory. Attempt any
three questions from the rest.
1. (a) Draw flow chart and write algorithm to
print Fibonacci series upto the number of
terms entered by the user. 5
(b) Write recursive and iterative program in C,
to find factorial of a number entered by the
user. 6
[ 2 ] MCS–201
(c) Compare Break and Continue statement,
illustrate the use of both statements
through a suitable code in python. 6
(d) How do Mutable data types differ from
Immutable data types ? Briefly discuss the
syntax and utility of the following data
types in python : 5
(i) Lists
(ii) Tuples
(iii) Dictionaries
(e) Explain the concept of call by reference,
with suitable code in C. Compare it with
call by value mechanism. 6
(f) Compare the terms Typedef and Typecast
in C. Give suitable code for each. Also
discuss utility of both. 6
(g) What are Co-routines ? Explain, how
the co-routines support cooperative
multitasking in Python. 6
2. (a) Differentiate between Structure and Union
constructs in C. Write suitable code for
each. 7
(b) Differentiate between syntax error and
semantic error. Give example for each. 5
[ 3 ] MCS–201
P. T. O.
(c) Discuss the following terms in context of
python. (Give example for each) : 8
(i) Framework
(ii) Library
(iii) Package
(iv) Module
Also, give relation between them.
3. (a) Discuss the relation between arrays and
pointers. Give suitable example in support
of your discussion. 5
(b) What is Jython ? How does Jython work ?
5
(c) Compare Global variables with Local
variables. Give suitable example for each. 5
(d) What are iterators ? How do iterators differ
from iterables ? Give example for each. 5
4. (a) Compare Buffered I/O with Unbuffered I/O
in C. 5
(b) Write a program in C to generate the
following pattern : 5
*
* *
* * *
* * * *
[ 4 ] MCS–201
(c) Discuss the function of connect( ) method of
MySQL. Connection interface in Python.
List the arguments involved in the
connect( ) method. Write a python code to
create database Employee_DB and prepare
connection to Employee_DB. (Make
suitable assumptions whereever
necessary). 10
5. (a) What are Generators in Python ? Compare
Generators and Lists. Also, discuss the
utility of Generators in Python. 5
(b) In C, how && operator differs from &
operator ? Support your comparison with
suitable code in C. 5
(c) Write short notes on the following (give
utility of each) : 10
(i) Storage classes in C
(ii) Decorators in Python
(iii) Cursor objects
(iv) Functions and its types
MCS–201



P. T. O.
No. of Printed Pages : 6 MCS–201
POST GRADUATE DIPLOMA IN
COMPUTER APPLICATIONS
(PGDCA–NEW)
Term-End Examination
June, 2024
MCS-201 : PROGRAMMING IN C AND PYTHON
Time : 3 Hours Maximum Marks :100
Weightage : 70%
Note : Question No. 1 is compulsory. Attempt any
three questions from the rest.
1. (a) Draw flowchart and write algorithm to
print factorial of a number entered by the
user. 5
[ 2 ] MCS–201
(b) Write recursive and iterative code in C, to
find sum of numbers from zero to n, where
n is the number entered by the user. 6
(c) What are lambda functions ? Discuss the
utility of lambda functions. Write lambda
function in Python to calculate cube of a
number, entered by the user. 6
(d) What is overloading and overriding in
Python ? Give suitable example code for
each. 5
(e) Explain the concept of call by value, with
suitable code in C. Give advantage and
disadvantage of call by value. 6
(f) Briefly discuss the syntax and
functionality of map( ) function in Python.
Write a program in Python to print the
square of the numbers present in the list,
using map( ) function. 6
[ 3 ] MCS–201
P. T. O.
(g) Write a program in C to determine simple
interest and compound interest. Make
suitable assumptions and support your
code with suitable comments. 6
2. (a) What are storage classes ? How do storage
classes differ from data types in C ?
Discuss all four types of storage classes. 8
(b) Differentiate between static variable and
dynamic variable. Give suitable example
for each. 4
(c) In context of Python, differentiate the
following : 8
(i) Co-routines and Subroutines
(ii) Co-routines and Threads
3. (a) Differentiate between Random access and
Sequential access of files in C. Discuss the
[ 4 ] MCS–201
syntax and role of fseek( ) and rewind( )
function, while accessing any file
randomly. 7
(b) Write Python code to perform the
following : 7
(i) Reading data from a file
(ii) Creating file and add content to it
(c) Write syntax for various looping controls.
Also draw flowchart of each, to exhibit
their respective execution of statements. 6
4. (a) Write a program in C to copy the content of
one text file to another text file. Support
your program with suitable comments. 6
(b) Write a program in C to verify that the
string entered by the user is a palindrome
or not. Support your program with suitable
comments. 4
[ 5 ] MCS–201
P. T. O.
(c) Write Python code to perform the
following : 10
(i) Copy content of file first.txt to
second.txt
(ii) Reading a file
(iii) Writing a file
(iv) Appending a file
5. (a) What is a package in Python ? How does it
relate to module, library and framework ?
Write the steps to create a package in
Python. Also, illustrate the application of
these steps with suitable example code in
Python. 8
(b) Write an algorithm to find the slope of a
line segment whose input comprises of the
end point coordinates i. e.
x y 1 1 , 
and
[ 6 ] MCS–201
x y 2 2 ,  , and output comprises of the slope
of line (which may be positive, negative or
zero). Transform your algorithm into C
program. Support your code with suitable
comments. 8
{Note : Slope of line segment
 
 
 
2 1
2 1
( )
.
( )
y y
x x
(c) Compare C and Python, as programming
languages. 4
MCS–201