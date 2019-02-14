#include<bits/stdc++.h>
using namespace std;

struct node
{
  node* next[27]={0};
  int ending=0;
}*root;

int insert(string s){

   node* curr=root;
   for(int i=0;i<s.length();i++)
      {
        int id=s[i]-'a';
        if(curr->next[id]==NULL)
           curr->next[id]=new node();
      curr=curr->next[id];
      }
   curr->ending=1;
}

bool search(string s){

  node* curr=root;
  for(int i=0;i<s.length();i++)
    {
     int id=s[i]-'a';
     if(curr->next[id]==NULL)
        return 0;
     curr=curr->next[id];
    }
 return curr->ending;

}
void del(node* curr)
{
    for (int i = 0; i < 26; i++)
        if (curr->next[i])
            del(curr->next[i]);

    delete (cur);
}
int main(){

root=new node();
string s;
int num_word;
cout<<"number of word:";
cin>>num_word;
for(int i=0;i<num_word;i++)
    cin>>s,insert(s);

int quary;
cout<<"number of quary:";
cin>>quary;
for(int i=0;i<quary;i++)
{
    cin>>s;
    if(search(s))cout<<"YES"<<endl;
    else          cout<<"NO"<<endl;

}

del(root);
  return 0;

}

