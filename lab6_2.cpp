//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker that is a really cool name.
Fahsai: I think you are Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47.  I have a free movie tickets for you. 
Fahsai: Let's go to cinema together!!! 
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watch Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/ 
*/
#include <iostream>
#include<string>

using namespace std;

void username(string a){
    cout << a << ": ";
}
int main(){
    string name , id , mov , date ,say;
    int gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    username("?????");
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " that is a really cool name.\n";
    cout << "Fahsai: I think you are Engineering student. What is your student ID?\n";
    username(name);
    cin >> id;
    cin .ignore();
    gear = (int(id[0]) - 48) * 10 + (int(id[1]) - 48);
    cout << "Fahsai: I think you may be GEAR " << gear - 12 <<".  I have a free movie tickets for you.\n"
         << "Fahsai: Let's go to cinema together!!!\n"
         << "Fahsai: What movie do you want to watch?\n"; // 48 = 0
    username(name);
    getline(cin , mov);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    username(name);
    getline(cin , date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watch " << mov << " with you.\n";
    username(name);
    getline(cin , say);
    cout << "Fahsai: 555+ see you "<< date << ". Bye Bye \(^ ^)/"; 
}