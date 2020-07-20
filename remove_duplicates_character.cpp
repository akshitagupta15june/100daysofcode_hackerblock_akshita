#include<bits/stdc++.h>

using namespace std;

int removeduplicate(char a[], char b[], int lengthofstring) {
  int j = 1;
  int count = 0;
  char temp;
  b[0] = a[0];

  for (int i = 0; i < lengthofstring; i++) {
    if (b[j - 1] != a[i]) {
      b[j] = a[i];
      j++;
      count++;
    }

  }
  return count + 1;
}

int main() {
  char a[100];

  cin.getline(a, 90);
  int len = strlen(a);
  char b[100];

  int countofstring = removeduplicate(a, b, len);

  for (int i = 0; i < countofstring; i++) {
    cout << b[i];
  }
}
