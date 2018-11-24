//Teaching && means and and || means or in if statements

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double BTC;
	double LTC;
	double BCH;

	cout << "How much is BTC right now? " << endl;
	cin >> BTC;

	cout << "How much is LTC right now? " << endl;
	cin >> LTC;

	cout << "How much is BCH right now? " << endl;
	cin >> BCH;

	// if both of them are true
	if (BTC < 10000 && LTC < 150) //<<< && is and
	{
		cout << "Keep buying BTC and LTC gradually" << endl;
	}

	else if (BTC >= 10000 && LTC >= 150)
	{
		cout << "Sell both BTC and LTC" << endl;
	}
	// if any or all of them are TRUE
	else if (BTC >= 20000 || LTC >= 1000 || BCH >= 10000) // <<< || is or
	{
		cout << "TIME TO SELL SOMETHING RIGHT AWAY! \nBTC is " << BTC << endl;
		cout << "LTC is " << LTC << endl;
		cout << "BCH is " << BCH << endl;
	}

	else
	{
		cout << "This condition was not set" << endl;
	}





	cin.get();
}