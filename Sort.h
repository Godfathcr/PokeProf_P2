#pragma once
#include "prof.h"
#include <string>
using namespace std;
template<typename T>
class Sort
{
public:
	Sort(){}
	virtual void activation(T & , T &)=0;
	virtual ~Sort() {}
	void setAccuracy(int m_accuracy)
	{
		accuracy = m_accuracy;
	}
	int getAccuracy()
	{
		return accuracy;
	}
	string Nom() {
		return nom;
	};

	string Description() {
		return description;
	}

protected:
	int accuracy;
	string description;
	string nom;
};

