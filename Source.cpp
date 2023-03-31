#include <iostream> 
#include <string>
using namespace std;


int main()
{
	double socialmaxtax = 160200;
	double bracketper10 = 10275;
	double bracketper12 = 41775;
	double bracketper22 = 89075;
	double bracketper24 = 170050;
	double bracketper32 = 215950;
	double bracketper35 = 539900;
	double bracketper37 = bracketper35 + 1;
	double step12per = bracketper10 * .1;
	double step22per = (bracketper12 - bracketper10) * .12 + step12per;
	double step24per = (bracketper22 - bracketper12) * .22 + step22per;
	double step32per = (bracketper24 - bracketper22) * .24 + step24per;
	double step35per = (bracketper32 - bracketper24) * .32 + step32per;
	double step37per = (bracketper35 - bracketper32) * .35 + step35per;




	double b = 0; //Intialize for salary 
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
		else if (b <= bracketper10)
		{
			incomewith = b * .10;

		}
		else if (b <= bracketper12)
		{

			incomewith = (b - bracketper10) * .12 + step12per;

		}
		else if (b <= bracketper22)
		{
			incomewith = (b - bracketper12) * .22 + step22per ;



		}
		else if (b <= bracketper24)
		{
			incomewith = (b - bracketper22) * .24 + step24per;




		}
		else if (b <= bracketper32)
		{
			incomewith = (b - bracketper24) * .32 + step32per;


		}
		else if (b <= bracketper35)
		{

			incomewith = (b - bracketper32) * .35 + step35per;

		}
		else if (b >= bracketper37)
		{
			incomewith = (b - bracketper35) * .37 + step37per;

		}
		else
		{

			cout << "there is a error in the value that you selected . Money only comes in number ";
			incomewith = 0;
		}

		double socialtax;
		if (b <= socialmaxtax)
		{
			socialtax = b * .062;

		}
		else if (b > socialmaxtax)
		{
			socialtax = socialmaxtax * .062;

		}

		double medicadetax = b * .0145;



		cout << " " << b << " your total salary " << endl;
		cout << " Federal income withheld is " << incomewith << endl;
		cout << " social security withheld is " << socialtax << endl;
		cout << " medicaid withheld " << medicadetax << endl << " ------------------------------" << endl;
		cout << " how much withheld total " << incomewith + socialtax + medicadetax << endl;
		cout << " your total payout average per week after taxes " << (b - incomewith - socialtax - medicadetax) / 52 << endl;
		cout << " do you wish to start again 1 for yes , 0 for no " << endl;
		cin >> a;
	}
}
