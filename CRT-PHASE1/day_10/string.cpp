#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str1 = "hello";
    string str2 = "jecrc";
    cout<<str1<<" "<<str2<<endl;

    //method of string

    //length of string
    int n = str1.length();
    cout<<"length of string is : "<<n<<endl;
   
    //append
    cout<<"after append : "<<str1.append(" students")<<endl;
   
    //empty
    cout<<"is string empty : "<<str1.empty()<<endl;
   
    //concatenate
    cout<<"after concatenate : "<<str1 + "bachho"<<endl;
    cout<<"after concatenate of string is 2  : "<<str1<<endl;
   
    //push_back() method
    str2.push_back('u');
    cout<<"after push back : "<<str2<<endl;
    //pop_back() method
    str2.pop_back();
    cout<<"after pop back : "<<str2<<endl;
    
    //find() method
    int index = str1.find("ello");
    cout<<"index of ello is : "<<index<<endl;

    //swap() method
    str1.swap(str2);
    cout<<"after swapping of str1 and str2 : "<<endl;
    cout<<"str1 : "<<str1<<endl;  // jecrc
    cout<<"str2 : "<<str2<<endl;  // hellostudents

    //substr() method
    string substr = str2.substr(5,6); // 5 is the index number and 6 is the length of substring
    cout<<"substring of str2 from index 5 with length 6 is : "<<substr<<endl;

    //getline() method
    string str3;
    //cin>>str3;
    getline(cin, str3);
    cout<<"the string you entered is : "<<str3<<endl;
    return 0;

}

