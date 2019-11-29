/* Standard C++ includes */



/*#include "mysql_connection.h"
#include "cppconn/driver.h"
#include "cppconn/exception.h"

using namespace std;

int main()
{
    // create connection object to connect to database
    //SAConnection con;
    cout << endl;
    cout << "Running 'Hello World!' AS _message'..." << endl;

    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
  //  sql::ResultSet *res;
    //driver = get_driver_instance();
    //con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
    //con->setSchema("test");

    return 0;
}*/
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include<sstream>

using namespace std;

int main()
{
    cout<<"Hello\n";
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,"localhost","admin","admin","test1",0,NULL,0);

    if(conn)
    {
        cout<<"Connected\n";
    }
    else
    {
        cout<<"Not Connected\n";
    }

    int qstate=0;
    stringstream ss;
    string name= "Tharaka";
    ss << "INSERT INTO test_table(name) VALUES('" << name << "')";
    string query =ss.str();
    const char* q=query.c_str();
    qstate=mysql_query(conn,q);
    if(qstate==0){
        cout<<"Record Inserted...." ;
    }else{
        cout<<"Failed" ;
    }

    return 0;
}




