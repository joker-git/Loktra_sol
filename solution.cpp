#include <iostream>
#include<string>
using namespace std;

string reverseHash(long num){                           //function to find reverse of hash
    string res = "",letters = "acdegilmnoprstuw";
    while(num>7){                                       //loop till number is greater than initial value of 37
        res = letters[num%37] + res;
        num = num/37;
    }
    
    return res;
}

int main() {
	long num = 930846109532517;                         //here num is the hash for which reverse is to be found
	string ans = reverseHash(num);                      //you can take it as an input using cin>>num;
	cout<<ans<<endl;
	return 0;
}
