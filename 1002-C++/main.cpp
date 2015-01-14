/* 
 * File:   main.cpp
 * Author: liumiao
 *
 * Created on 2015年1月14日, 下午10:57
 */

//#include <cstdlib>

//using namespace std;

/*
 * 
 */
//int main(int argc, char** argv) {

//    return 0;
//}
#include <iostream>
#include <map>
#include <string>
#include <cstring>
using namespace std;
string s,t;
map<string,int> cnt;
int i,n,f;
int main()
{
     cin>>n;
     while(n--)
     {
           cin>>s;
           f=0;
           for(i=0;i<s.size();i++)
           {
                 if(s[i]=='-') continue;
                 else if(s[i]>='0'&&s[i]<='9') t.push_back(s[i]);
                 else if(s[i]>='A'&&s[i]<='P')
                 {
                       s[i]-='A';
                       s[i]/=3;
                       s[i]+='0'+2;
                       t.push_back(s[i]);
                 }
                 else
                 {
                       s[i]-='A'+1;
                       s[i]/=3;
                       s[i]+='0'+2;
                       t.push_back(s[i]);
                 }
           }
           t.insert(3,"-");
           ++cnt[t];
           t.clear();
     }
     for(map<string,int>::iterator p=cnt.begin();p!=cnt.end();p++)
     {
           if(p->second>1)
           {
                 cout<<p->first<<" "<<p->second<<endl;
                 f=1;
           }
     }
     if(!f)cout<<"No duplicates."<<endl;
}
