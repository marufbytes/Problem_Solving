#include<bits/stdc++.h>
using namespace std;
int main(){

    int number,workingHour;
    float payment;

    cin>>number;
    cin>>workingHour;
    cin>>payment;

    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<workingHour*payment<<endl;
    


    return 0;
}