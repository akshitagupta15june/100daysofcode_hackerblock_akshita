
#include<iostream>
#include<string.h>
#include<algorithm>
#include<utility>
using namespace std;

string extractStringAtKey(string str,int key){
    char* strAtKey = strtok((char*)str.c_str()," ");
    while(key>1){
        strAtKey = strtok(NULL," ");
        key--;
    }
    return (string)strAtKey;
}

int convertToInt(string str){
    int num=0;
    int mulFactor=1;
    for (int i = str.length()-1; i >=0; i--) {
        num+= ((str[i]-'0')*mulFactor);
        mulFactor*=10;
    }
    return num;
}

bool numericComparator(string str1,string str2){
    int num1 = convertToInt(str1);
    int num2 = convertToInt(str2);

    return num1<num2;
}

int main() {
    int n;
    std::cin >> n;
    cin>>ws; //clears the input buffer

    string unsorted_s[n];
    for (int i = 0; i < n; i++) {
        getline(cin,unsorted_s[i]);
    }
    cin>>ws;

    int key;
    string reversal,ordering;
    std::cin >> key >> reversal>>ordering;

    string strAtKey[n];

    pair<string,string> strPair[n];
    for (int i = 0; i < n; i++) {
        strAtKey[i] = extractStringAtKey(unsorted_s[i],key);
        strPair[i].first = unsorted_s[i];
        strPair[i].second =  strAtKey[i];
    }

    if(ordering=="numeric"){
        sort(strAtKey,strAtKey+n,numericComparator);
    } else{
        sort(strAtKey,strAtKey+n);
    }
    if(reversal=="true"){
        for (int i = 0; i < n/2; i++) {
            string temp = strAtKey[n-i-1];
            strAtKey[n-i-1] = strAtKey[i];
            strAtKey[i]=temp;
        }  
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(strPair[j].second==strAtKey[i]){
                std::cout << strPair[j].first << std::endl;
                break;
            }
        }
    }
    return 0;
}

