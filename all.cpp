/* Logging my c++ learning progress
with this main file */

// First program

#include <iostream>

using namespace std;

int main(){
    cout<< "hello\n\nbasic 2 line "<<endl;
}

// Second program (add 2 numbers)

#include <iostream>

using namespace std;

int main(){
    int x,y;
    cout<<"\n Program to find sum of 2 numbers\n";
    cout<<"\n Enter a number: "; cin>>x;
    cout<< "Enter 2nd number: "; cin>>y;
    cout<<"Sum is: "<<x+y;
}

// Third program (Quotient and remainder)
#include <iostream>

using namespace std;

int main(){
    int x,y;
    cout<<"Enter a dividend: ";
    cin>>x;
    cout<<"Enter a divisor: ";
    cin>>y;
    cout<<"The quotient is: "<<x/y<<endl;
    cout<<"The remainder is: "<<x%y<<endl;

}


// Fourth program (odd/even)
#include <iostream>

using namespace std;

int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   if(n%2==0){
       cout<<"Number is even";
   }
   else{
        cout<<"number is odd";
   }
   
}

// 5th program (check vowel or consonant)
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
}





