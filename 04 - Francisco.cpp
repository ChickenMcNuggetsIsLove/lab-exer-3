#include <iostream>
using namespace std;
int main(){
	char letter1;
	char letter2;
	char letter3;
	int x;
	int value;
	cout << "Enter two characters: " << endl;
	cin >> letter1;
	cin >> letter2;
	x = int(letter2) - int(letter1);
	value = int(letter1) + 1;
	for (int loop = x; loop != 1; loop--){
		letter3 = char(value);
		value = value + 1;
		cout << letter3 << " ";
	}
	system("PAUSE");
}
