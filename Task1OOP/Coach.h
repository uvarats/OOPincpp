#pragma once
#include <string>
#include <iostream>
using namespace std;

class Coach
{
	string fullName;
	string placeOfWork;
	string workPhoneNumber;
	string phoneNumber;
	int age;
public:
	Coach
	(
		string fullName, 
		string placeOfWork, 
		string workPhoneNumber, 
		string phoneNumber, 
		int age
	);

	Coach();

	string getFullName();
	Coach& setFullName(string name);

	string getPlaceOfWork();
	Coach& setPlaceOfWork(string placeOfWork);

	string getWorkPhoneNumber();
	Coach& setWorkPhoneNumber(string workPhoneNumber);

	string getPhoneNumber();
	Coach& setPhoneNumber(string phoneNumber);

	int getAge();
	Coach& setAge(int age);

	friend ostream& operator<< (ostream& outs, const Coach& coach);
};

