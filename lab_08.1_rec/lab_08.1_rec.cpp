#include <iostream>

using namespace std;

int Count(char* str, int i) {
	if (strlen(str) < 5 || i > strlen(str) - 5) {
		return 0;
	}

	if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e') {
		return 1 + Count(str, i + 5);
	}

	else {
		return Count(str, i + 1);
	}
}

char* Change(char* dest, const char* str, int i, int index) {
	if (i > strlen(str)) {
		dest[index] = '\0';
		return dest;
	}

	if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e'){
		dest[index++] = '*';
		dest[index++] = '*';
		return Change(dest, str, i + 5, index);
	}

	else {
		dest[index++] = str[i];
		return Change(dest, str, i + 1, index);
	}
}

int main(){
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	cout << "Counter = " << Count(str, 0) << endl;

	char* dest1 = new char[101 - (Count(str,0) * 2)];
	Change(dest1, str, 0, 0);

	cout << "Result = " << dest1 << endl;

	delete[] dest1;
}