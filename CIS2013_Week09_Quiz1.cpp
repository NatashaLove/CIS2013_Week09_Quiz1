#include <iostream>
#include <fstream>

using namespace std;
int main () {
	
	ifstream file;
	
	// char A;//= 'A';
	// char F; //= 'F';
	// char a; // = 'a';
	// char b; //= 'b';
	
	int total_count = 0;
	int A_count = 0;
	int F_count = 0;
	int a_count = 0;
	int b_count = 0;
	int x=0;
	char item;
	int total=0;
	
	file.open ("info.dat"); 
	
	if(file.fail()) {
		cout << "Something went wrong with the file. " << endl;
		exit(1);
}

// program will take ONE character in order at a time (a char from file >> char item);
// Program runs through every character in order and incrementing automatically
						
			// file >> item;		
			// cout << " Item 1 is " << item<< endl;
			
			// file >> item;
			// cout << " Item 2 is "  << item << endl;
			
			// file >> item;
			
			// cout << "Item 3 is " << item << endl;
			
		
		//Instead of for-loop may use while-loop:
		
		//for (int i=0; i<=8806; i++) 
		// while program runs through every character in the file - the body executes; the while-loop stops automatically when hits the end of the file.
	
		while (file>>item){
			
		//if I want every other character from the file - 
		// put  file >> item - again;
		
			if (item=='A') {
				A_count++;
				
				}
				else if (item=='F') {
				F_count++;
				
				}
				else if (item=='a') {
				a_count++;
				
				}
				else if (item=='b') {
				b_count++;
				
				}
				total++;
		}
				
			
	cout << "Total of 'A' is " << A_count << endl;
	cout << "Total of 'F' is " << F_count << endl;
	cout << "Total of 'a' is " << a_count << endl;
	cout << "Total of 'b' is " << b_count << endl;
	
	total_count = A_count+F_count+a_count+b_count;
	
	cout << "Their sum is equal to " << total_count << endl;
	cout << "Total amount of characters is " << total << endl;
	
	file.close ();
	
	return 0;
}