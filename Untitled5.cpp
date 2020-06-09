
#include <iostream>
using namespace std;

class classa
{
public:
virtual void display()
{
cout<<"class a"<<endl;
}
};

class classb: public classa
{
public:
void display()
{
cout<<"class b \n";
}

int sum(int a, int b)
{
int c;
c=a+b;
return c;
	
}

int sum(int a, int b, int c)
{
int d;
d=a+b+c;
return d;
	
}

};

int main() 
{
cout<<"heyyyyy \n\n";
classa a;
classb b;

// function overriding 
a.display();
b.display();

//runtime polymorphism virtual func
classa *p = new classb;  
p->display(); // Envoked suring runtime 


//function overloading
int sum;
sum= b.sum(2,4,8);
cout<<"3 parameter sum = "<<sum<<endl;
sum=b.sum(2,4);
cout<<"2 parameter sum = "<<sum<<endl;
return 0;




}

