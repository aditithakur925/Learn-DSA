#include <iostream>
using namespace std;
int lengthOfLastWord(string s) {
    int n=s.size();
    int count = 0;
    for(int i=n-1; i>=0;i--)
    {
        if(s[i]==' '&&  count==0)
        {
            continue;
        }
        if(s[i]==' ')
        {
            break;
        }
        count += 1;
    }
    return count;
}
int main() {
    int result = lengthOfLastWord("Pain is Gain  ");
    cout<<"Length of last word:"<<result;
    return 0;
}
