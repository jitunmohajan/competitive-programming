
// C++ program to demonstrate various function string class
/*
string a;
for(int i=0;i<2;i++)
    cin>>a[i];
for(int i=0;i<2;i++)
cout<<a[i];

*/
/*
strcpy(b,strupr(a));
 if(strcmp(c,a)==1 && strcmp(c,b)==1)
  cout<<"YES";
*/
/*
int main(){
string a,b;
int n=0;

while(getline(cin,a)){
        //take a string input
    getline(cin,b);
if(a=="\0" && b=="\0")
    cout<<"a and b are blank line"<<endl;
if(a=="\0")
    cout<<"a is a blank line"<<endl;
if(b=="\0")
    cout<<"b is a blank line"<<endl;
}
    return 0;
}
*/
/*
int main(){

int t;
cin>>t;
getchar();//must use getchar if you take string input after this
//to skip enter as character
string s;
cin>>s;

return 0;
}

*/
/*
#include <bits/stdc++.h>
using namespace std;
int upper(char x) {  return toupper(x); }
int lower(char x) {  return tolower(x); }

int main()
{
    string a="asdajk";
    transform(a.begin(),a.end(),a.begin(),lower);
    cout << a<<endl;
    transform(a.begin(),a.end(),a.begin(),upper);
    cout << a;

    return 0;
}
*/
/*
//int to string
string to_string(int n){ //use long long int if you convert long long int to string
  stringstream ss;
  ss<<n;
  return ss.str();
}
//try to usw the to_string function
another method>>

string s;
int n=12344;
stringstream ss;
ss<<n;
s=ss.str();
cout<<s;

*/

#include <bits/stdc++.h>
using namespace std;
//all source from link>> https://www.geeksforgeeks.org/c-string-class-and-its-applications/
int main()
{ 
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a1="new",a2="man",a3;
    a3=a1+a2;//ans is>> "newman"
    printf("%s\n",a3.c_str());//print a3 string
    //getchar(); to skip null character
    /*
    while(next_permutation(a.begin(),a.end())){
        cout<<a3<<endl;
    }
    */
//covert int to string does not work on codeblocks
    int q=12345
    string s2=to_string(q);
    cout<<s2;

    string str12="new man style";
    std::size_t pos = str12.find("man");      // position of "live" in str
     cout<<pos<<endl;
   cout.width(10);//this means 10 space will print
   //step>>1 find int and from a string
    string a="45.456";
    int i=atoi(a.c_str());//this will return int value
    float j=atof(a.c_str());//this will return float value
    cout<<i<<"   ..............."<<j;
   //step 2>>find int from a string;
    string s="681426472648242746";//18 digit
    long long int x;
    stringstream(s)>>x;
    cout<<"convert a string into int number :"<<x<<endl;
    //    step 3>>
    string m="43";
    int n;
    sscanf(m.c_str(),"%d",&n);
    cout<<n<<endl;

    // various constructor of string class
    // initialization by raw string
    string str1("first string");

    // initialization by another string
    string str2(str1);
    //or str2=str1;

    // initialization by character with number of occurence
    string str3(5, '#');

    // initialization by part of another string
    string str4(str1, 6, 6); // from 6th index (second parameter)
                             // 6 characters (third parameter)

    // initialization by part of another string : iteartor version
    string str5(str2.begin(), str2.begin() + 5);

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;

    //  assignment operator
    string str6 = str4;

    // clear function deletes all character from string
    str4.clear();

    //  both size() and length() return length of string and
    //  they work as synonyms
    int len = str6.length(); // Same as "len = str6.size();"

    cout << "Length of string is : " << len << endl;

    // a particular character can be accessed using at /
    // [] operator
    char ch = str6.at(2); //  Same as "ch = str6[2];"


    cout << "third character of string is : " << ch << endl;

    //  front return first character and back returns last charcter
    //  of string


    // c_str returns null terminated char array version of string
    const char* charstr = str6.c_str();
    printf("%s\n", charstr);

    // append add the argument string at the end
    str6.append(" extension");
    //  same as str6 += " extension"

    // another version of appends, which appends part of other
    // string
    str4.append(str6, 0, 6);  // at 0th position 6 character

    cout << str6 << endl;
    cout << str4 << endl;

    //  find returns index where pattern is found.
    //  If pattern is not there it returns predefined
    //  constant npos whose value is -1

/*

    string a,b;

    while(cin>>a>>b){
//cout<<a.rfind(b)<<endl;//a="sam bmam am" it will select last am
    if(a.find(b)!=-1)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
    }

*/

    if (str6.find(str4) != string::npos)
        cout << "str4 found in str6 at " << str6.find(str4)
             << " pos" << endl;
    else
        cout << "str4 not found in str6" << endl;

    //  substr(a, b) function returns a substring of b length
    //  starting from index a
 cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
 cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
       /*
    string a="abcdefghijklmn";
    string b;
    b=a.substr(2,3);//here 2 is position from that 3 chracter will copy
    cout<<b<<endl;

       */

    cout << str6.substr(7, 3) << endl;
    string sss=str6.substr(7);
    //it will copy all char of string from position 7
    //  if second argument is not passed, string till end is
    // taken as substring
    cout << str6.substr(7) << endl;

    //  erase(a, b) deletes b character at index a
    str6.erase(7, 4);
    cout << str6 << endl;

    //  iterator version of erase
    str6.erase(str6.begin() + 5, str6.end() - 3);
    cout << str6 << endl;

    str6 = "This is a examples";

    //  replace(a, b, str)  replaces b character from a index by str
    str6.replace(2, 7, "ese are test");

    cout << str6 << endl;

    //it will sort according to dictionary
/*
     vector<string>a;
     string s;
    while(cin>>s){
   if(s==".")break;
    a.push_back(s);
   }
  sort(a.begin(),a.end());
  for(int i=a.begin();i<3;i++)//here it will not support a.length()
    cout<<a[i];
*/

   //reverse a string
    string arr="abcdef";
    reverse(arr.begin(),arr.end());
    cout<<arr;//it will print fedcba
    /*
    string s;
    cin >> s;
    string t(s.rbegin(), s.rend());//this will copy the string in reverse way
    cout << s << t << "\n";
    */
     /*
     string a="mohajan",b="jitun";
     a.swap(b);
     cout<<a<<" "<<b<<endl;

     */
    return 0;
}
/*
//>>>>>>>>>>>>>>>>...MAP>>>>>>>>>>>>>>>>>
string ss;
int in,n;
cin>>n;
map<string,int>mp;
while(n--){
    cin>>ss>>in;
    mp[ss]=in;
}
cout<<mp.size()<<endl;

*/

/*
int main ()
{
  std::string str1 ("green apple");
  std::string str2 ("red apple");

  if (str1.compare(str2) != 0)
    std::cout << str1 << " is not " << str2 << '\n';

  if (str1.compare(6,5,"apple") == 0)
    std::cout << "still, " << str1 << " is an apple\n";

  if (str2.compare(str2.size()-5,5,"apple") == 0)
    std::cout << "and " << str2 << " is also an apple\n";

  if (str1.compare(6,5,str2,4,5) == 0)
    std::cout << "therefore, both are apples\n";

  return 0;
}
*/
//all source from link>> https://www.geeksforgeeks.org/c-string-class-and-its-applications/
