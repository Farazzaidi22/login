#include <iostream>
#include <conio.h>
#include <queue>
#include "login.h"

using namespace std;

login::login()
{
    this->ok.push("faraz");  //username
    this->ok.push("ubitbscs2"); //password
}


void login::setusername(string naam)
{
    again:
    cout<<"Enter your user name: ";
    cin>>naam;

    if(naam!=ok.front())
    {
        cout<<"user name is incorrect!" << endl;
        cout<<"please try again" << endl;
        goto again;
    }

    else
    {
        ok.pop();
    }

}

void login:: setpass(string password)
{
    aga:
    cout<<"Enter your password: ";
    cin>>password;

    if(password!=ok.front())
    {
        cout<<"your pass is incorrect!" << endl;
        cout<<"please try again" << endl;
        goto aga;
    }

    else
    {
        ok.pop();
    }
}


