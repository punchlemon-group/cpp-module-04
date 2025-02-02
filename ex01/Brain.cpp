#include "Brain.hpp"

/* public */
/* construcotr */
Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
    _init();
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy constructor" << std::endl;
    _initByCopy(copy);
}

Brain& Brain::operator=(const Brain& copy) {
    std::cout << "Brain assignation operator" << std::endl;
    if (this != &copy) {
        _initByCopy(copy);
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


/* private */
/* setter */
void Brain::_setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        _ideas[index] = idea;
    }
}

/* support */
void Brain::_init() {
    for (int i = 0; i < 100; ++i) {
        _setIdea(i, "Idea");
    }
}

void Brain::_initByCopy(const Brain& copy) {
    for (int i = 0; i < 100; ++i) {
        _ideas[i] = copy._ideas[i];
    }
}
