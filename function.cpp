#include<iostream>
#include<iomanip>
using namespace std;
int checknum(int, int);
int main()
{
	srand(time(NULL));
	int rad = 1 + rand() % 10;
	bool flag = true;
	int num, count = 0;
	cout << "###Welcome to guessing number game###\n";
	cout << "Secret number has been chosen\n";
	do
	{
		cout << "Guess the number (1 to 10) : ";
		cin >> num;
		checknum(num, rad);
		count++;
	}

	while(num != rad);
	{
		cout << "The secret number is " << rad << endl;
		cout << "You made " << count << " guesses\n";
	}
	return 0;
}
	
int checknum(int a, int b)
{
	if (a>b)
	{
	cout << "The secrt number is higher\n";
	}
	else if (a < b)
	{
	cout << "The secret number is lower\n";
	}
	else if (a == b)
	{
	cout << "Congratulation\n";
	}
	return(a,b);
}