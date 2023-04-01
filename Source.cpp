#include <iostream> 
#include <string>
using namespace std;


int main()
{
	double socialmaxtax = 160200;
	double bracketper10 = 10275;							  //Ten percentage bracket maximum threshold
	double bracketper12 = 41775;							  //12 Percentage bracket max threshold
	double bracketper22 = 89075;							  //22 percentage bracket maX threshold
	double bracketper24 = 170050;							  //24 percentage bracket maX threshold
	double bracketper32 = 215950;							  //32 percentage bracket maX threshold
	double bracketper35 = 539900;							  //35 percentage bracket maX threshold
	double bracketper37 = bracketper35 + 1;						  //37 percentage bracket maX threshold
	double step12per = bracketper10 * .1;                                     	  //tax amount carried into the 12 % bracket 
	double step22per = (bracketper12 - bracketper10) * .12 + step12per;		  // " amount carried into the 22 % bracket
	double step24per = (bracketper22 - bracketper12) * .22 + step22per;		  // " amount carried into the 24 % bracket
	double step32per = (bracketper24 - bracketper22) * .24 + step24per;		  // " amount carried into the 32 % bracket
	double step35per = (bracketper32 - bracketper24) * .32 + step32per;		  // " amount carried into the 35 % bracket
	double step37per = (bracketper35 - bracketper32) * .35 + step35per;		  // " amount carried into the 37 % bracket




	double salary = 0; //Initialize for salary to zero
	int loop = 1; // used to loop
	double incomewith;
	
	while (loop == 1) {
		cout << " Enter your salary ";

		cin >> salary;
		if (0 >= salary)
		{
			incomewith = 0;

			cout << "Make some money you lazy bum :)";
		}
		else if (salary <= bracketper10)
		{
			incomewith = salary * .10;

		}
		else if (salary <= bracketper12)
		{

			incomewith = (salary - bracketper10) * .12 + step12per;

		}
		else if (salary <= bracketper22)
		{
			incomewith = (salary - bracketper12) * .22 + step22per;



		}
		else if (salary <= bracketper24)
		{
			incomewith = (salary - bracketper22) * .24 + step24per;




		}
		else if (salary <= bracketper32)
		{
			incomewith = (salary - bracketper24) * .32 + step32per;


		}
		else if (salary <= bracketper35)
		{

			incomewith = (salary - bracketper32) * .35 + step35per;

		}
		else if (salary >= bracketper37)
		{
			incomewith = (salary - bracketper35) * .37 + step37per;

		}
		else
		{

			cout << "there is a error in the value that you selected . Money only comes in number ";
			incomewith = 0;
		}

		double socialtax;
		if (salary <= socialmaxtax)
		{
			socialtax = salary * .062;

		}
		else if (salary > socialmaxtax)
		{
			socialtax = socialmaxtax * .062;

		}

		double medicadetax = salary * .0145;



		cout << " " << salary << " your total salary " << endl;
		cout << " Federal income withheld is " << incomewith << endl;
		cout << " social security withheld is " << socialtax << endl;
		cout << " medicaid withheld " << medicadetax << endl << " ------------------------------" << endl;
		cout << " how much withheld total " << incomewith + socialtax + medicadetax << endl;
		cout << " your total payout average per week after taxes " << (salary - incomewith - socialtax - medicadetax) / 52 << endl;
		cout << " do you wish to start again 1 for yes , 0 for no " << endl;
		cin >> loop;
	}
}
