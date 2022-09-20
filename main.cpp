#include <iostream>

using namespace std;

int main(){
    char c;
    bool smallVowel, bigVowel;
    cout<<"Enter an alphabet: ";
    cin>>c;
    smallVowel = (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
    bigVowel = (c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
    if(!isalpha(c)){
        cout<<"Invalid character!!!";
    }
    else if(smallVowel || bigVowel){
        cout<<"The letter is a vowel";
    }
    else{
        cout<<"The letter is a consonant";
    }
    cout<<endl;
}