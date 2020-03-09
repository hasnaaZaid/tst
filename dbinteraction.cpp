#include "dbinteraction.h"

sql::Connection*  dbinteraction::connect()
{
	/*driver = get_driver_instance();
	con = driver->connect("tcp://127.0.0.1:3306", "root", "Papa19571957");
	stmt = con->createStatement();*/
	con->setSchema("db");
	return con;
}

void dbinteraction::disconnect()
{
	delete con;
}

int dbinteraction:: maj(sql::PreparedStatement *pt)
{
	int lg = 0;
	lg = pt->execute();
	return lg;
}

sql::ResultSet *dbinteraction::select(std::string sql)
{
	res = stmt->executeQuery(sql);
	return res;
}

 sql::Driver *dbinteraction::driver = get_driver_instance();
 sql::Connection *dbinteraction::con = dbinteraction::driver->connect("tcp://127.0.0.1:3306", "root", "Papa19571957");
 sql::Statement *dbinteraction::stmt = dbinteraction::con->createStatement();