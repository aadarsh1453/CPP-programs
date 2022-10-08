
// Write a C++ program to print Hello MySirG on the screen.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<< "Hello MysirG";
	getch();
}





// Write a C++ program to print Hello on the first line and MySirG on the second line using endl.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<< "Hello<<endl<<MysirG";
	getch();
}

 
 
 
 
// Write a C++ program to calculate the sum of two numbers.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	int num, a, b;
	cout<< "Enter two number: ";
	cin>> a>> b;
	
	num = a+b;
	cout<< "Sum of two numbers: "<< num;
	getch();
}





// Write a C++ program to calculate the area of a circle.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float rad, Area;
	cout<< "Enter a radius:";
	cin>> rad;
	
	
	Area = 3.14* rad * rad;
	cout<< "Area of circle is: "<< Area;
	getch();
}





// Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float  l, b, h, Area;
	cout<< "Enter length, breadth and height: ";
	cin>> l>>b>> h;
	
	Area = l* b* h;
	cout<< "Volume of cuboid is: "<< Area;

	getch();
}





// Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float  Avg;
	int a, b, c;
	cout<< "Enter three Numbers: ";
	cin>> a>> b>> c;
	
	Avg = (a + b + c) / 3.0;
	cout<< "Average of three number is: "<< Avg;
	getch();
}





// Write a C++ program to calculate the square of a number.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	cout<<"Enter a number: ";
	cin>> i;
	cout<< "Square of "<< i <<" is: "<< i*i;
	getch();
} 





// Write a C++ program to swap values of two int variables without using third variable.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b;
	cout<< "Enter the two numbers: ";
	cin>> a>> b;
	b =  a + b;
	a =  b - a;
	b =  b - a;
	cout<< "The Swap value of a and b is: " << a<< " " <<b;
	getch();
}

Alternative

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b;
	cout<< "Enter two number: " ;
	cin>> a>> b;
	
	b = (a+b) - a=b;
	cout<< "The swap values are: " <<a <<" " << b;
	getch();
}





// Write a C++ program to find the maximum of two numbers.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num, num1, num2;
	cout<< "Enter the two number";
	cin>> num1>> num2;
	
	if(num1 > num2)
	   cout<< "maximum number is: "<< num1;
	else
	   cout<< "maximum number is: "<< num2;
	getch();
}





// Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num[10], add=0, i=0;
	cout<<"Enter 10 ten numbers: ";
	do 
	{
	   cin>> num[i];
	   add = add + num[i];
	   i++;
	}while(i<10);
	
	cout<< "Sum of 10 numbers: " << add;
	getch();
}

