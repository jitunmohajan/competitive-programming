//long long int x,y;
//scanf("%llx %llo",&x,&y);//%llx >take hex-decimal intputss
//and %llo takes octal input
//%llX it takes upper case hexa-decimal input
//cout<<(1<<3); //equal=8 that means 2^3;
//cout<<(1<<2);//equal=4 that means 2^2;
#include<bits/stdc++.h>
using namespace std;
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef pair<string,int>pii;
struct jm
{
    int a;
    int b;
    int c;
};
bool srt(const jm &a,const jm &b){
return a.c<b.c;
//here c is dcleared on struct jm
}
//OR
bool srt(node a,node b){ return a.bt<b.bt; }

bool st(const pair<string,int>&a,const pair<string,int>&b){
     return a.first<b.first;
}
int main(){
#ifdef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
    io
int a,b,c,d,mn;
cin>>a>>b>>c>>d;
mn=min({a,b,c,d});
mn=max({a,b,c,d});


        int n=3;
          //vector<pair<int,int> >v;
           //v.push_back({i,j});
        vector<jm>v(n);
        //jm or pair use accordinf to your need

        int e,g;
        for(int i=0;i<3;i++)
        {    v.resize(n++);
             cin>>v[i].a>>v[i].b>>v[i].c;
        }
        sort(v.begin(),v.end(),srt);

 /*_________________________vector______________________*/
//1D>>
     vector <int>f,l(5,0),r(5);//1D vector
     r.resize(5,0);//all the values of r vector=0;
     //or
     fill(r.begin(), r.end(),0);//this means all value are zero
     //or//use onnly assign for best output
     r.assign(n+2,0);

     r.push_back(10);r.pop_back();
     cout<<r.back()<<endl;
     for(int i=0;i<r.size();i++)
          cout<<r[i]<<" ";cout<<endl;
     //sort(a,a+n,greater<int>());
     sort(r.begin(),r.end());//sort the values in the vector
     sort(r.rbegin(),r.rend());//sort high to low

     r.erase(r.begin()+5);//this will erase first 6 element
     r.erase(r.begin(),r.begin()+3);//this will erase first 3 element
     //r.eraseElementWhoseValueIs(8);//5 9 2 8 0 7 erase 8
     r.resize(5);//its size will be 5;
     r.clear();//this will clear all values from the vector

     while(next_permutation(r.begin(),r.end())){
            cout<<r[0];
            for(int i=1;i<r.size();i++)
                    cout<<" "<<r[i];
            cout<<endl;
      }

//2D>>
      vector<int>c[100];//2D array vector work
      vector<vector<int> > b(4,vector<int>(4));//2D vector declear with size=4=int b[4][4];
      //matrix.resize( num_of col , vector<double>( num_of_row , init_value ) );
      //vector<vector<int> > b(4,vector<int>(4,0));//2D vector declear with size=4=int b[4][4]={0};
      b.resize(4,vector<int>(4,0));////all the values of b[4][4]={0};//dont use it for best output
      //or//use onnly assign for best output
      b.assign(4,vector<int>(4,0));
      f=r;//vector copied into vector f

/*_____________________________set___________________________*/
set<int>s;
while(1)
{
    int a;
    cin>>a;
    s.insert(a);
    for(set<int>::iterator itr=s.begin();itr!=s.end();itr++)
        cout<<*itr<<" ";
}
/*_______________________________stack_______________________________*/
       stack<int>S;
       S.push(23);
       cout<<S.top()<<endl;
       S.pop();
/*_____________________________queue___________________________*/
        queue<int>q1;
        q1.push(12);
        q1.pop();//pop the 42 int value the first value
        while(!q1.empty()){
            cout<<q1.front()<<" "<<endl;
            cout<<q1.back()<<endl;
            q1.pop();
        }
/*_____________________________priority_queue___________________________*/

        priority_queue<int>pq;//always sorted in descending way;
        //priority_queue<int,vector<int>,greater<int> >q2;//this sorted the values in accending

        cout<<"queue values>>"<<endl;
        pq.push(12);
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
/*_____________________________Map___________________________*/
            map<int,vector<int> >adj;//you can use it as a 2D adj vector
            //same as vector<vector<int> >adj(4,vector<int>(0,0));
            //same as  vector<int>adj[4];
            //loop work also same
            adj.clear();
            map<string,int> mp;
            mp["jitun"] = 100;
            mp["julan"] = 200;
               // show content:
            for (map<string,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
                    cout << it->first << " => " << it->second << '\n';
/*_____________________________unordered_Map___________________________*/

      unordered_map<string,string> u = {
          {"RED","#FF0000"},
          {"GREEN","#00FF00"},
          {"BLUE","#0000FF"}
      };
      for( const auto& n : u ) {
          std::cout << "Key:[" << n.first << "] Value:[" << n.second << "]\n";
      }

    return 0;
}
/*
graph>>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int a,b;
};
int main(){
    //vector<node>adj[100];
    vector<vector<node> > adj(100,vector<node>(0));
    int t,n,u,v,w;
    cin>>t>>n;
    for(int i=0;i<n;i++){
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    adj.assign(100,vector<node>(0,{0,0}));



    return 0;
}


*/
/*
int myint[]={16,2,77,29};
vector<int>v6(myint,myint+sizeof(myint)/sizeof(int));//copy myint array
*/

