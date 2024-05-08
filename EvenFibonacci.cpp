#include<iostream>
#include <vector>
using namespace std;
int main (){

vector<long long unsigned>table;
table.push_back(1);
table.push_back(2);

long long unsigned fibsum=2;

while(table[table.size()-1]<=4000000){
long long unsigned fibvalue=(table[table.size()-1])+(table[table.size()-2]);
table.push_back(fibvalue);
if(fibvalue%2==0){
fibsum+=fibvalue;
}
}

std::cout<<fibsum<<"\n";
    return 0;
}