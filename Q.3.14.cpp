#include <iostream>

#include <string>

class Employee {

 private:

    std::string firstName;

    std::string lastName;

    int monthlySalary;

 public:

    Employee(const std::string &, const std::string&, int);

    // SETTERS

    void setFirstName(const std::string &);

    void setLastName(const std::string &);

    void setMonthlySalary(int);

    // GETTERS

    std::string getFirstName() const;

    std::string getLastName() const;

    int getMonthlySalary() const;

    int calculateSalary(int) const;

    void giveRaise(int);

    void showEmployee() const;

};

Employee::Employee(const std::string &fName, const std::string &lName, int mSalary) {

    setFirstName(fName);

    setLastName(lName);

    setMonthlySalary(mSalary);

}

// SETTERS

void Employee::setFirstName(const std::string &fName) { firstName = fName; }

void Employee::setLastName(const std::string &lName) { lastName = lName; }

void Employee::setMonthlySalary(int mSalary) {

    monthlySalary = (mSalary > 0) ? mSalary : 0;

}

// GETTERS

std::string Employee::getFirstName() const { return firstName; }

std::string Employee::getLastName() const { return lastName; }

int Employee::getMonthlySalary() const { return monthlySalary; }

int Employee::calculateSalary(int months) const { return (getMonthlySalary() * months); }

void Employee::giveRaise(int percent) {

    monthlySalary += (monthlySalary / 100) * percent;

}

void Employee::showEmployee() const {

    std::cout << "Name: " << getFirstName() << " " << getLastName()

              << "\nMonthly Salary: " << getMonthlySalary()

              << "\nYearly Salary: " << calculateSalary(12) << std::endl

              << std::endl;

}

int main(int argc, const char *argv[]) {

    Employee emp1("Bob", "Bobson", 1200);

    Employee emp2("Sue", "Sueson", 2000);

    emp1.showEmployee();

    emp2.showEmployee();

    emp1.giveRaise(10);

    emp2.giveRaise(10);

    emp1.showEmployee();

    emp2.showEmployee();

    return 0;

}
