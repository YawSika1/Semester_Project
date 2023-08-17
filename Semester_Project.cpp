#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct employee {
	string name, department;
	string age;
	string employeeid;
	char gender;
	float days, rate;
};

int main(){
	float solve=0.00;
	string sex;
	employee user;
	double hourlyrate, hoursworked;
	double taxrate = 0.15;
	
	cout << "ENTER THE NAME OF THE EMPLOYEE  : " <<endl;
	getline(cin,user.name);
	
	cout << "ENTER THE NAME OF DEPARTMENT  : " <<endl;
	getline(cin,user.department);
	
	cout << "ENTER THE AGE OF THE EMPLOYEE  : " <<endl;
	getline(cin,user.age);
	
	cout << "ENTER THE EMPLOYEE ID  : " <<endl;
	getline(cin,user.employeeid);
	
	cout << "ENTER THE GENDER OF THE EMPLOYEE  : " <<endl;
	user.gender =getchar();
	
	cout << "ENTER THE OF DAYS WORKED  : " <<endl;
	cin >> user.days;
	
	cout << "ENTER HOURS WORKED  : " <<endl;
	cin >> hoursworked;
	
	cout << "ENTER HOURLY RATE  : " <<endl;
	cin >> hourlyrate;
	
	cout << "ENTER THE DAILY RATE  : " <<endl;
	cin >> user.rate;
	
	
	// calculate Gross Pay
	double grossPay = hourlyrate * hoursworked;
	
	// calculate taxes
	double taxes = grossPay * taxrate;
	
	// calculate Net Pay
	double netPay = grossPay - taxes;
	
	solve = (user.days * user.rate);
	if(user.gender == 'M'|| user.gender == 'm')
	{
		sex = "MALE";
	}
	else if(user.gender == 'F' || user.gender == 'f')
	{
		sex = "FEMALE";
	}
	
	cout << fixed;
	cout << setprecision(2);
	 cout << "\n\n";
	 cout << "\t ===== GENERATED REPORT =====";
	 cout << "\n\n";
	 cout << "\nEmployee Name  : " << user.name;
	 cout << "\nDepartment  : " << user.department;
	 cout << "\nGender  : " << sex;
	 cout << "\nSalary  : $" << solve;
	 cout << "\nGross Pay  : $" << grossPay;
	 cout << "\nTaxes  : $" << taxes;
	 cout << "\nNet Pay  : $" << netPay;
	 cout << "\n\n";
	
	return 0;
}
