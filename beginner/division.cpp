#include<iostream>

int main() {
    int a, b;
    std::cout<<"Enter 2 numbers \n";
    std::cin>>a>>b;
    if (b == 0) {
        std::cout<<"Can not divide by 0";
        return 0;
    }
    std::cout<<"Division: "<<(float)a/b;
    return 0;
}