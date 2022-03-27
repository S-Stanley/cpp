#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name(""), _grade(1)
{
    std::cout << "Bureaucrat constructeur called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    std::cout << "Bureaucrat name and grade constructeur called" << std::endl;
    try {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        this->_grade = grade;
        std::cout << "Created Bureaucrat " << name << " with grade: " << grade << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e){
        std::cout << grade << ": " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e){
       std::cout << grade << ": " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    std::cout << "Bureaucrat copy constructeur called" << std::endl;
    this->_grade = src.getGrade();
}

Bureaucrat           &Bureaucrat::operator=(Bureaucrat const &src)
{
    std::cout << "Surcharge affection operator called" << std::endl;
    this->setGrade(src.getGrade());
    return (*this);
}

const std::string    Bureaucrat::getName(void) const
{
    return (this->_name);
}

int             Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void            Bureaucrat::setGrade(int new_grade)
{
    try {
        if (new_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (new_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        this->_grade = new_grade;
        std::cout << this->_name << " now at grade " << new_grade << ": grad ok" << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e){
        std::cout << this->_name << " " << new_grade << ": " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e){
       std::cout << this->_name << " " << new_grade << ": " << e.what() << std::endl;
    }
}

int             Bureaucrat::operator++(int)
{
    Bureaucrat  *that = this;
    this->setGrade(this->getGrade() + 1);
    return (that->getGrade());
}

int             Bureaucrat::operator--(int)
{
    Bureaucrat  *that = this;
    this->setGrade(this->getGrade() - 1);
    return (that->getGrade());
}

void            Bureaucrat::signeForm(Form &form) const
{
	form.beSigned(*this);
}

void		Bureaucrat::executeForm(Form const &form)
{
	form.execute(*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructeur called" << std::endl;
}


std::ostream     &operator<<(std::ostream &o, Bureaucrat const &src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (o);
}