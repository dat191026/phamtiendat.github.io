#include <iostream>
#include <string>
#include <stack> // Thư viện hỗ trợ cho chuyển đổi hậu tố
using namespace std;

// Node trong danh sách liên kết
struct Node {
    int data;
    Node* next;
};

// Stack bằng danh sách liên kết
class LinkedStack {
private:
    Node* top;

public:
    LinkedStack() {
        top = nullptr;
    }

    ~LinkedStack() {
        while (!isEmpty()) {
            pop();
        }
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Giá trị lỗi
        }
        Node* temp = top;
        int poppedValue = top->data;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }
};
void changeBase(int n, int base) {
    LinkedStack stack;

    while (n > 0) {
        stack.push(n % base);
        n /= base;
    }

    cout << "Biểu diễn của số trong cơ số " << base << " là: ";
    while (!stack.isEmpty()) {
        cout << stack.pop();
    }
    cout << endl;
}
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> operators;
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c; // Nếu là toán hạng thì thêm vào hậu tố
        }
        else if (c == '(') {
            operators.push(c);
        }
        else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Bỏ dấu '('
        }
        else { // Nếu là toán tử
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}
int main() {
    // Tạo stack
    LinkedStack stack;

    // Đẩy một vài giá trị
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Giá trị đỉnh ngăn xếp: " << stack.peek() << endl;

    // Lấy ra một phần tử
    cout << "Phần tử được lấy ra: " << stack.pop() << endl;

    // Đổi số thập phân sang cơ số 2
    int number = 13;
    int base = 2;
    changeBase(number, base);

    // Chuyển đổi biểu thức
    string infix = "A+B*(C-D)";
    string postfix = infixToPostfix(infix);
    cout << "Biểu thức hậu tố: " << postfix << endl;

    return 0;
}
