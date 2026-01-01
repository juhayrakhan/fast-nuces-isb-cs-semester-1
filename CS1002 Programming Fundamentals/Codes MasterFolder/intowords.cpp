#include <iostream>
using namespace std;

// Function Prototypes
void breakSentenceIntoWords(char* sentence, char**& words, int& wordCount);
char* findLongestWord(char** words, int wordCount);
int calculateTotalLength(char** words, int wordCount);
void deleteWordArray(char** words, int wordCount);

int main() {
    const int MAX_LENGTH = 256;
    char sentence[MAX_LENGTH];
    // Input: Read a sentence from the user
    cout << "Enter a sentence (max 256 characters): ";
    cin.getline(sentence, MAX_LENGTH);

    // Variables for dynamically storing words
    char** words = nullptr;
    int wordCount = 0;

    // Task 1: Break sentence into words
    breakSentenceIntoWords(sentence, words, wordCount);

    for(int i=0;i<wordCount;i++)cout << words[i]<<endl;

    // Task 2: Find and print the longest word
    cout << findLongestWord(words, wordCount)<<endl;

    // Task 3: Calculate and print the total length (excluding spaces)
    int totalLength = calculateTotalLength(words, wordCount);

    cout << "Total length of the sentence (excluding spaces): " << totalLength << endl;
    // Task 4: Delete dynamically allocated memory

    deleteWordArray(words, wordCount);
    return 0;
}
// --- STUDENT CODE GOES HERE ---
// Task 1: Break the sentence into words and store in a dynamically created 2D array [15 marks]
void breakSentenceIntoWords(char* sentence, char**& words, int& wordCount) {
    wordCount=1;
    for (int i = 1; sentence[i] != '\0'; i++) {
        if ((sentence[i] != ' ' && sentence[i - 1] == ' '))
            wordCount++;
    }
    words = new char*[wordCount];

    int p = 0,  wordp = 0;
    while (sentence[p] != '\0') {
        if (sentence[p] == ' ') p++;
        if (sentence[p] == '\0') break;

        int start = p, wordlen = 0;

        while (sentence[p] != ' ' && sentence[p] != '\0') {
            wordlen++; p++;
        }
        words[wordp] = new char[wordlen + 1];
        for (int i = 0; i < wordlen; i++)
            words[wordp][i] = sentence[start + i];
        words[wordp][wordlen] = '\0';
        wordp++;
    }
}

// Function to find the longest word in the array
char* findLongestWord(char** words, int wordCount) {
    int longest=0, word=0;
    for(int i=0;i<wordCount;i++){
        int j=0;
        while(words[i][j]!='\0') j++;
        if(longest<j){
            word=i;longest=j;
        }
    }
    return words[word];
    
}
// Function to calculate the total length of the sentence (excluding spaces)
int calculateTotalLength(char** words, int wordCount) {
    int count=0;
    for(int i=0;i<wordCount;i++){
        int j=0;
        while(words[i][j]!='\0') j++;
        count+=j;
    }
    return count;
}
// Task 4: Delete dynamically allocated memory for the words array [5 marks]
void deleteWordArray(char** words, int wordCount) {
    for(int i=0;i<wordCount;i++){
        delete[] words[i];
    }
    delete[] words;
    words=nullptr;
}