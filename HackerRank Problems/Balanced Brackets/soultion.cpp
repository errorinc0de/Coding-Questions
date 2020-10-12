// in this function i am checking if the brackets are balanced or not..if they are opeiing bracket i am pushing them in stack else if they are closing bracket i am poping top most element . at last if stack is empty print yes else no

#include <bits/stdc++.h>

using namespace std;


// isBalaced function to check
// Complete the isBalanced function below.
string isBalanced(string s) {

    stack<int>ss; //using stack

// iterate over every element
    for (int i = 0; i < s.length(); i++) {
        //if it is opening bracket then push
        if (s[i] == '{' || s[i] == '(' || s[i] == '[' ) {
            ss.push(s[i]);
        }
        else {
            // if empty print no
            if (ss.empty()) return ("NO");
            else {
                // if closing bracket pop
                if (s[i] == ')' && ss.top() == '(') ss.pop();
                else if (s[i] == '}' && ss.top() == '{') ss.pop();
                else if (s[i] == ']' && ss.top() == '[') ss.pop();
                else return ("NO");
            }
        }
    }
// if empty print yes else no
    if (ss.empty()) return ("YES");
    return ("NO");
}


// main function to take input and print the output1
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
