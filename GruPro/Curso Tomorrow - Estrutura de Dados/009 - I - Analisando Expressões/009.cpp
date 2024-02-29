#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int i, amount_lines;
    long long unsigned int j;
    string line, char_swap;
    stack<string> left_stack, right_stack;

    cin >> amount_lines;
    cin.ignore();
    for (i = 0; i < amount_lines; i++){
        while (!(left_stack.empty()))
            left_stack.pop();
        while (!(right_stack.empty()))
            right_stack.pop();

        getline(cin, line);
        for ( j = 0; j < line.length(); j++){
            if (line.substr(j, 1) != " ")
                left_stack.push(line.substr(j, 1));
        }
        
        while (!(left_stack.empty())){
            if (!left_stack.empty() && !right_stack.empty() &&
                (   (left_stack.top() == "(" && right_stack.top() == ")") ||
                    (left_stack.top() == "{" && right_stack.top() == "}") ||
                    (left_stack.top() == "[" && right_stack.top() == "]") ||
                    (left_stack.top() == "<" && right_stack.top() == ">")   )
            ){
                left_stack.pop();
                right_stack.pop();
                // cout << "POP\n";
            } else if (!left_stack.empty()){
                char_swap = left_stack.top();
                left_stack.pop();
                right_stack.push(char_swap);
                // cout << "SWAP\n";
            }          
        }
        
        if (left_stack.empty() && right_stack.empty()){
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }

    return 0;
}