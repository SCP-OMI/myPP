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
    (void)RPN;
    return *this;
}
RPN::~RPN(){
}

RPN::RPN(std::string RPN){
    this->_RPN = RPN;
    if (this->_RPN.find_first_not_of("0123456789+*/- ") == std::string::npos)
    error_print("WRONG!");
// std::stack<int>::iterator it = this->stack.begin();
    // this->_RPN.erase(std::remove(this->_RPN.begin(), this->_RPN.end(), ' '), this->_RPN.end());
    // std::cout << "---------STRING---------" << std::endl;
    // std::cout << this->_RPN << std::endl;
}

int RPN::intConvert(std::string& _num){
    int num;
    std::stringstream iss(_num);
    iss >> num;
    return num;
}

int RPN::routine(){
    int left;
    int right;
    int result;
    std::stringstream iss(this->_RPN);
    std::stack<int> temp;
    std::string string;

    while(iss >> string){
        if (string == "+" || string == "-" || string == "/" || string == "*"){
            if (temp.size() < 2)
                error_print("not enough elements in the stack.");
            right = temp.top();
            temp.pop();
            left = temp.top();
            temp.pop();
            switch(string.at(0)){
                case '+' : result = left + right; break;
                case '*' : result = left * right; break;
                case '-' : result = left - right; break;
                case '/' :
                    if (right != 0)
                        result = left / right;
                    else
                        error_print("Can't devide by zero.");
                break;
            }
            temp.push(result);
        }
        else
            temp.push(intConvert(string));
    }
    return temp.top();

}

