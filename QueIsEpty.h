#pragma once
#include<string>
using namespace std;
class QueIsEpty
{
	string message;
public:
	QueIsEpty(string message)
		:message{message}
	{}
	string what()  const {
		return message;
	}

};

