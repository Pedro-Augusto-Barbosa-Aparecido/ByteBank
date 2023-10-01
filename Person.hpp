#pragma once

#include <string>
#include <iostream>

template <typename Document>
class Person
{
protected:
	Document document;
	std::string name;

public:
	Person(Document document, std::string& name) :
            document(document),
            name(name)
    {
        this->verifyNameSize();
    }

	std::string getName() const {
        return this->name;
    };
	Document getDocument() const {
        this->document;
    };

private:
	void verifyNameSize() {
        if (this->name.size() < 5) {
            std::cout << "Nome muito curto!" << std::endl;

            exit(1);
        }
    };
};

