cmake_minimum_required(VERSION 3.7)
project(courseSolvedExercises)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Bear/Bear.cpp Bear/Bear.h Bear/bearMain.h Bunny/Bunny.cpp Bunny/Bunny.h Bunny/bunnyMain.h FurnitureShop/Furniture.cpp FurnitureShop/Furniture.h FurnitureShop/furnitureMain.h HealthCareTax/Person.cpp HealthCareTax/Person.h HealthCareTax/TaxSystem.cpp HealthCareTax/TaxSystem.h HealthCareTax/HealthCare.cpp HealthCareTax/HealthCare.h HealthCareTax/IInsured.h HealthCareTax/ITaxPayer.h HealthCareTax/Employee.cpp HealthCareTax/Employee.h HealthCareTax/healthTaxMain.h)
add_executable(courseSolvedExercises ${SOURCE_FILES})