#include <iostream>

using namespace std;

class classa
{
public:
virtual void display()
{
cout<<"class a"<<endl;
}

virtual void objects() =0;
};


class classb: public classa
{
public:
void display()
{
cout<<"class b \n";
}

void objects(){
	cout<< "you choose a bat" << endl;
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


class classc: public classa
{
public:
	
void objects(){
	cout<< "you choose a cat" << endl;
}

};





int main() {
	
	
	// overloading objects function
	
cout<<"hey! lets play a game \n\n";
cout<<"It is a game of luck! what do you want bat or cat??? \n\n";
cout<<"1-b \n\n2-c \n\n";
int choice;
cout<< "enter 1 or 2 = ";
cin>> choice;
classa *a;
classb b;
classc c;

if (choice==1){
	a=&b;
	a->objects();
}
else{
	a=&c;
	a->objects();
}



cout<<"\n\n\n\n\nsome examples of polymorphism\n\n";

classa *aa;

// function overriding 
aa->display();
b.display();

//runtime polymorphism virtual func
classa *p = new classb;  
p->display();


//function overloading
int sum;
sum= b.sum(2,4,8);
cout<<"3 parameter sum = "<<sum<<endl;
sum=b.sum(2,4);
cout<<"2 parameter sum = "<<sum<<endl;





}

