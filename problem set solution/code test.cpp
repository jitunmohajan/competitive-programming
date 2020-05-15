#include<bits/stdc++.h>
using namespace std;
int main(){

    //freopen("input.txt","r",stdin);
    //freopen("outpur.txt","w",stdout);
    int b,y,g,cc=0;
    while(cin>>b>>y>>g){
        if(b<=g||y<=g)
            cc=min(b,y);
        else{
            cc+=g;
            b-=g;
            y-=g;
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>cc="<<cc<<"  b="<<b<<"  y="<<y<<endl;
            while(b>=2&&y>=2){
                b-=3;
                y-=3;
                cc+=2;

            }
        }
        cout<<cc<<endl;
    }


    return 0;
}
//new main function that can be change in different way 
//make this static 
/*
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    while(cin>>a>>b>>c){
        if(a>b)swap(a,b);
        b-=a;
        if(b>c)b=c;
        cout<<a+(b+c)/2;
        //new main function that should be in static so make it fasrt
    }
    
    return 0;

}
*/