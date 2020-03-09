#pragma once
#include<string>
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>



class dbinteraction
{
private:

	static sql::Driver *driver;
	static sql::Connection *con;
	static sql::Statement *stmt;
	static sql::ResultSet  *res;
	

public:

	static sql::Connection* connect();

	static void disconnect();

	static int maj(sql::PreparedStatement *pt);

	static sql::ResultSet  *select(std::string sql);
};


