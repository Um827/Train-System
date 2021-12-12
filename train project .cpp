#include<iostream>
#include<string>
using namespace std;
class Person {
	string Name;
	int Age;
	string Gender;
public:
	Person()
	{
		Name = '\0';
		Age = 0;
		Gender = '\0';

	}
	Person(string Name, int Age, string Gender)
	{
		this->Name = Name;
		this->Age = Age;
		this->Gender = Gender;
	}
	virtual void setter()
	{
		string Name;

		cin.ignore();
		cout << "enter the name : ";
		getline(cin, Name, '\n');
		this->Name = Name;

		cout << endl;
	}

	void setName(string Name)
	{
		this->Name = Name;
	}
	string getName()
	{
		return Name;
	}
	
	void setAge(int Age)
	{
		this->Age = Age;
	}
	int getAge()
	{
		return Age;
	}
	virtual void setter1()

	{

		int Age;
		cout << "enter the age : ";
		cin >> Age;
		this->Age = Age;
		cout << endl;
	}
	virtual void setter2()
	{

		string Gender;
		cin.ignore();
		cout << "enter the gender : ";
		getline(cin, Gender, '\n');
		this->Gender = Gender;
	}
	void setGender(string Gender)
	{
		this->Gender = Gender;
	}
	string getGender()
	{

		return Gender;
	}
	virtual void print()
	{
		cout << "the name is : " << Name << endl << "the age is : " << Age << endl << "th gender is :" << Gender << endl;;
	}
};
class Adult :public Person {
	string Occupation;
	string Qualification;
	string NIC;
public:
	Adult()
	{
		Occupation = '\0';
		Qualification = '\0';
		NIC = '\0';
	}
	Adult(string Name, int Age, string Gender, string Occupation, string Qualification, string NIC) :Person(Name, Age, Gender)
	{
		this->Occupation = Occupation;
		this->Qualification = Qualification;
		this->NIC = NIC;
	}
	void setter()
	{
		Person::setter();
		Person::setter1();
		Person::setter2();
		string Occupation;
		string NIC;
		cin.ignore();
		cout << "enter the occupation : ";
		getline(cin, Occupation, '\n');
		cout << endl;
		this->Occupation = Occupation;
	}
	void setter1()
	{

		string Qualification;
		cin.ignore();
		cout << "enter the qualification : ";
		getline(cin, Qualification, '\n');
		cout << endl;
		this->Qualification = Qualification;
	}
	void setter2()
	{

		string NIC;
		cin.ignore();
		cout << "enter the NIc : ";
		getline(cin, NIC, '\n');
		cout << endl;
		this->NIC = NIC;
	}

	void print()
	{
		cout << "_______________ADULT INFORMATION__________________" << endl;
		Person::print();
		cout << "the occupation is : " << Occupation << endl << "the qualification is : " << Qualification << endl << "the NIC is : " << NIC << endl;
	}
};
class kid :public Person {
	string B_form_number;
public:
	kid()
	{
		B_form_number = '\0';
	}
	kid(string Name, int Age, string Gender, string B_form_number) :Person(Name, Age, Gender)
	{
		this->B_form_number = B_form_number;
	}
	void setter()
	{
		Person::setter();
		Person::setter1();
		Person::setter2();
		string B_form_number;
		cin.ignore();
		cout << "enter the bform no  : ";
		getline(cin, B_form_number, '\n');
		cout << endl;
		this->B_form_number = B_form_number;
	}
	void print()
	{
		cout << "________________KID INFORMATION_________________" << endl;
		Person::print();
		cout << "the b_form_no is : " << B_form_number << endl;
	}
};

class Bogie {
	int Bogie_ID;
	Bogie *next;
	Person ** Adults;
	Person ** kids;
	string familyName;
public:
	int   adultcount, kidcount;
	Bogie()
	{
		Bogie_ID = 0;
		this->adultcount = 0;
		this->kidcount = 0;
	}
	Bogie(int id, Bogie *next)
	{
		this->adultcount = 0;
		this->kidcount = 0;
		Bogie_ID = id;
		this->next = next;
	}
	void setbogieid(int Bogie_ID)
	{
		this->Bogie_ID = Bogie_ID;
	}
	int getid()
	{
		return Bogie_ID;
	}
	void setnext(Bogie *next)
	{
		this->next = next;
	}
	Bogie* getnext()
	{
		return next;
	}
	void AddPassengers()// should add adults and kids information etc
	{

		string familyName;
		cin.ignore();
		cout << "enter the family name : " << endl;
		getline(cin, familyName, '\n');
		cout << endl;
		this->familyName = familyName;
		bool flag1 = false, flag2 = false;
		while (flag1 == false)
		{
			cout << "how many adults are you enter ? : ";
			cin >> adultcount;
			if (adultcount >= 1 && adultcount <= 4)
			{
				flag1 = true;
			}
			else
			{
				cout << "oops!!maximum seats are only 4 for adults. ";
				cout << endl;
			}
		}
		while (flag2 == false)
		{
			cout << "how many kid you want to enter : ";
			cin >> kidcount;
			if (kidcount >= 1 && kidcount <= 6)
			{
				flag2 = true;
			}
			else
			{
				cout << "oops!!maximum seats are only 6 for kids. ";
				cout << endl;
			}
		}
		Adults = new Person*[adultcount];
		for (int i = 0; i < adultcount; i++)
		{
			Adults[i] = new Adult;
			Adults[i][0].setter();
			Adults[i][0].setter1();
			Adults[i][0].setter2();

		}
		kids = new Person*[kidcount];
		for (int i = 0; i < kidcount; i++)
		{
			kids[i] = new kid;
			kids[i][0].setter();

		}
	}


	void Print()
	{
		for (int i = 0; i < adultcount; i++)
		{
			Adults[i]->print();
		}
		for (int i = 0; i < kidcount; i++)
		{
			kids[i]->print();
		}
	}
	~Bogie()
	{
		
		for (int i = 0; i < adultcount; i++)
		{
			delete[] Adults;
		}
		Adults = NULL;
		for (int i = 0; i < kidcount; i++)
		{
			delete[] kids;
		}
		kids = NULL;

		cout << "the bogiee is destroyed!!";
	}
};



class train :public Bogie
{
	Bogie * engine;


public:
	train() {
		engine = nullptr;
	}
	bool addBogie(int ID)
	{
		this->engine = new Bogie(ID, this->engine);
		return true;

	}//add bogie at the end of the train
	bool removeBogie(int ID)
	{
		if (this->engine == nullptr)
		{
			return false;
		}
		if (SearchBogie(ID))
		{
			Bogie *previous = this->engine;
			Bogie *current = this->engine->getnext();
			while (current != nullptr)
			{
				if (current->getid() == ID)
				{
					previous->setnext(current->getnext());
					delete current;
					return true;
					break;
				}
				previous = current;
				current->getnext();
			}
			return false;
		}
		else
		{
			return false;
		}

	}//search the bogie and delete it
	void printTrain()
	{
		Bogie *current = this->engine;
		while (current != nullptr)
		{
			cout << "The id of this bogie is: " << current->getid() << endl;
			current = current->getnext();
		}
	}//print only the Bogie_ID of all bogies
	bool SearchBogie(int ID)
	{
		Bogie *current = this->engine;
		while (current != nullptr)
		{
			if (current->getid() == ID)
			{

				return true;
				break;
			}
			current = current->getnext();
			return false;
		}
	}//search the particular bogie
	~train()
	{
		//i did not allocate any dynamic memory in train

		cout << "the train is destroyed!!";
	}
};

int main()
{
	train t;
	t.addBogie(1);
	t.addBogie(2);
	t.AddPassengers();
	t.printTrain();
	t.Print();
	cin.get();

	return 0;
}
