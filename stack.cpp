#include <iostream>
#include <stack>
#include <cctype>
#include <cmath>
using namespace std;

const int MAX_VARIABLES = 26;

int variables[MAX_VARIABLES] = {0};

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int evaluatePostfix(string exp) {
    stack<int> st;

    for (int i = 0; i < exp.size(); ++i) {
        char currentChar = exp[i];

        if (isdigit(currentChar)) {
            int operand = currentChar - '0';
            st.push(operand);
        } else if (isalpha(currentChar)) {
            int variableValue = variables[currentChar - 'A'];
            st.push(variableValue);
        } else {
            switch (currentChar) {
                case '+': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 + val1);
                    break;
                }
                case '-': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 - val1);
                    break;
                }
                case '*': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 * val1);
                    break;
                }
                case '/': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 / val1);
                    break;
                }
                case '%': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 % val1);
                    break;
                }
                case '^': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(pow(val2, val1));
                    break;
                }
                case '=': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 == val1);
                    break;
                }
                case '!': {
                    int val = st.top();
                    st.pop();
                    st.push(factorial(val));
                    break;
                }
                // Custom operator symbols that I created by playing around with the values and operators
                case '@': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 * 2 + val1);
                    break;
                }
                case '#': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 - val1 * 3);
                    break;
                }
                case '&': {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.pop();
                    st.push(val2 + val1 / 2);
                    break;
                }
            }
        }
    }

    return st.top();
}

int main() {
    string exp;
    cout << "Enter postfix expression: ";
    cin >> exp;

    for (char &c : exp) {
        if (isalpha(c)) {
            cout << "Enter value for variable " << c << ": ";
            cin >> variables[c - 'A'];
        }
    }

    cout << "Postfix evaluation: " << evaluatePostfix(exp) << endl;
    return 0;
}
