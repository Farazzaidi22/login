#include <iostream>
#include <queue>
using namespace std;

#ifndef LOGIN_H
#define LOGIN_H



class login
{
    public:
        login();
        login(string , string);
        void setusername(string);
        void setpass(string);


    private:
        string username="faraz", pass;
        queue<string> ok;
};

#endif // LOGIN_H
