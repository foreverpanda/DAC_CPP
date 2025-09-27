Project Name: Company Staff Management (Light Version)

Goal: Base + Derived classes, polymorphism, overriding, RTTI, enums, file handling. Fast, concise, OOP-centric.

Classes & Hierarchy

Enum: Role

enum class Role { DEVELOPER, MANAGER, INTERN };


Base Class: Employee

Attributes: name, id, role

Methods:

virtual void displayInfo() → overridden in derived

virtual ~Employee() {}

Derived Classes:

Developer → projectName, override displayInfo()

Manager → teamSize, override displayInfo()

Intern → durationMonths, override displayInfo()

Polymorphism + RTTI

vector<Employee*> staff; → store all types

Loop through vector → call displayInfo() → runtime polymorphism

Use dynamic_cast to do type-specific stuff:

Only Developer can showProject()

Only Manager can showTeam()

File Handling

Save/load employee data from a CSV (or text) file.

Example: name,id,role,extraInfo

Simple add/update functionality.

Core Functions

Add employee → choose type → fill data → push to vector → save to file

Display all employees → polymorphic displayInfo()

Type-specific operations using RTTI

Load all employees from file at start






Why it’s fast & exam-perfect

Virtual functions & overriding → displayInfo()

Polymorphism → vector of base pointers

RTTI → dynamic_cast for type-specific actions

Enums → Role type, cleaner than strings

File Handling → save/load for persistence

Destructor chaining → virtual ~Employee()

Summary of Concepts Used
Concept	How it’s Used
Inheritance	Employee → Developer/Manager/Intern
Virtual functions	displayInfo() in base, overridden in derived
Overriding	Each derived class customizes displayInfo()
Polymorphism	Vector of Employee* calling displayInfo()
RTTI	dynamic_cast to check actual type and perform type-specific operations
Enum	Role for employee type
File Handling	Saving/loading employee info
Destructor chaining	virtual ~Employee() ensures proper cleanup