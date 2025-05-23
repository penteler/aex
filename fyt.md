- [Expressions, Assignments, data types, Variables, operators](#expressions-assignments-data-types-variables-operators)
  - [Variables](#variables)
  - [Assignment](#assignment)
- [Project management phases and project management software](#project-management-phases-and-project-management-software)
  - [Phases:](#phases)
    - [Initiation:](#initiation)
    - [Planning:](#planning)
    - [execution:](#execution)
    - [monitoring \& control:](#monitoring--control)
    - [closure:](#closure)
  - [Agile](#agile)
    - [scrum](#scrum)
    - [Jira](#jira)
- [git init](#git-init)

# Expressions, Assignments, data types, Variables, operators
## Variables
 are just named  storage locations that hold a value and these can be changed at the time of execution.
## Assignment
 of a value to a variable usually using the`=` operator stores the 
value by assigning it to the variable. For instance:

```
	percentage = 100 #assigns the value 100 to the variable percentage
```    
An expression is a combination of variables, operators etc. which get evaluated to produce a value. For example:
```
	sum = 4*3 #this expression evaluates to 12 and assigns that value to the sum variable.
```
The types of operations that can be carried out on any data are determined by
 its data type. The data type is the type of data that is stored in a variable. Examples of data types:
 ```
 	age = 49      #int32 or 32 bit integer data type
     height = 1.5     #float64 data type
       name = "Shyam" #string data type
```
Logical operators `and` (`&&`), `or` (`||`-pipe) `not` (`!` bang)
```
    age = 25
    is_imigrant = False
    if age >= 18 and not is_imigrant:	#and operator is used when we want both of the conditions to  
#be true and not inverts the value from true to false
					#>= is a relational operator and it returns a boolean
					#it turns out to be true in this case because 18<25
        print("Eligible to vote")	
    else:
        print("Not eligible to vote") 
    
    if is_felon or not is_citizen
        print("gray area")
```
Other relational operators are `<`, `>`, `<=`, equal(`==`), not equal(`!=`) and they are obviously used to
compare two values and return a boolean 

# Project management phases and project management software
## Phases:
### Initiation:
 defining the scope, goals and objectives of the project.
### Planning:
 Laying down a detailed plan should include setting timelines, budgets, allocating resources,
coming up with risk-management strategies.
### execution:
 Actually working on the project as per the plan.
### monitoring & control:
 This phase is about tracking progress, identifying potential issues and  making 
necessary adjustments to the plan based on your findings.
### closure:
 handing over necessary deliverables, documenting the lessons learned from working on the 
project and closing it.
Those are the primary phases now let's talk about 
## Agile
 principles and practices that favor 
adaptability based on feedback from the end users and the development team over sticking to the 
the plan much more strictly. This approach is based on iterative, incremental deliverables prioritizing
working software over comprehensive documentation. So basically adding to the bigger picture as you go 
along rather than having a more complete vision that has to be executed as per a definitive plan. Such a flexible approach is much more forgiving if you are unable to foresee all of the pitfalls and 
potential issues that you might encounter because you're hoping that you will come up with solutions 
for problems after and as you encounter them. Based on this approach we have the 
### scrum
 project management framework to manage work in short iterative cycles called sprints. Keep this brief intro at the back of your head.
### Jira
 is a project management software used by teams to track the progress of a project, release a 
deliverable and to support the customer/end-user after its completion.
# git init
```
git add .
git commit -m "x"
git branch -M main
git remote add origin https://github.com/penteler/aex.git
git push -u origin main
```
    - [closure:](#closure)
  - [Agile](#agile)
    - [scrum](#scrum)
    - [Jira](#jira)
- [git init](#git-init)
# Functions and macros
A function is a block of code that that performs a particular task and it can 
be reused after being defined once which is great for modularity.
## macros
can extend the capabilities of the programming language itself by automating
repetitive tasks. A macro in C begins with a `#` symbol and it specifies how a
certain input should be mapped to a replacement output. It can be used to create function-like
constructs. They act as shortcuts in the text editor by replacing certain text before code compilation.
Some of these function-like macros can even mimic features of a function like accepting arguments. The
most widespread example of this is `#define PI 3.14` defines a constant named PI that will be replaced with
3.14 before the code is compiled.




