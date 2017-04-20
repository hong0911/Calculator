#pragma once

#include <string>
using namespace std;

class Integer
{
public:
	Integer();
	Integer(string& input);
	void pow();
	Integer& operator=(const Integer& input);
	friend Integer operator+(Integer& lhs, Integer& rhs);
	friend Integer operator-(Integer& lhs, Integer& rhs);
	friend Integer operator*(Integer& lhs, Integer& rhs);
	friend Integer operator/(Integer& lhs, Integer& rhs);
	friend Integer operator!(Integer& input);
private:
	string number;
};

Integer::Integer() :number("0")
{}

Integer::Integer(string& input) : number(input)
{}

void pow()
{}

Integer& Integer::operator=(const Integer& input)
{

}

Integer operator+(Integer& lhs, Integer& rhs)
{}

Integer operator-(Integer& lhs, Integer& rhs)
{}

Integer operator*(Integer& lhs, Integer& rhs)
{}

Integer operator/(Integer& lhs, Integer& rhs)
{}

Integer operator!(Integer& input)
{}
