
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include<sstream>
#include "MysqlConnection.h"

using namespace std;

int main()
{
    cout<<"Hello\n";
    std::string hostname = "localhost" ;
    std::string username = "admin";
    std::string password = "admin";
    std::string dbname = "test1";
    int port = 0;


    MysqlConnection mysqlobj;
    MYSQL* conn;
    conn = mysqlobj.getConnection(hostname, username, password, dbname, port);
    if(conn)
    {
        std::cout<<"Connected\n";
        int qstate=0;
        stringstream ss;
        string name= "Jack";
        ss << "INSERT INTO test_table(name) VALUES('" << name << "')";
        string query =ss.str();
        const char* q=query.c_str();
        qstate=mysql_query(conn,q);
        if(qstate==0){
            cout<<"Record Inserted...." ;
        }else{
            cout<<"Failed" ;
        }
    }
    else
    {
        std::cout<<"Not Connected\n";
    }
    return 0;
}




