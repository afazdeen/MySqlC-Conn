cmake_minimum_required(VERSION 3.15)
project(TestSQL)

set(CMAKE_CXX_STANDARD 14)

include_directories(MySql/mysqlheaders/mysqlheaders)
link_directories(C:/Program Files (x86)/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/lib)

add_executable(TestSQL
        main.cpp
        MySql/mysqlheaders/mysqlheaders/mysql.h)

target_link_libraries(TestSQL libmysql.a)