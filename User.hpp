#ifndef __USER_HPP
#define __USER_HPP

#include<fstream>

class User {
private:
	char* m_username;
	char* m_password;

public:
	User();
	User(char*, char*);
	User(const User&);
	User& operator=(const User&);
	~User();

private:
	void copyFrom(const User&);
	void cleanMemory();
	

public:
	//сетъри
	void setUsername(char*);
	void setPassword(char*);

	//гетъри
	char* getUsername()const;
	char* getPassword() const;

	//Записване на потребители в бинарен файл.
	void serializeUser(std::ofstream&) const;

	//Четене на потребител от бинарен файл.
	void deserializeUser(std::ifstream&);
};

#endif
