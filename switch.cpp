#include <iostream>
using namespace std;
int main ()
{
    char a ;
    cout<< " enter a alphbate ";
    cin>> a;

    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<a<<" is a vowel"<<endl;

        break;
    
    default:
    cout<<a<<" this is not vowel"<<endl;
        break;
    }
    return 0;
}