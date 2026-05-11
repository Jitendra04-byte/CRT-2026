#include<iostream>
#include<string>
using namespace std;

int main() {
    string s="NAMAN";
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
            
        if (!isalnum(s[left])) {
                left++;
        } 
            
        else if (!isalnum(s[right])) {
                right--;
        } 
            
            else {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
                }
                left++;
                right--;
            }
        }
        
        return true;
}