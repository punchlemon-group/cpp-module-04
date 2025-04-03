#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>
#include <iostream>
#include <sstream>

class Brain {
public:
    /* constructor */
    Brain();
    Brain(const Brain& copy);
    Brain& operator=(const Brain& copy);

    /* destructor */
    virtual ~Brain();

    /* getter */
    const std::string* getIdeas() const;

private:
    /* variable */
    std::string _ideas[100];

    /* setter */
    void _setIdea(int index, const std::string& idea);

    /* support */
    virtual void _init();
    void _initByCopy(const Brain& copy);
};

#endif /* __BRAIN_HPP__ */
