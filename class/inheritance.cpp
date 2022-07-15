#include <iostream>
using namespace std;

class Parent
{
    string name;
    string address = "Parent address";

protected:
    string getName()
    {
        return this->name;
    }

protected:
    string setName(string name)
    {
        this->name = name;
        return this->name;
    }

protected:
    string getAddress()
    {
        return this->address;
    }

private:
    string setAddress(string address)
    {
        this->address = address;
        return this->address;
    }

protected:
    string changeAddressByChild(string address)
    {
        this->address = address;
        return this->address;
    }
};

// Parent class end

class Child : Parent
{
    string name;
    string address;

public:
    Child()
    {
        this->address = Parent::getAddress();
    }

public:
    string getName()
    {
        return name;
    }

public:
    string setName(string name)
    {
        this->name = name;
        return this->name;
    }

public:
    string getParentName()
    {
        return Parent::getName();
    }

public:
    string setParentName(string parentName)
    {
        return Parent::setName(parentName);
    }

public:
    string getAddress()
    {
        return this->address;
    }

public:
    string setAddress(string address)
    {
        this->address = address;
        return this->address;
    }

public:
    string getParentAddress()
    {
        return Parent::getAddress();
    }

public:
    string forceChangeParentAddressByChild(string newAddress)
    {
        return Parent::changeAddressByChild(newAddress);
    }
// throw error becuase Parent::setAddress(address) is private by Parent
// public:
//     string setParentAddress(string address)
//     {
//         return Parent::setAddress(address); 
//     }
};

int main()
{
    Child childObject;
    cout << "Parent name: " << childObject.getParentName() << endl;
    childObject.setParentName("Father");
    cout << "After Change Parent name: " << childObject.getParentName() << endl<<endl;

    cout << "Child name: " << childObject.getName() << endl;
    childObject.setName("Child");
    cout << "After Change Child name: " << childObject.getName() << endl<<endl;

    cout << "Parent address: " << childObject.getParentAddress() << endl;
    // childObject.setParentAddress("Parent Address");
    cout << "After Change Parent address: " << childObject.getParentAddress() << endl<<endl;

    cout << "Child address: " << childObject.getAddress() << endl;
    childObject.setAddress("Change Child Address");
    cout << "After Change Child address: " << childObject.getAddress() << endl<<endl;

    cout << "Parent address before forcefully changes: " << childObject.getParentAddress() << endl;
    childObject.forceChangeParentAddressByChild("Change Parent Address Forcefully");
    cout << "After Change Parent address: " << childObject.getParentAddress() << endl<<endl;
    return 0;
}