#include <iostream> 
#include <string>
using namespace std;

int main()
{
	

	double b;
	int loop = 1;
	double incomewith;
	int a = 1;
	while (a == 1) {
		cout << " Enter your salary ";

		cin >> b;
		if (0 >= b)
		{
			incomewith = 0;

			cout << "Make some money you lazy bum :)";
		}
		else if (b <= 9875)
		{
			incomewith = b * .10;

		}
		else if (b <= 40125)
		{

			incomewith = (b - 9875) * .12 + 987.5;

		}
		else if (b <= 85525)
		{
			incomewith = (b - 40125) * .22 + 4617.50;



		}
		else if (b <= 163300)
		{
			incomewith = (b - 85525) * .24 + 14605.50;




		}
		else if (b <= 207350)
		{
			incomewith = (b - 163300) * .32 + 33271.5;


		}
		else if (b <= 518400)
		{

			incomewith = (b - 207350) * .35 + 47367.50;

		}
		else if (b >= 518401)
		{
			incomewith = (b - 518400) * .37 + 156235;

		}

		else
		{

			cout << "there is a error in the value that you selected . Money only comes in number ";
			incomewith = 0;
		}

		double socialtax;
		if (b <= 142800) 
		{
			socialtax = b * .062;

		}
		else if ( b > 142800)
		{
			socialtax = 142800*.062; 

		}

		double medicadetax = b * .0145;



		cout << " " << b << " your total salary " << endl;
		cout << " income withheld is " << incomewith << endl;
		cout << " social security withheld is " << socialtax << endl;
		cout << " medicaid withheld " << medicadetax << endl<< " ------------------------------" << endl;
		cout << " how much withheld total " << incomewith + socialtax + medicadetax << endl;
		cout << " your total payout average per week after taxes " << (b - incomewith - socialtax - medicadetax) / 52 << endl;
		cout << " do you wish to start again 1 for yes , 0 for no " << endl;
		cin >> a; 
	}
}
 