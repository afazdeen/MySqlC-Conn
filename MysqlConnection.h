//
// Created by AfazD on 02-Dec-19.
//

#ifndef TESTSQL_MYSQLCONNECTION_H
#define TESTSQL_MYSQLCONNECTION_H


#include "DbConnection.h"

class MysqlConnection: public DbConnection {

public:
    virtual MYSQL* getConnection(std::string hostname,std::string username,std::string password,std::string dbname,int port);
};


#endif //TESTSQL_MYSQLCONNECTION_H
