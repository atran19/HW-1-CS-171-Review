#include <iostream>
#include <cstdlib>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
//function 
void ex02()
{
	//a. Initialize variable to true
	bool hasPassed = true;
	//b.Initialize variables to random numbers then declare relationship between x and y
	int x = rand() % 100;
	int y = rand() % 100;
	if (x > y)
		cout << "x>y  \n";
	if (x = y)
		cout << "x==y  \n";
	if (x < y)
		cout << "x<y  \n" << endl;
	//c. Output if input is less than 100
	cout << "How many shares?" << endl;
	int v;
	cin >> v;
	if (v < 100)
		cout << "Value is less than 100" << endl;
	//d.Using modulus to determine even or odd
	int c;
	int k;
	cout << "Enter box width" << endl;
	cin >> c;
	cout << "Enter book width" << endl;
	cin >> k;
	if ((c%k) == 0)
		cout << " The box width is evenly divisible by book width" << endl;
	else
		cout << "The box is not evenly divisible by book width" << endl;
	//e. Decrease shelf life if temp is greater than 90
	cout << "What is the shelf life for chocolates?" << endl;
	int l;
	cin >> l;
	cout << "What is the temperature outside?" << endl;
	int t;
	cin >> t;
	if (t > 90)
		cout << l - 4 << endl;
}

//Function for Ex01_02
void ex03() {
	//a. Figure out the length of diagonal given area 
	float a;
	float s;
	float d;
	cout << "Enter the area of the square";
	cin >> a;
	s = sqrt(a);
	d = s*sqrt(2);
	cout << "The diagonal is  " << d << endl;
	//b. Input char output word
	cout << "Yes or no" << endl;
	char letter;
	cin >> letter;
	if (letter == 'y')
		cout << "Yes \n";
	if (letter == 'n')
		cout << "No \n";
	//c.Display tab
	char t = '\t';
	cout << "This is " << t << "." << endl;
	//d. String
	string mailingAddress;
	cout << "What is the mailing address?";
	cin >> mailingAddress;
	//e.Put string into an empty string
	mailingAddress = " ";
	cout << "The mailing address is " << mailingAddress << "    ";
}
// Function for ex01_03 and function called for part e.
void ex045(int z);
void ex04() {
	//a.Loop until valid input
	int x;
	x = 11;
	while (x >10 || x<1)
	{
		cout << "Type in a number between 1 and 10";
		cin >> x;
	}
	cout << "The value is between 1 and 10 \n" << endl;
	//b. Cube x from part a.
	int c = x*x*x;
	int a = x;
	//c.Do while loop to output asterisks from input in part a.
	do
	{
		cout << x << "*";
		x--;
	} while (x >= 1);

	//d. Use for loop to display all even numbers up to 40
	for (int i = 0; i < 41; i++)
	{
		if (i % 2 == 0)
		{
			cout << "The even numbers is " << i << endl;
		}
	}
	//e. called function to double integer that was inputted
	ex045(a);
	
}
//function to double inputted integer
void ex045(int z)
{
	cout << 2 * z << endl;


}
//f.function to add sums of random integers
void add(int l, int m)
{

	int n = l + m;
	cout << n << endl;


}
//g.function to add one to parameter
void addtoparameter(int &o)
{

	o += 1;

}

//Function for part c in ex05
void valuesofarray(int ar[], int size) {

	for (int i = 0; i < size; i++)
		cout << ar[i] << endl;
}
//function for part d in ex05
void checkvalue(int ar[], int size) {
	cout << "Enter a number to check if it's in the array" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < size; i++)
		if (number == ar[i])
		{
			cout << "The value is in the array!";
			break;
		}

		else
		{
			cout << "The value is NOT in the array";
			break;
		}
}
void ex05() {
	const int s = 5;
	int ar[s];
	int sum = 0;
	int product = 1;
	cout << "Enter 5 numbers" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> ar[i];
		sum += ar[i];
		product *= ar[i];
	}

	cout << sum << endl;
	cout << product << endl;
	valuesofarray(ar, s);
	checkvalue(ar, s);



}




int main() {
	ex02();
	ex03();
	ex04();
	
	//random integers generated for part f.
	int b = rand() % 100;
	int c = rand() % 100;
	add(b, c);

	// called function to add one to parameter
	int p = 3;
	cout << "The parameter was " << p << endl;
	addtoparameter(p);
	cout << "The parameter now is " << p << endl;
	
	
	ex05();

	

}