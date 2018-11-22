#include <iostream>
#include <string>
using namespace std;

int inp;
int ans;
int answer ( int a );
int nope ( int );
string play = "y";

int main()
{
	while ( play == "y" )
	{
		cout << "Welcome! Please guess a number between 1 and 10: ";
		cin >> inp;
		ans = answer (inp);
		cout << "Sorry, you are incorrect. Please guess again: ";
		cin >> inp;
		while ( inp != ans )
		{
			if ( ( inp > 10 ) || ( inp < 1) ) 
				inp = nope ( inp );
			else if ( inp == ans )
				break;
			else 
			{
				cout << "Sorry, try again: ";
				cin >> inp;
			}
		}
		cout << "Correct! Play again? (y/n): ";
		cin >> play;
		cout << endl;
	}

	return 0;
}

int answer ( int a )
{
	if ( ( a > 10 ) || ( a < 1) ) 
		a = nope ( a );
	else if ( a <= 9 )
		return ( a + 1 );
	else 
		return 9;
}
	
int nope ( int b )
{
	do {
			cout << "Sorry, your number is not between 1 and 10. Please choose another number: ";
			cin >> b;
	} while ( ( b > 10 ) || ( b < 1) );
	
	return b;
}
