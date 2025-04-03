#include "Brain.hpp"

/* public */
/* construcotr */
Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
    for (int i = 0; i < 100; ++i) {
        _ideas[i] = "idea";
    }
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy constructor" << std::endl;
    for (int i = 0; i < 100; ++i) {
        _ideas[i] = copy._ideas[i];
    }
}

Brain& Brain::operator=(const Brain& copy) {
    std::cout << "Brain assignation operator" << std::endl;
    if (this != &copy) {
        for (int i = 0; i < 100; ++i) {
            _ideas[i] = copy._ideas[i];
        }
    }
    return *this;
}

/* destructor */
Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

/* getter */
const std::string* Brain::getIdeas() const {
    return _ideas;
}
