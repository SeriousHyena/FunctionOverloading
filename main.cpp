#include <iostream>
#include <string>

using namespace std;

//declare functions here
int getResult(int num1, int num2);
string getResult(string str1, string str2);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("Ernie", "Mack");
	cout << "Result num is: " << resultNum << endl;
	cout << "Name result is: " << nameResult << endl;

	return 0;
}

int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}