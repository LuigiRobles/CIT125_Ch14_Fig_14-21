// CIT125 Intro To C++ Luigi Robles
// 08-04-2020 Summer Term
// Ch.14 pg.549 Fig.14-21 letter writing program
// writes 10 letters (in uppercase)
// to a sequential access file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char letter = ' '; //declare and initialize variable

	ofstream outFile; //create output file object
	outFile.open("TryThis16.txt"); //open file for output

	if (outFile.is_open()) //checking if file was opened correctly
	{
		for (int x = 1; x < 11; x += 1)
		{
			cout << "Enter letter " << x << ": ";
			cin >> letter; //input for letter
			letter = toupper(letter);
			outFile << letter << endl; //save input letters to sequential access file
		}   //end for
		outFile.close();
	}
	else
		cout << "Can't open the TryThis16.txt file ."
			 << endl;
		//end if
		return 0;
}		//end of main function