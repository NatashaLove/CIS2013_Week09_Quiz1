#include <iostream>
#include <fstream>

using namespace std;
int main () {
	ifstream file;
	
	char A = 'A';
	char F = 'F';
	char a = 'a';
	char b = 'b';
	
	int total_count = 0;
	int A_count = 0;
	int F_count = 0;
	int a_count = 0;
	int b_count = 0;
	int x = 8806;
	
	char temp_buffer[x];
	
	
	file.open ("info.dat"); 
	if(file.fail()) {
		cout << "Something went wrong with the file. " << endl;
		exit(1);
}
	
	file >> temp_buffer;
	
	
	if (temp_buffer[x] == A)
			{
				A_count++;
				x++
				cout << endl;
			}
	if (temp_buffer[x] == F)
			{
				F_count++;
				x++
				cout << endl;
			}
			
	if	(temp_buffer[x] == a)
			{
				a_count++;
				x++
				cout << endl;
			}
			
	if (temp_buffer[x] == b)
			{
				b_count++;
				x++
				cout << endl;
			}	
		
	cout << "Total of 'A' is " << A_count << endl;
	cout << "Total of 'F' is " << F_count << endl;
	cout << "Total of 'a' is " << a_count << endl;
	cout << "Total of 'b' is " << b_count << endl;
	
	total_count = A_count+F_count+a_count+b_count;
	
	cout << "Total character count is equal to " << total_count<< endl;
	
	
	
	return 0;
}