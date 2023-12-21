#include"../Libs/RPN.hpp"

RPN::RPN(){
}
RPN::RPN(const RPN& copy){
    *this = copy;
}
void error_print(std::string error){
    std::cerr << "7ala chaba khoya 7bibi : " << error << std::endl;
}
RPN& RPN::operator=(const RPN& RPN){
    return *this;
}
RPN::~RPN(){
}

RPN::RPN(std::string RPN){
    this->_RPN = RPN;
    if (this->_RPN.find_first_not_of("0987654321+*/- ") != std::string::npos)
    error_print("WRONG!");
// std::stack<int>::iterator it = this->stack.begin();
    this->_RPN.erase(std::remove(this->_RPN.begin(), this->_RPN.end(), ' '), this->_RPN.end());
    // std::cout << this->_RPN << std::endl;
    // std::cout << this->_RPN.size() << std::endl;

}

void RPN::routine(){
op = false;
counter = 0;
// while (){
    // int counter = 0;
    for(int i = 0; i < _RPN.size(); i++){
        if (std::isdigit(this->_RPN[i]) && counter != 2){
            // std::cout << "-----" << std::endl;
            int num = static_cast<int>(this->_RPN[i]) - CALLIBRE;          
            if(op == false)
                this->stack.push(num);
            counter++;
        }
        else if (!std::isdigit(this->_RPN[i])){
            this->_operator = this->_RPN[i];
            operation();
        }
    }
    std::cout << stack.top() << std::endl;
// }
}

void RPN::operation(){
    op = true;
    std::cout << "size : " << stack.size() << std::endl;
    // int left, right;
    if (this->stack.size() < 2){
        // std::cout << "stack small" << std::endl;
        return;
    }
    else{
        if (this->_operator == "+"){
            int left = stack.top();
            std::cout << "a : " << left << std::endl;
            stack.pop();
            int right = stack.top();
            std::cout << "b : " << right << std::endl;
            stack.pop();
            int val = left + right;
            this->stack.push(val);
            // counter--;
        }
        if (this->_operator == "-"){
            int left = stack.top();
            std::cout << "a : " << left << std::endl;
            stack.pop();
            int right = stack.top();
            std::cout << "b : " << right << std::endl;
            stack.pop();
            int val = left - right;
            this->stack.push(val);
            // counter--;
        }
        if (this->_operator == "*"){
            int left = stack.top();
            std::cout << "a : " << left << std::endl;
            stack.pop();
            int right = stack.top();
            std::cout << "b : " << right << std::endl;
            stack.pop();
            int val = left * right;
            this->stack.push(val);
            // counter--;
        } 
        if (this->_operator == "/"){
            int left = stack.top();
            stack.pop();
            int right = stack.top();
            stack.pop();
            int val = left / right;
            stack.push(val);
            // counter--;
        }
    }
}