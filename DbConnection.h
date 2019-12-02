//
// Created by AfazD on 02-Dec-19.
//

#ifndef TESTSQL_DBCONNECTION_H
#define TESTSQL_DBCONNECTION_H


class DbConnection {
public:
    virtual MYSQL* getConnection(std::string hostname,std::string username,std::string password,std::string dbname,int port)=0;

};


#endif //TESTSQL_DBCONNECTION_H
