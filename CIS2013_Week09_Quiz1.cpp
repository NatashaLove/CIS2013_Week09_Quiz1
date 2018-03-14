#include <iostream>
#include <fstream>

using namespace std;
int main () {
	ifstream file;
	
	file.open ("info.dat"); 
	if(file.fail()) {
		cout << "Something went wrong with the file. " << endl;
		exit(1);
}
	
	
	
	
	
	return 0;
}