#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data {
    public:
        Data(void);
        Data(Data const &src);
        virtual ~Data(void);

        Data            &operator=(Data const &src);

        std::string     getName(void) const;
        void            setName(std::string name);

    private:
        std::string     _name;
};

#endif