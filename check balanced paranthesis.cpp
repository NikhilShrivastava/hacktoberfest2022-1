#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n;
	cin>>n;
	string t;
	while(n--)
	{   char x;
		cin>>t;
	stack<char> s;
	for(int i=0;i<t.length();i++)
	{
		if(t[i]=='(' || t[i]=='{' || t[i]=='[' ) s.push(t[i]); continue;
		if (s.empty()) 
           return false; 
  
        switch (t[i]) 
        { 
        case ')': 
  
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
            break; 
  
        case '}': 
   
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
            break; 
  
        case ']': 
  
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
            break; 
        } 
		
	}
	if(s.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	}
	

}
