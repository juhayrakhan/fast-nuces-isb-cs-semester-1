// Write a program in C++ and insert parentheses in the given Boolean expression to
// invert its output. The use of the NOT operator (!) is not allowed. You may use only one
// pair of parentheses ().

# include <iostream>
using namespace std;
int main(){
    
    
    bool result = (true || false) && false;
    // parenthesis added around true || false since "anything && false = false"
    cout << "Result: " << result << endl;
    
    
return 0;
}
