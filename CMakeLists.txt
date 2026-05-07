cmake_minimum_required(VERSION 3.10)
project(Testing VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
	test
	src/main.cpp

	src/scratch/Scratch.cpp
	
	src/collections/Arrays.cpp	
	src/collections/Vectors.cpp	
	src/collections/Map.cpp	
	
	src/references/References.cpp	
	
	src/data_types/Assignments.cpp
	src/data_types/DataTypes.cpp
	src/data_types/Booleans.cpp
	src/data_types/Characters.cpp
	src/data_types/strings/Strings.cpp
	src/data_types/strings/CStrings.cpp
	src/data_types/strings/Formatting.cpp
	src/data_types/strings/UserInput.cpp
	src/data_types/Numbers.cpp
	
	src/if_else/IfElse.cpp
	
	src/functions/Scope.cpp
	src/functions/OptionalArgs.cpp
	src/functions/Overloading.cpp

	src/loops/Looping.cpp
	
	src/switch/Switches.cpp
	
	src/enum/Enums.cpp

	src/classes/ArgParser.cpp
	src/classes/Restaurant.cpp
	src/classes/ClassExamples.cpp
	src/classes/Vehicle.cpp	
	src/classes/Car.cpp	
	src/classes/Truck.cpp	
	src/classes/Clan.cpp
	src/classes/OpOverloading.cpp
	src/classes/Planet.cpp
	src/classes/Person.cpp
	src/classes/FourPillars.cpp

	src/static_data/StaticEx.cpp

	src/test_benches/Animal.cpp
	src/test_benches/TestBench.cpp

	src/file_io/FileIO.cpp

	src/exceptions/ExHandlers.cpp

	src/pointers/Pointers.cpp
	src/pointers/Allocation.cpp
	src/pointers/Challenges.cpp
	src/pointers/StringPointers.cpp
	src/pointers/LinkedList.cpp
	
	src/memory/MemoryRegions.cpp
	src/memory/Destructors.cpp
	src/memory/CopyConstructor.cpp
	src/memory/RuleOfThree.cpp

)

target_include_directories(test PRIVATE src)
