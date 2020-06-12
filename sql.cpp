#include "secret.cpp"
class sql{
public:
    void saveCommand(string s){
        fstream myfile;
        myfile.open ("tempFile.journey");
        myfile << s;
        myfile.close();
    }
    bool check_hack(string str){
        for(auto i:str){    
            if(i<48||(58<=i&&i<=64)||(91<=i&&i<=96)||i>122)return true;
        }
        return false;
    }
    void operation(string s){
        saveCommand(s);
        system("sudo mysql <tempFile.journey");
        system("rm tempFile.journey");
    }
    int check(string user,string password){
        if(check_hack(user))return -1;
        if(check_hack(password))return -1;
        string s="use j10 ; select count(*) from users where user='"+user+"' and password='"+password+"';";
        saveCommand(s);
        system("sudo mysql <tempFile.journey");
        return 1;
    }
};