{"filter":false,"title":"p.c","tooltip":"/p.c","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":9,"column":0},"action":"remove","lines":["#include<stdio.h>","","","int main()","{","    char c=255;","    c+=10;","    printf(\"%d\",c);","}",""],"id":248},{"start":{"row":0,"column":0},"end":{"row":26,"column":0},"action":"insert","lines":["#include <stdlib.h>","#include <iostream>","#include <sstream>","#include <stdexcept>","#include \"mysql_connection.h\"","#include <cppconn/driver.h>","#include <cppconn/exception.h>","#include <cppconn/resultset.h>","#include <cppconn/statement.h>","#include <cppconn/prepared_statement.h>","#define EXAMPLE_HOST \"localhost\"","#define EXAMPLE_USER \"yourusername\"","#define EXAMPLE_PASS \"yourpassword\"","#define EXAMPLE_DB \"yourdatabase\"","using namespace std;","int main(int argc, const char **argv)","{","\tconst string url=EXAMPLE_HOST;","\tconst string user=EXAMPLE_USER;","\tconst string pass=EXAMPLE_PASS;","\tconst string database=EXAMPLE_DB;","\tsql::Driver* driver = get_driver_instance();","\tstd::auto_ptr<sql::Connection> con(driver->connect(url, user, pass));","\tcon->setSchema(database);","  \treturn 0;","}",""]}]]},"ace":{"folds":[],"scrolltop":0.5,"scrollleft":0,"selection":{"start":{"row":26,"column":0},"end":{"row":26,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1550429508599,"hash":"0c2ad92de7e0fffb2d1de3a58c8600a1cc6f8203"}