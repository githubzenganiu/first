#include<my_global.h>
#include<mysql.h>

int main()
{
	MYSQL *con = mysql_init(NULL);
	if (con == NULL)
	{
		fprintf(stderr, "%s\n",mysql_error(con));
		exit(1);
	}
	if (mysql_real_connect(con, "localhost", "root", "123456",
		NULL, 0, NULL, 0) == NULL)
	{
		fprintf(stderr, "%s\n", mysql_error(con));
		exit(1);
	}
	if (mysql_query(con, "create database db2;"))
	{
		fprintf(stderr, "%s\n", mysql_error(con));
		mysql_close(con);
		exit(1);
	}
	mysql_close(con);
	return 0;
}
