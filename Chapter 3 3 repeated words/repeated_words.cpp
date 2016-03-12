#include "std_lib_facilities.h"

int main()
{
	int numberOfWords = 0;
	string previous = " ", current;
	while (cin >> current){
		++numberOfWords;
		if (previous == current) cout << "Repeated word is " << current << " (number " << numberOfWords << ")\n";
		previous = current;
	}

	keep_window_open();
	return 0;
}