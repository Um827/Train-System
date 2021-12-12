#pragma once

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
	void setName()
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
	void setAge()

	{

		int Age;
		cout << "enter the age : ";
		cin >> Age;
		this->Age = Age;
		cout << endl;
	}
	void setAge(int Age)
	{
		this->Age = Age;
	}
	int getAge()
	{
		return Age;
	}

	void setGender()
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
	void print()
	{
		cout << "the name is : " << Name << endl << "the age is : " << Age << endl << "th gender is :" << Gender << endl;;
	}
	virtual void print(string& text)
	{
		text = text + "Name : " + Name + "\n";
		text = text + "Age : " + to_string(Age) + "\n";
		text = text + "Gender : " + Gender + "\n";
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
	void setter(string Name, int Age, string Gender, string Occup, string Quali, string NIC)
	{
		Person::setName(Name);
		Person::setAge(Age);
		Person::setGender(Gender);
		this->Occupation = Occup;
		this->Qualification = Quali;
		this->NIC = NIC;
	}


	void print()
	{
		Person::print();
		cout << "the occupation is : " << Occupation << endl << "the qualification is : " << Qualification << endl << "the NIC is : " << NIC << endl;
	}
	void print(string& text)
	{
		Person::print(text);
		text = text + "Ocuppation : " + Occupation + "\n";
		text = text + "Qualification : " + Qualification + "\n";
		text = text + "NIC : " + NIC + "\n";
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
	void setter(string Name, int Age, string Gender, string BForm)
	{
		Person::setName(Name);
		Person::setAge(Age);
		Person::setGender(Gender);
		this->B_form_number = BForm;
	}
	void print()
	{
		Person::print();
		cout << "the b_form_no is : " << B_form_number << endl;
	}
	void print(string& text)
	{
		Person::print(text);
		text = text + "B_Form_No : " + B_form_number + "\n";
	}
};

class Bogie {
	int Bogie_ID;
	Bogie* next;
	Person** Adults;
	Person** kids;
	string familyName;
public:
	int   adultcount, kidcount;
	Bogie()
	{
		Bogie_ID = 0;
		this->adultcount = 0;
		this->kidcount = 0;
	}
	Bogie(int id, Bogie* next)
	{
		this->adultcount = 0;
		this->kidcount = 0;
		this->Adults = new Person *[4];
		this->kids = new Person *[6];
		for (int i = 0; i < 6; i++)
		{
			kids[i] = new kid;
		}
		for (int i = 0; i < 4; i++)
		{
			Adults[i] = new Adult;
		}
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
	void setnext(Bogie* next)
	{
		this->next = next;
	}
	Bogie* getnext()
	{
		return next;
	}

	void AddAdult(string Name, int Age, string Gender, string Occup, string Quali, string NIC)
	{
		Adult* tempA = new Adult(Name, Age, Gender, Occup, Quali, NIC);
		Adults[adultcount++] = tempA;
	}

	void AddKid(string Name, int Age, string Gender, string BForm)
	{
		kid* tempK = new kid(Name, Age, Gender, BForm);
		kids[kidcount++] = tempK;
	}

	void Print(string& text, string& text2)
	{
		for (int i = 0; i < adultcount; i++)
		{
			Adults[i]->print(text);
			text = text + "\n";
		}
		for (int i = 0; i < kidcount; i++)
		{
			kids[i]->print(text2);
			text2 = text2 + "\n";
		}
	}
	~Bogie()
	{
		cout << "the bogiee is destroyed!!";
	}
};



class train
{
	Bogie* engine;


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
		else if (this->engine->getid() == ID)
		{
			Bogie* Temp = this->engine;
			this->engine = this->engine->getnext();
			delete Temp;
			return true;
		}
		if (SearchBogie(ID))
		{
			Bogie* previous = this->engine;
			Bogie* current = this->engine->getnext();
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
		Bogie* current = this->engine;
		while (current != nullptr)
		{
			cout << "The id of this bogie is: " << current->getid() << endl;
			current = current->getnext();
		}
	}//print only the Bogie_ID of all bogies
	bool SearchBogie(int ID)
	{
		Bogie* current = this->engine;
		while (current != nullptr)
		{
			if (current->getid() == ID)
			{

				return true;
				break;
			}
			current = current->getnext();

		}
		return false;
	}
	//search the particular bogie
	void AddAdultPassenger(int ID, string Name, int Age, string Gender, string Occup, string Quali, string NIC)
	{
		Bogie* current = this->engine;
		while (current != nullptr)
		{
			if (current->getid() == ID)
			{
				current->AddAdult(Name, Age, Gender, Occup, Quali, NIC);
			}

			current = current->getnext();
		}

	}
	void AddKidPassenger(int ID, string Name, int Age, string Gender, string BForm)
	{
		Bogie* current = this->engine;
		while (current != nullptr)
		{
			if (current->getid() == ID)
			{
				current->AddKid(Name, Age, Gender, BForm);
			}

			current = current->getnext();
		}
	}
	void print_train(string& text)
	{
		Bogie* current = this->engine;
		while (current != nullptr)
		{
			text = text + to_string(current->getid()) + "\n";

			current = current->getnext();


		}

	}
	void print_Bogie(int id, string& AdultInfo, string& KidInfo)
	{
		Bogie* current = this->engine;
		while (current != nullptr)
		{
			if (current->getid() == id)
			{
				current->Print(AdultInfo, KidInfo);
			}


			current = current->getnext();

		}
	}
	~train()
	{
		cout << "the train is destroyed!!";
	}
};



