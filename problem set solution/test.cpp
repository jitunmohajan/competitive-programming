#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int b,g,y;
    while(cin>>b>>g>>y){
        int cc=0;
        if(b<=y||g<=y)
            cc=min(b,g);
        else{
            cc+=y; 
            b-=y;
            g-=y;
            b=min(b,g);
           // cout<<"b>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<b<<endl;
            g=b/3;
           // cout<<"g>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<g<<endl;
            if(b==2)cc++;
            else    cc+=(g*2);
           // cout<<"cc>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<cc<<endl;
            //cc+=y,b-=y,g-=y,b=min(b,g),g=b/3,cc+=(g*2);
        }
        
        cout<<cc<<endl;

    }
}



/*

new main function that can be change in different way so dont miss it 
make it fast  so try to skip this prototype 
this is 
what is class?
>>class is like a pakage 
new main function that can be change in different way so make it 
static 
cout<<"new main fucntion that can be changable ok"<<endl;
new mian function that can be change in different way so that you have to make this faster than you 
can 
128 2 1
128+2+1


1 ->1 b 1 y
1
2


*/