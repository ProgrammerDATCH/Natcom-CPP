#include<iostream>
using namespace std;
int main(){
	string sentence;
	cout<<"Enter any sentence: ";
	cin>>sentence;
	int count = 0;
	for(int i=0; i<sentence.length(); i++){
		char vowel = tolower(sentence[i]);
		if(vowel == 'i' || vowel == 'u' || vowel == 'o' || vowel == 'a' || vowel == 'e'  ){
			count++;
		}
	}
	cout<<"Vowels found are "<<count;
	return 0;
}
