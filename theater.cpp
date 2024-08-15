#include <string>
#include <iostream>

using namespace std;



int main(){

	string brightness = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\|()1{}[]?-_+~<>i!lI;:,\"^`'."
	// create an array, split the brightness string into each character. honestly don't wanna do this right now LOL


	for(int i = 0; i < 10; i++){
		cout << "\033[31;44mbold red text\033[0m\n";
	}
	
	return 0;
}
