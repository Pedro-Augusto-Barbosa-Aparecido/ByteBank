cmake_minimum_required(VERSION 3.26)
project(ByteBankCLion)

set(CMAKE_CXX_STANDARD 23)

add_executable(ByteBankCLion main.cpp
        Account.cpp
        Account.hpp

        CheckingAccount.cpp
        CheckingAccount.hpp

        Autheticable.cpp
        Autheticable.hpp

        Cashier.cpp
        Cashier.hpp

        Cpf.cpp
        Cpf.hpp

        Employee.cpp
        Employee.hpp

        Holder.cpp
        Holder.hpp

        Manager.cpp
        Manager.hpp

        Person.hpp

        SavingsAccount.cpp
        SavingsAccount.hpp

        WeekDays.hpp
        Account.cpp
)
