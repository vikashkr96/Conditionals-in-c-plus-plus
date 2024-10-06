#include <iostream>
using namespace std;
int main(){
int a;

cout<<"Enter your age:";
cin>>a;
if (a>=18 && a<26){
    cout<<"teenager"<<endl;
}
if(a<18 && a>0){
    cout<<"child"<<endl;
}
else{
    cout<<"old age"<<endl;
}

return 0;
}