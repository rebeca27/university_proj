#pragma once
#include <string>
#include <iostream>

class Person {

public:
    friend std::ostream& operator<<(std::ostream &os, const  &value);
    friend std::istream& operator>>(std::istream &is, Person &value);
    void setmFirstName(string fN);
    void setmLastName(string lN);
    void setmBirthday(string birthD);
    void setmCNP(string CNP);
    void setmEmail(string Email);
    string  getmFirstName( );
    string getmLastName( );
    string getmBirthday( );
    string getmEmail();
    string getmCNP();

protected:
	std::string FirstName;
	std::string LastName;
	std::string CNP;
	std::string Email;
	std::string Birthday;
	vector<Role*>mRoles;
	Person();
	~Person();

};


