//Dialog of the first example is given below.
#include<bits/stdc++.h>
using namespace std;
int main(){
	string name,movie,day,quote;
	int gear,id;
	

cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
cout<<"?????: ";//Luke Skywalker
getline(cin,name);
cout<<"Fahsai: Wow!!! "<<name<<" that is a really cool name.\n";
cout<<"Fahsai: I think you are Engineering student. What is your student ID?\n";
cout<<name<<": "; //590610999
cin>>id;
cin.ignore();
gear=id/10000000-12;
cout<<"Fahsai: I think you may be GEAR "<<gear<<".  I have a free movie tickets for you. \n";
cout<<"Fahsai: Let's go to cinema together!!! \n";
cout<<"Fahsai: What movie do you want to watch?\n";
cout<<name<<": ";
getline(cin,movie);
cout<<"Fahsai: So....which day are you free to go with me?\n";
cout<<name<<": ";
getline(cin,day);
cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watch "<<movie<<" with you.\n";
cout<<name<<": ";
getline(cin,quote);
cout<<"Fahsai: 555+ see you " <<day<<". Bye Bye \(^ ^)/ ";


}
