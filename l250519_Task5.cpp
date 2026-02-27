////Asad Ali
////25L-0519
//
//# include <iostream>
//using namespace std;
//
//
//int main() {
//	int dummySize = 5, counter = 0;
//
//	char* sentence = new char[dummySize];
//	char ch;
//	cout << "Input Sentence: ";
//
//	while (cin.get(ch) && ch != '\n') {
//
//		if (counter >= dummySize) {
//			dummySize *= dummySize;
//			char* newarray = new char[dummySize];
//
//			for (int i = 0; i < counter; i++) {
//				*(newarray + i) = *(sentence + i);
//			}
//
//			delete[] sentence;
//			sentence = newarray;
//		}
//
//		*(sentence + counter) = ch;
//		counter++;
//	}
//
//	*(sentence + counter) = '\0';
//
//	int numOfChars = 0, numOfVowels = 0, numOfConsonants = 0;
//
//	char* ptrSentence = sentence;
//
//	while (*ptrSentence != '\0') {
//		numOfChars++;
//
//		char characterInSentence = *ptrSentence;
//		if ((characterInSentence >= 'a' && characterInSentence <= 'z') || (characterInSentence >= 'A' && characterInSentence <= 'Z')) {
//			if (characterInSentence == 'a' || characterInSentence == 'e' || characterInSentence == 'i' || characterInSentence == 'o' || characterInSentence == 'u' ||
//				characterInSentence == 'A' || characterInSentence == 'E' || characterInSentence == 'I' || characterInSentence == 'O' || characterInSentence == 'U') {
//				numOfVowels++;
//			}
//			else {
//				numOfConsonants++;
//			}
//		}
//		ptrSentence++;
//	}
//
//	cout << "No. of Characters are " << numOfChars << endl;
//	cout << "No. of Vowels are " << numOfVowels << endl;
//	cout << "No. of Consonants are " << numOfConsonants << endl;
//
//	delete[] sentence;
//
//	return 0;
//}
