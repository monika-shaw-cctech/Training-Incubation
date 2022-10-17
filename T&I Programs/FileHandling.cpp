#include <iostream>
#include <fstream>
#include <vector>
/*
* Read user input file:
* count the following
* number of characters in the file
* number of whitespaces
* number of words in the file
* number of words starting with each vowels in the file
* number of occurance of a user defined string in the text in the file
* number of punctuation marks in the file.
*/




int main()
{
    std::ifstream fin;
    std::string line;

    int noOfCharacters{ 0 };
    int noOfWhiteSpaces{ 0 };
    int wordsCount{ 0 };
    int totalVowels{ 0 };
    int countA{ 0 };
    int countE{ 0 };
    int countI{ 0 };
    int countO{ 0 };
    int countU{ 0 };
    int noOfPunctuation{ 0 };
    int noOfUserDefinedString{ 0 };
    std::string word{ "" };



    fin.open("C:\\Projects\\Training&Incubation\\T&I Programs\\countFile.txt");



    fin.seekg(0, std::ios::beg);



    std::string str{ "" };
    std::cout << "Enter word to find it's number of occurance in the file : ";
    std::cin >> str;



    while (fin >> word)
    {
        wordsCount++;



        if (word[0] == 'a' || word[0] == 'A')
        {
            countA++;
            totalVowels++;
        }
        else if (word[0] == 'e' || word[0] == 'E')
        {
            countE++;
            totalVowels++;
        }
        else if (word[0] == 'i' || word[0] == 'I')
        {
            countI++;
            totalVowels++;
        }
        else if (word[0] == 'o' || word[0] == 'O')
        {
            countO++;
            totalVowels++;
        }
        else if (word[0] == 'u' || word[0] == 'U')
        {
            countU++;
            totalVowels++;
        }



        if (word == str)
        {
            noOfUserDefinedString++;
        }

    }

    char ch;
    fin.clear();

    fin.seekg(0, std::ios::beg);

    while (fin)
    {
        fin.get(ch);



        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            noOfCharacters++;
        }



        if (ch == '!' || ch == ',' || ch == '.' || ch == '?' || ch == ';'
            || ch == '-' || ch == ':' || ch == '@' || ch == '[' || ch == ']' || ch == '{' || ch == '}')
        {
            noOfPunctuation++;
        }



        if (ch == '\t' || ch == ' ' || ch == '\n')
        {
            if (ch == ' ')
            {
                noOfWhiteSpaces++;
            }
            else if (ch == '\n')
            {
                noOfWhiteSpaces += 2;
            }
            else
            {
                noOfWhiteSpaces += 4;
            }
        }
    }

    std::cout << "Characters in the file : " << noOfCharacters << std::endl;
    std::cout << "White spaces in the file : " << noOfWhiteSpaces << std::endl;
    std::cout << "Number of words in the file : " << wordsCount << std::endl;
    std::cout << "Number of words starting with vowels in the file : " << totalVowels << std::endl;
    std::cout << "Number of words starting with vowel a or A in the file : " << countA << std::endl;
    std::cout << "Number of words starting with vowel e or E in the file : " << countE << std::endl;
    std::cout << "Number of words starting with vowel i or I in the file : " << countI << std::endl;
    std::cout << "Number of words starting with vowel o or O in the file : " << countO << std::endl;
    std::cout << "Number of words starting with vowel u or U in the file : " << countU << std::endl;
    std::cout << "Number of occurances of user defined words in the file : " << noOfUserDefinedString << std::endl;
    std::cout << "Number of punctuation marks in the file : " << noOfPunctuation << std::endl;



    fin.close();
}