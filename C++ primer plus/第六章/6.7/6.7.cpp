#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string word;
    int vowel = 0;
    int consonant = 0;
    int others = 0;
	cout << "Enter words(q to quit):";
	cin >> word;
	while (word != "q")
	{
        if (isalpha(word[0]))//Char用‘’,string用" "
        {
            switch (word[0])
            {
            case 'a':
            case 'A':vowel++; break;
            case 'e':
            case 'E':vowel++; break;
            case 'i':
            case 'I':vowel++; break;
            case 'o':
            case 'O':vowel++; break;
            case 'u':
            case 'U':vowel++; break;
            default:consonant++;
            }
        }
        else
            others++;
        cin >> word;
	}
    cout << vowel << " words beginning with vowels\n" << consonant
        << " words beginning with consonants\n" << others << " others\n";

    return 0;

}