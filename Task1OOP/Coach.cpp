#include "Coach.h"

Coach::Coach(
	string fullName, 
	string placeOfWork, 
	string workPhoneNumber, 
	string phoneNumber, 
	int age
) : fullName(fullName), 
	placeOfWork(placeOfWork), 
	workPhoneNumber(workPhoneNumber), 
	phoneNumber(phoneNumber), 
	age(age) 
{ 
}

Coach::Coach() : Coach::Coach(
	"Ivanov Ivan Ivanovich",
	"Unknown",
	"+123456789",
	"+987654321",
	25
) {}

string Coach::getFullName() {
	return this->fullName;
}

Coach& Coach::setFullName(string fullName) {
	this->fullName = fullName;
	return *this;
}

string Coach::getPlaceOfWork() {
	return this->placeOfWork;
}

Coach& Coach::setPlaceOfWork(string placeOfWork) {
	this->placeOfWork = placeOfWork;
	return *this;
}

string Coach::getWorkPhoneNumber() {
	return this->workPhoneNumber;
}

Coach& Coach::setWorkPhoneNumber(string workPhoneNumber) {
	this->workPhoneNumber = workPhoneNumber;
	return *this;
}

string Coach::getPhoneNumber() {
	return this->phoneNumber;
}

Coach& Coach::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
	return *this;
}

int Coach::getAge() {
	return this->age;
}

Coach& Coach::setAge(int age) {
	this->age = age;
	return *this;
}

ostream& operator<<(ostream& outs, const Coach& c)
{
	return outs << c.fullName << "," << c.placeOfWork << "," << c.workPhoneNumber << "," << c.phoneNumber << "," << c.age;
}
