#include <bits/stdc++.h>

using namespace std;
//[a-z] maximum 26 alphabets
#define MAX_ALPHABT     26
vector<string> split_string(string);

typedef struct node{
    int cnt;
    struct node *nPtr;
}node_t;

/* Class: contacts_dir
	Implementing a trie data structure to store all
	the contact name.
    This data structure will find O(1) and add O(contact) 
*/
class contacts_dir{
    node_t alphbt[MAX_ALPHABT];
    public:
        contacts_dir();
        int add(string wd);
        int find(string prt);
};

//constructor
contacts_dir::contacts_dir(){
	
    for(int i=0; i<MAX_ALPHABT; i++){
        alphbt[i].cnt = 0;
    }
}
//add operation
int contacts_dir:: add(string wd){
    node_t *tmp_cts = alphbt;

    for(auto c=wd.begin(); c!=wd.end(); c++){
    i	//check for valid alpha
        if (*c < 97 || *c > 122){
            return 0;
        }
        tmp_cts = &tmp_cts[*c-97];
		// new entry
        if(0 == tmp_cts->cnt){
            tmp_cts->nPtr = new node_t[MAX_ALPHABT];
        }
        tmp_cts->cnt++;
        tmp_cts = tmp_cts->nPtr;
    }
    return 0;

}

// find operation
int contacts_dir:: find(string prt){
    node_t *tmp_cts = alphbt;
    int cnt = 0;

    for(auto c=prt.begin(); c!=prt.end(); c++){
        //check for valid alphabet
        if (*c < 97 || *c > 122){
            return 0;
        }
        tmp_cts = &tmp_cts[*c-97];
        if(0 == tmp_cts->cnt){
            return 0;
        }
        cnt = tmp_cts->cnt;
        tmp_cts = tmp_cts->nPtr;
    }
    return cnt;
}


// Hackerrank default code to take input call function for add/find operation
// and display result
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    contacts_dir Cts;

    for (int n_itr = 0; n_itr < n; n_itr++) {
        string opContact_temp;
        getline(cin, opContact_temp);

        vector<string> opContact = split_string(opContact_temp);

        string op = opContact[0];

        string contact = opContact[1];

        if("find" == op){
            cout<<Cts.find(contact)<<endl;
        } else if("add" == op){
            Cts.add(contact);
        }
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
            return x == y and x == ' ';
            });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

