#include<iostream>
using namespace std;
    
int main()
{
// 	string email="john123@gmail.com";
// 	int i=(int)email.find('@');
// 	string uname=email.substr(0,i);
	    
// 	cout<<"User Name is "<<uname<<endl;
	
// 	return 0;
  
  
  
  string s; int count=0;
 
cout<<"Enter Email Address :";
 
getline(cin,s);
 
int len=s.find('@');
 
 
 
string u=s.substr(0,len);
 
 
 
cout<<"Username is :"<<u<<endl;
 
for(int i=0;i<len;i++)
 
{
 
    if(u[i]>=65 && u[i]<=90 || u[i]>=97 && u[i]<=122 || u[i]>=48 && u[i]<=57 ||u[i]=='_' || u[i]=='.')
 
        count++;
 
}
 
if(count==len)
 
    cout<<"Valid Username...";
 
else
 
        cout<<"INValid Username...";
	    
}

