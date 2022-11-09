//Name: Employee expenses
//Author: Julia Pak
//Date: July 2005
//Description: this program keeps track of employee expenses.
//Data Dictionary:
//num-integer representing employee number.
//employee-string representing employee name.
//dept-char representing type of account.
//distance-float representing distance travelled.
//amt_due-float representing amount due to the employee.
//paid-char representing the status P or p for paid and N or n for not paid.

#include<iostream>//includes the standard i/o library.
#include<string>

using std::cin;
using std::cout;
using std::endl;


//Class definition
template <class Emp_Expenses>
class Array {
public:
	Emp_Expenses()
	void create(int acc_num, char emp_name[], char dept); //creates travel account.
	void update(float amt_due);//adds number of km travelled and updates the amt-due.
	void paid();//resets the value to 'P' when paid.
	void print(); //prints information. This is called after each function.
private:
	int acc_num:
	char emp_name[25];//employee name.
	char dept;//employee deptartment.
	float distance;//distance travelled.
	char paid;//paid or not paid.
	float amt_due;//amount due to employee.
};

template <class Emp_Expenses>
void class<Emp_Expenses>::create(int acc_num, char emp_name[], char dept)//creates travel account for the employee.

{
	char emp_name[], dept;
	int acc_num;
	Array=New Emp_Expenses[25];
	for (int i=0; i<25; i++)

	cout<<"Enter the employee name";
	cin>>emp_name[];
	cout<<"Enter the employee number";
	cin>> acc_num;
	cout<<"Enter a character for the type of account";
	cin>>dept;
}



template <class Emp_Expenses>
void class <Emp_Expenses>:: update(float amount)
{
	int acc_num;

	cout<<"Enter the employee number";
	cin>>acc_num;
}



template <class Emp_Expenses>
void class<Emp_Expenses>:: paid()
{
	if (amt_due>0)
		cout<<"not paid";
		else if (amt_due<0)
		cout<<"paid";
}

template <class Emp_Expenses>
void class<Emp_Expenses>:: print()
{

}


char main()//begins main program
{
	char code;


	do{
		cout<<"Enter a code=>"; //prompt to enter one of the following codes.
		cout<<"Enter C to create a travel account=>";//Prompt for the function create.
		cout<<"Enter U to update an account=>";//prompt for the function update.
		cout<<"Enter A to pay an account=>";//prompt for the function to pay an account.
		cout<<"Enter P to print=>";//prompt for the print function.
		cout<<"Enter Q to quit=>";
		fflush(stdin);
		cin>>code;
		
		switch (toupper(code))//converts letter entered by user to uppercase
		{
		case 'C': create(int acc_num, char emp_name[], char dept);//call to function create.
			break;
		case 'U':update(float amount);//call to update.
			break;
		case 'A':paid();// call to paid.
			break;
		case 'P':print();//call to print.
			break;
		case 'Q'://prompt for quit.
			break;
		default: cout<<"Error";//default message.
		}
	}while (toupper(code)!='Q');//continues until user signals quit.

	return 0;//end of main.
}































