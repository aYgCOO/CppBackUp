//"Hello","Bonjour","Hola","Konnichiwa","Ni hao","Salam".
//You think that you make an AI programm , and your AI meet defferent peopel from many other contry.
//When someone meet your AI , at first your AI's responce is 'Hello'.
//So, make an AI that can return you defferent types of 'Hellow' using defferent languages.

#include<iostream>
using namespace std;
int main()
{
    cout<<"AI return -Hellow- with using defferent languages..."<<endl;

    char ai;
    cout<<" 1-ENGLISH \n 2-FRENCH \n 3-SPANISH \n 4-JAPANESE \n 5-CHINESE \n 6-ARABIC \n Choice your language: ";
    cin>>ai;
    
    switch (ai)
    {
    case '1':
        cout<<"In ENGLISH -> '_Hello_' ";
        break;
    case '2':
        cout<<"In FRENCH -> '_Bonjour_' ";
        break;
    case '3':
        cout<<"In SPANISH -> '_Hola_' ";
        break;
    case '4':
        cout<<"In JAPANESE -> '_Konnichiwa_' ";
        break;
    case '5':
        cout<<"In CHINESE -> '_Ni Hao_' ";
        break;
    case '6':
        cout<<"In ARABIC -> '_Salam_' ";
        break;    
    
    default:
        cout<<"Error! 'Still learning'-> :-) ";

        break;
    }
    
    return 0;
}
