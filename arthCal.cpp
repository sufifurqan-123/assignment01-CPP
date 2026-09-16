#include<iostream>
using namespace std;
int main(){
  char opr;
  int a,b;
  cout<<"enter two numbers:";
  cin>>a>>b;
  cout<<"enter operator:";
  cin>>opr;
  switch(opr){
    case '+':cout<<"sum="<<a+b;
         break;
    case '-':cout<<"sub="<<a-b;
         break;
    case '*':cout<<"mul="<<a*b;
         break;  
    case '/':
    if(b==0){
      cout<<"not defined";
    }else{
      cout<<"div="<<a/b;
    }
         break;  
    case '%' :cout<<"modulo="<<a%b;
        break;
     default:cout<<"you entered invalid operator"  ; 

  }
  return 0;
}