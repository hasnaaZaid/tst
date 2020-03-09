#pragma once
#include<string>
#include <cppconn/prepared_statement.h>
#include "mysql_connection.h"

class Person
{private:
	int id;
	std::string name;
	int age;
public:
	Person(int id, std::string name, int age);
	
	int getId();

	void setId(int *id);

	std::string getName();

	//void setName(string *name);

	int getAge();

	void setAge(int*age);

	int insertPerson();

	int DeletPerson(std::string name);

	
};

