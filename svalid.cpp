#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int a;
	map<char,int> m;
	map<int,int> count;
	//map<char, int>::iterator itr;
	string ss;
	cout<<"enter the string";
	cin>>ss;
	for(char i:ss)
		m[i]++;
	/*for (itr = m.begin(); itr != m.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }*/
  	for (const auto& x : m) {
        std::cout << x.first << ": " << x.second << "\n";
        count[x.second]++;
    
    }	
    
    for (const auto& x : count) 
        std::cout << x.first << ": " << x.second << "\n";
    int len = count.size(),flag=0,temp;
    	if(len>2)
 		cout<<"NO";
 	 for (const auto& x : count) 
        	if(x.second==1&&x.second){
        		flag=1;
        		break;
        		}
    	if(flag==1)
    		cout<<"YES";
    	else
    		cout<<"NO";


		
}
