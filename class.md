# Structs and Pointers

Struct is basically like Class without the default private access. 
Struct is used for storing user defined data types in a group. 

for example 

```
struct Person
{
		string name;
		int age;
};
```

now to access the members within the struct we can use pointers in this method below

```
int main()
{
		struct Person *ptr = new struct Person;
		ptr->name = "Student 1";
		ptr->age = 21;
		cout << (*ptr).name << "\n" << (*ptr).age << endl;
		delete ptr;
		return 0;
}
```

this we can assign values to each members using pointers and print it out. after the assignment of the `*ptr` using the `->` symbol we assign values and similary cout values.


# Classes and Pointers

Class is similar to struct but the member have access modifiers. We can use Private, Public and Protected. In private we can't use the members outside of the scope. 

For example 
```
class Student 
{
		string dept;
		int roll; #these are private members
		
	public:
		Student(string Dept, int Roll) : dept(Dept), roll(Roll) {} #constructor
		void display() const
		{
			cout << dept << "\n" << roll << endl
		}
}
```

This is an example of Class where dept and roll are private members.
Hence they can't be used outside of the scope.
So we create a constructor and asssigned those members to the constructor's parameters. Hence we can access the certain values publicly. 

```
int main()
{
		class Student *ptr = new class Student("CSE", 01);
		ptr->display();
}

```

