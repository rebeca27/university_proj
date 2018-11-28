#include "pch.h"
#include "person.h"

 std::istream& operator>> (std::istream& in, std::string& value) {
    std::istream::sentry cerberos(in);
    if (cerberos) {
        value.erase();
        std::istreambuf_iterator<char> it(in), end;
        if (it != end) {
            std::ctype<char> const& ctype(std::use_facet<std::ctype<char> >(in.getloc()));
            std::back_insert_iterator<std::string> to(value);
            std::streamsize n(0), width(in.width()? in.width(): std::string::max_size());
            for (; it != end && n != width && !ctype.is(std::ctype_base::space, *it); ++it, ++to) {
                *to = *it;
            }
        }
    }
    else {
        in.setstate(std::ios_base::failbit);
    }
    return in;
}

 std::ostream& operator << (std::ostream &out, const Person &A)
{
	for (int i = A.n - 1; i >= 0; i--) out << A.m[i];
	return out;
}

Person::Person( )
{
  mFirstName;
  mLastName;
  mCNP;
  mEmail;
  mBirthday;
}
void Person::setmFirstName(string fN)
{
   mFirstName = fN;
}
void Person::setmLastName(string lN)
{
  mLastName = lN;
}
void Person::setmBirthday(string birthD);
{
  mBirthday = birthD;
}
void Person::setmCNP(string CNP);
{
  mCNP = CNP;
}
void Person::setmEmail(string Email)
{
  mEmail = Email;
}
string  Person::getmFirstName( )
{
  return mFirstName;
}
string Person::getmLastName( )
{
  return mLastName;
}
string Person::getmCNP( )
{
  return mCNP;
}
string Person::getmEmail( )
{
  return mEmail;
}
string Person::getmBirthday( )
{
  return mBirthday;
}
