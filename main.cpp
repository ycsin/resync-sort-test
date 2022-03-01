#include <bits/stdc++.h>

using namespace std;

#define CONST_STRING                                                           \
  "print happy against monkey need different effect sheep paper horse "        \
  "parallel journey kind account opinion lock knowledge look weather join "    \
  "market space married who nerve responsible payment again while rhythm "     \
  "prison opposite special why authority rest school operation river year "    \
  "shake than shame push when question road waiting Zoo respect that ring "    \
  "then very theory water tomorrow wheel umbrella the view walk twist unit "   \
  "voice waste together week weight yesterday tooth you young Zibra will "     \
  "yellow brain verse Xray cloud adjustment between where connection branch "  \
  "care needle about with addition cart button control desire Xman cloth "     \
  "balance"
#define CONST_STRING_SIZE sizeof(CONST_STRING)
#define CONST_STRING_LEN strlen(CONST_STRING)

/* Function to print the array */
void printSortedWords(vector<string> names) {
  printf("\n\nSorted words:\n");

  for (int i = 0; i < names.size(); i++) {
    cout << names[i] << endl;
  }

  printf("\n\n");
}

/* Compare the first char of word regardless of capitalization */
bool comparator(string a, string b) {
  if (a[0] < 'a') {
    a[0] += ('a' - 'A');
  }

  if (b[0] < 'a') {
    b[0] += ('a' - 'A');
  }

  return a < b;
}

/* Sort vector of words alphabetically */
vector<string> sortAlphabetically(vector<string> str) {
  sort(str.begin(), str.end(), comparator);
  return str;
}

/* String delimiter */
vector<string> split(string s, string delimiter) {
  size_t pos_start = 0, pos_end, delim_len = delimiter.length();
  string token;
  vector<string> res;

  while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
    token = s.substr(pos_start, pos_end - pos_start);
    pos_start = pos_end + delim_len;
    res.push_back(token);
  }

  res.push_back(s.substr(pos_start));
  return res;
}

int main() {
  const char const_string[CONST_STRING_SIZE] = CONST_STRING;
  char input_string[CONST_STRING_SIZE];

  printf("Enter string:\n");
  /* Limit length to CONST_STRING_LEN */
  fgets(input_string, CONST_STRING_SIZE, stdin);

  /* Check if input string matches the target string */
  if (strncmp(const_string, input_string, CONST_STRING_LEN) != 0) {
    printf("\nInput string error\n");
    return 0;
  }

  /* Split by ' ' */
  vector<string> words = split(input_string, " ");

  /* Sort */
  words = sortAlphabetically(words);

  /* Print result */
  printSortedWords(words);

  return 0;
}
