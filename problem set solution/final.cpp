#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int blue,yellow,green,mn,akon;
    cout<<"test";
    while(cin>>blue>>yellow>>green){
        mn=min(blue,min(yellow,green));
        blue-=mn;
        yellow-=mn;
        cout<<"blue="<<blue<<"   "<<"yellow="<<yellow<<endl;
        cout<<">>>>>>>>>>>>>>>"<<mn<<endl;
        while(blue>1&&yellow>1){
           if(blue>2&&yellow>2)
                blue-=3,yellow-=3,mn+=2;
            else
                blue--,yellow--,mn++;

            cout<<"blue="<<blue<<"              =______=            -_-       -_- "<<"yellow="<<yellow<<endl;
            cout<<">>>>>>>>>>>>>>>"<<mn<<endl;
        }

        /*
            a b c
            cc=a/3
            ccc=b/3
            cc=min(cc,ccc);
            if(a%3==2&&b%3==2)
                cc++;s
        
        new line can be executed on the first line that can be changeble 
        best to executed this line on the basis of header fucntion
        so it can be new function
        
        */
        cout<<"total page print="<<mn<<endl;

    }
    return 0;
}
