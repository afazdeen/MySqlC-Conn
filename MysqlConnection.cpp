//
// Created by AfazD on 02-Dec-19.
//
#include <windows.h>
#include <mysql.h>
#include <iostream>
#include "MysqlConnection.h"

MYSQL* MysqlConnection::getConnection(std::string hostname,std::string username,std::string password,std::string dbname,int port)
{
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,hostname.c_str(), username.c_str(), password.c_str(), dbname.c_str(), port, NULL, 0);

    return  conn;
}
