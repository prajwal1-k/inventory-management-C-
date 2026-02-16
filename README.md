# Inventory Management System (C++)

## Project Overview

This is a console-based Inventory Management System developed using C++.
The application allows users to manage inventory items with authentication support.

The system demonstrates:
- Object-Oriented Programming (OOP)
- File modularization
- Console-based user interaction
- Basic authentication
- Inventory CRUD operations

---

## Technologies Used
- C++
- Linux / Unix Terminal
- g++ Compiler
- Object-Oriented Programming Concepts

---

## Compilation Instructions
Use the following command to compile the project:
```bash
g++ -Wall -Wextra -g3 main.cpp Inventory.cpp Auth.cpp Item.cpp -o main
```

## ▶️ Running the Program
After compilation, run the program using:
```bash
./main
```

---

## Example Program Flow

```
===== Inventory Management System =====
1. Login
2. Exit

Enter Choice: 1
Username: admin
Password: *****

Login Successful!

===== Inventory Menu =====
1. Add Item
2. View Items
3. Search Item
4. Update Item
5. Delete Item
6. Logout
```

---

## 📂 Project Structure

```
InventoryManagement/
│
├── main.cpp
├── Inventory.cpp
├── Inventory.h
├── Item.cpp
├── Item.h
├── Auth.cpp
├── Auth.h
```

