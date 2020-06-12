#include <bits/stdc++.h>
using namespace std;
#include"sql.cpp"
class j10{
private:
    string user;
    string password;
    sql SQL;
public:
    j10(){
        cout<<"WELCOME";
    }
    void LOGIN(){
        cout<<"USERNAME:";
        cin>>user;
        cout<<"PASSWORD";
        cin>>password;
        SQL.check(user,password);
    }
};