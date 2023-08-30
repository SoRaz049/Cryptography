#include <iostream>
using namespace std;

string upperlower(int ch, char check)
{
    string cypher="";

    if((ch) < check)
        cypher+= ch + 26 ;


    else
        cypher+=ch;

    return cypher;
}

string decrpyt(string message, int key)
{
    int i,message_int;
    string cypher;

    for(i=0;i<message.length();i++)
    {
        message_int = message[i];

        if(message_int>=97 && message_int<=122)
            cypher+=upperlower(message_int-key,'a');

        else if(message_int>=65 && message_int<=90)
            cypher+=upperlower(message_int-key,'A');
    }
    return cypher;
}

int main()
{
    string message;
    int key;
    cout<<"Enter the message to decrypt: ";
    cin>>message;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<endl;
    cout<<"The plain text for the message '"<<message<<"' is: "<<endl<<decrpyt(message,key);
    cout<<endl;
}
