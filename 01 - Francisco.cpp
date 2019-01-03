#include <iostream>
using namespace std;
int main(){
string character;
cout << "Please enter a character: ";
cin >> character;

for (int loop = 10; loop != 0; loop--){
	cout << character << " ";
}
cout << endl << "The entered character is looped 10 times!" << endl;
system ("PAUSE");
}
