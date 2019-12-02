cmake_minimum_required(VERSION 3.15)
project(TestSQL)

set(CMAKE_CXX_STANDARD 14)

include_directories(MySql/mysqlheaders/mysqlheaders)
link_directories(MySql/libmysql.a)

add_executable(TestSQL
        main.cpp
        MySql/mysqlheaders/mysqlheaders/mysql.h
        DbConnection.h
        MysqlConnection.cpp
        MysqlConnection.h)

target_link_libraries(TestSQL libmysql.a)