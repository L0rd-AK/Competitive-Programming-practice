#include <bits/stdc++.h>
using namespace std;

int countRepetitiveSubstrings(string str) {
  vector<int> repetitions(26, 0);

  for (char c : str) {
    repetitions[c - 'a']++;
  }

  int count = 0;
  for (int i = 0; i < 26; i++) {
    if (repetitions[i] > 0) {
      count += repetitions[i] * (repetitions[i] + 1) / 2;
    }
  }

  return count;
}

int main() {
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  string str = "ssskkyskkkky";

  int count = countRepetitiveSubstrings(str);

  cout << "The number of non-empty substrings that are repetitions of one character is: " << count << endl;

  return 0;
}
