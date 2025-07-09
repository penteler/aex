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
- [Functions and macros](#functions-and-macros)
  - [macros](#macros)
- [Database management](#database-management)
- [Unguided data transmission](#unguided-data-transmission)
- [Connecting branch offices](#connecting-branch-offices)
- [The Internet](#the-internet)

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
    is_immigrant = False
    if age >= 18 and not is_immigrant:	#and operator is used when we want both of the conditions to  
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
# Database management
A database is an organized collection of data that can be accessed and updated conveniently. A database management system is the type of software that is used to manage a database. It has to help with creation, update, deletion, backup and recovery of data. MySQL is a popular DBMS. It is especially helpful for data security in a multi-user environment.
# Unguided data transmission
Guided channel for data transmission is simply wired and unguided channels are wireless. So if you use a pair of insulated twisted wires, or a coaxial cable or a fibre-optic cable then you're using guided media and if you're using radio waves for wi-fi or for cellular services then your data is being transmitted through unguided media Another type of unguided data transmission uses infrared waves and it is useful for short range remote control.
# Connecting branch offices
We would require a LAN at every branch office of the organization. This type of network is only suitable for something small like an office building. It provides total control over the network and it requires hardware like network switches, repeaters and routers and the cost of maintaining and running this type of a network is really the cost keeping the lights on (or having an uninterrupted power supply). Now in order to connect these offices we would require a WAN (or a wide area network). This type of network is usually slower than LAN because of the distances involved and one has to rely on network infrastructure of ISPs (internet service providers) and hence they have to pay monthly bills and because this network is being used by many more people all across the world one has to have various security measures in place such as a firewall.
# The Internet
The internet is a globe spanning network of interconnected computers and other devices. These devices communicate with each other using standard communication protocols. Users can share information on this network using services like email. They can browse websites, stream videos and transmit all kinds of data. TCP/IP (Transmission Control Protocol and Internet Protocol) are both foundational to the internet. Transmission control ensures reliable data transmission and IP is for addressing and routing. HTTP (Hypertext transfer protocol) and HTTPS its secure version are used for websites. DNS (Domain name system) translates domain names like google.com into IP addresses and this is why URLs are related to ip addresses. Actually the web addresses like wikipedia.org are actually just a domain name that is easily readable by a human it is actually the DNS that translates this to an IP address which can actually be used to identify and pinpoint a location. In fact if you have the IP address of a webserver then you can access it by typing it instead of the web address in the address bar. We can think of it like a phone number in the contacts on your phone you can call a number directly or you can use a contact name which has a particular phone number.
# Web browser
A web browser like the name suggests is meant for browsing the internet. It has a user interface which includes an address bar that can be used to enter a URL and basic navigation features like going back or forward. There is an age old bookmarking feature and there are also security features like blocking pop-up ads. There is a browsing history and most browsers have autofil features for things like usernames and passwords.
# HTTPs
When performing transactions we should firstly ensure that the website we are on uses HTTPS because this variant of HTTP ensures a secure connection and the data that is being input like bank account details will be encrypted. This prevents such information from being stolen. It is also important to never miss security updates of your web-browser because older versions can have vulnerabilities that can be exploited for malicious activities.
# email components
You have to have a recipient's address. In addition to that you can have a Cc address a Bcc (blind carbon copy) address which is not visible to the recipient. Normally your email should have a subject, body and you can also add a signature which can contain a name, contact info and a preset message at the end. You can also attach files and send them with the email as an attachment.
# online educaiton 
online couselling sessions: These counselling sessions can be accessed remotely and they can provide an excellent learning experience to people living in remote areas.
online access to study material: This type of access can free the students from the hassle of finding the right book store a library to access a hard copy of the study material.
Online submission of Assignments: Assignments can be assigned to a particular batch of students remotely and then the students and complete and submit these assignments online. The assessment/evaluation of these assignments can then be done in a usual manner.
Social distancing: During the 2021 lockdown the world was introduced to the concept of mandatory social distancing and online education made it possible for people to continue their education without violating the rules of the lockdown.
# eCommerce
Online listings: Product listings online can contain pictures, product descriptions, specifications, configuration and color options.
Carting and wishlisting: You can add a product to cart share a link to the product listing and you can also add a product to your wish-list if you want to buy it later.
Payment portals: There are usually several payment options like  netbanking, credit/debit cards or even payment upon delivery.
Order tracking & delivery status: After placing an order one can review order details or track the delivery if the product has been shipped. 
returns and refunds: Many eCommerce platforms have a reasonable return policy which can be used to get a refund or a replacement on a product.




