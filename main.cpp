#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> listFromString(string);

int main()
{
    string input;
    vector <string> inventory;

    cout<<"What's in the store (separate items by commas)? ";
    getline(cin,input);

    inventory = listFromString(input); //TODO: Write this function!

    cout<<inventory.size()<<" items in inventory.\n";
    for(int i=0; i<inventory.size(); i++)
    {
        cout<<inventory.at(i)<<endl;
    }

    return 0;
}

vector <string> listFromString(string word)
{
    vector <string> list;
    string currentWord = "";
    for(int i = 0; i < word.size(); i++)
    {
       if(word.at(i) == ',')
       { 
         list.push_back(currentWord);
         currentWord = "";
       }
       else {
        currentWord.append(1, word.at(i));
       }
    }
    list.push_back(currentWord);

    return list;
}
           
