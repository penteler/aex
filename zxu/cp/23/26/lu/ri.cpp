#include <iostream>
#include <string>

using namespace std;
//1519
class Person{
protected:	
	string name;
public:
	void setName(string n){
		name = n;
	}	
};
//1522 3
class Student : public Person{
private:
	int rollno;
public:
	void setDetails(int r){
		rollno = r;
	}
	void displayDetails(){
		cout<<"Name: " << name << endl;
		cout<<"Roll no.: " << rollno << endl;
	}
};
//1530
int main(){
	Student s;
	s.setDetails(1);
	s.setName("Naresh");
	s.displayDetails();
	return 0;
}