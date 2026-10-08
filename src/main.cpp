/*Use stacks C++ with the library of evaluating an infix expression using the logic:

a+ b* c
that uses a operator stack and operand stack

two options of a stack top
first element to be off an array
last element as the top of stack is push() and pop()
add remove to and from the end
ensure array lsit
for implementation to avoid expensive array.


*/



#include <iostream>
#include <stack>
using namespace std;

int main() {

    int a = 2, b = 3, c = 4;
    stack<int> operands;
    stack<char> operators;

    operands.push(a);
    operators.push('+');
    operands.push(b);
    operators.push('*');
    operands.push(c);

    int right = operands.top(); operands.pop();
    int left  = operands.top(); operands.pop();
    int mult  = left * right;
    operands.push(mult);

    right = operands.top(); operands.pop();
    left  = operands.top(); operands.pop();
    int sum = left + right;

    cout << "Result of a + b * c = " << sum << endl;

    return 0;
}
