
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
typedef map<string,int> mapType;
mapType populationMap;
populationMap.insert(pair<string, int>("JK", 70));
populationMap.insert(pair<string, int>("KERALA", 75));
populationMap.insert(pair<string, int>("ASSAM", 93));
populationMap.insert(pair<string, int>("UP", 32));
populationMap.insert(pair<string, int>("MP", 91));
mapType::iterator iter;
cout<<"\n Size of population Map : "<<populationMap.size()<<"\n";
string state_name;
cout<<"\n Enter name of the state : ";
cin>>state_name;
iter = populationMap.find(state_name);
if( iter!= populationMap.end() )
cout<<state_name<<" population is "<<iter->second ;
else
cout<<"NOT FOUND"<<"\n";
populationMap.clear();
}

// Size of population Map : 5

//  Enter name of the state : maharashtra
// UP population is 32


//  Size of population Map : 5

//  Enter name of the state : maharashtra
// NOT FOUND