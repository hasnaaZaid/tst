#include "Person.h"
#include "dbinteraction.cpp"

Person::Person(int id, std::string name, int age)
{
	this->id = id;
	this->name = name;
	this->age = age;

}

int Person::getId()
{
	return id;
}

void Person::setId(int * id)
{
	this->id=*id;
}

std::string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

void Person::setAge(int * age)
{
	this->age = *age;
}

int Person::insertPerson()
{
	sql::Connection *con = dbinteraction::connect();
	sql::PreparedStatement *ptsmt= con->prepareStatement("Insert into user values(?,?,?)");
	ptsmt->setInt(1, id);
	ptsmt->setString(2, name);
	ptsmt->setInt(3, age);
	int nb = dbinteraction::maj(ptsmt);
	dbinteraction::disconnect();

}

int Person::DeletPerson(std::string name)
{
	return 0;

}

