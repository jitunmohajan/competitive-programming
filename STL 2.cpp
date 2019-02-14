/*
    priority_queue<int,vector<int>,greater<int> >Q;

int main(){

long long int x,y;
scanf("%llx %llo",&x,&y);//%llx >take hex-decimal intputss
//and %llo takes octal input
//%llX it takes upper case hexa-decimal input
printf
return 0;
}
*/
/*

struct jm
{
    int a;
    int b;
    int c;

};
bool srt(const jm &a,const jm &b){
return a.c<b.c;

}
int main(){
int n=0;
vector<jm>v(n);

int e,f,g;
for(int i=0;i<3;i++)
{
    v.resize(n++);
        cin>>v[i].a>>v[i].b>>v[i].c;

}
sort(v.begin(),v.end(),srt);
for(int i=0;i<3;i++)
    cout<<v[i].a<<v[i].b<<v[i].c;

return 0;}

*/

#include<bits/stdc++.h>
using namespace std;
bool srt(const pair<string,int>&a,const pair<string,int>&b){
	return a.first<b.first;
}
typedef pair<string,int>pii;
//str.erase (10,8); 
int main(){
    srand(time(NULL));
    int n=3,m=4;
vector <int> l(m+5),r(m+5);//declear multiple vector here l and r are the vectors;
vector<int>v1;//vector declear like 1d array like
v1.push_back(14);
v1.push_back(9);
v1.push_back(10);
for(int i=0;i<v1.size();i++)
   cout<<v1[i]<<" ";
   cout<<endl;

v1.pop_back();//it will remove the last value;
cout<<v1.back();//it will print the last value;

vector<int>v2(4,100);//it means 4 ints with value 100;
vector<int>v3(200,0);//it means  20 ints with value 0
vector<int>v4(v3.begin(),v3.end());//it will copy the v3 vector
vector<int>vec;
vec=v4;//it will copy the vector
vector<int>v5(v4); //it will copy v4 vector;
v3.at(2) = -1;
int myint[]={16,2,77,29};
vector<int>v6(myint,myint+sizeof(myint)/sizeof(int));//copy myint array

for(int i=0;i<v6.size();i++)
    cout<<v6[i]<<endl;

sort(v1.begin(),v1.end());//sort the values in the vector
v4.erase(v4.begin()+5);//this will erase first 6 element
v4.erase(v4.begin(),v4.begin()+3);//this will erase first 3 element
v4.resize(5);//its size will be 5;
v6.clear();//this will clear all values from the vector


for(int i=0;i<v6.size();i++)
    cout<<v6[i]<<endl;

vector<int>v7[100];//2D array vector work
vector<int>v8(100);//1D array so you dont have to push back the value just insert

vector<int>v9[10][9];//#3D vector

vector<vector<int> >v2D;


//>>>>>>>>>>>>>>>>.QUEUE>>>>>

stack<int>S;
S.push(23);
cout<<S.top()<<endl;
S.pop();
queue<int>q1;
q1.push(12);
q1.push(42);
q1.push(92);
q1.push(95);
q1.push(90);
q1.pop();//pop the 42 int value the first value
cout<<" print the value of queue>>>"<<endl;
while(!q1.empty()){
    cout<<q1.front()<<" "<<endl;
    cout<<q1.back()<<endl;
    q1.pop();
}
priority_queue<int>pq;//always sorted in descending way;
priority_queue<int,vector<int>,greater<int> >q2;//this sorted the values in accending

cout<<"queue values>>"<<endl;
q2.push(12);
q2.push(42);
q2.push(32);
q2.push(33);
q2.push(26);
q2.push(25);
while(!q2.empty()){
    cout<<q2.top()<<" ";
    q2.pop();
}
cout<<endl;






return 0;
}
