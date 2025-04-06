---> important note: just extract the res zip where all files are. This is only designed for the system with resolution of 1920x1080.

---

### **Project Overview**

This School Management System (SMS) aims to simplify administrative tasks such as managing student and teacher records, adding and removing entities, and performing file operations. It employs dynamic `if-else` logic for interactivity and uses `windows.h` for graphical user interface (GUI) development.

---

### **1. Dynamic If-Else Implementation**

The use of dynamic `if-else` statements forms the core interactive logic for your application. This allows the system to perform specific actions based on user input, particularly through mouse clicks. The `if-else` logic checks the coordinates of the user's mouse clicks and determines the corresponding action on the screen. 

#### **Code Example in Main Menu:**
```cpp
if (x > x1 && x < x2 && y > y1 && y < y2)
    optiononeofmainscreen();
else if (x > x3 && x < x4 && y > y3 && y < y4)
    optiontwoofmainscreen();
```
Here, `x` and `y` represent the mouse cursor's coordinates. The program checks if the cursor is within certain bounds (i.e., areas of the screen defined by `x1, x2, y1, y2` for each option). If the mouse click falls within a button's area, the corresponding function (like `optiononeofmainscreen()`) is called.

### **2. Windows.h Library for GUI Development**

The use of the `windows.h` library is critical for developing the graphical interface, allowing the program to interface with the Windows OS to create windows, display images, and manage mouse input. The library allows for both visual and interactive elements, enhancing the usability of the system.

#### **Key Windows Functions in the Code:**
- **`GetSystemMetrics()`**: This function is used to retrieve the screen height and width. For instance, `GetSystemMetrics(SM_CYSCREEN)` returns the height of the screen in pixels, and `GetSystemMetrics(SM_CXSCREEN)` returns the width.
    ```cpp
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);
    ```
    These values are often used to set window dimensions, ensuring that the graphical interface is dynamically sized for different screen resolutions.
  
- **`initwindow()`**: This function initializes the graphics window where the graphical elements are drawn. It sets up the environment where buttons, backgrounds, and images will appear.
    ```cpp
    initwindow(width, height, "School Management System");
    ```
  
- **`readimagefile()`**: Used to load and display images in the window, such as background images and interactive buttons.
    ```cpp
    readimagefile("background.bmp", 0, 0, width, height);
    ```

#### **Graphical Interface Components:**
- The system displays multiple graphical components like the main menu, buttons for actions (add, delete, view), and images that serve as clickable objects (e.g., images for student records, teacher records).
  
---

### **3. File Handling and Records**

The system reads and writes to CSV files to store and manage student and teacher records. File handling allows for persistent data storage, enabling the system to retain and manage large datasets (e.g., student lists, teacher lists).

#### **Key Code for File Handling:**
The function `file_handle_SR()` allows users to select a CSV file (like `TD.csv` or `class2.csv`) containing student or teacher data. It reads the file, extracts relevant data, and then displays it on the screen.
  
```cpp
void file_handle_SR(const char *file_name) {
    // Open file for reading
    ifstream file(file_name);
    string line;
    while (getline(file, line)) {
        // Process each line (representing a record)
        // Parse the line into individual fields and display them
    }
    file.close();
}
```
This function could include parsing each line into individual student/teacher attributes (like name, ID, and course) and displaying them dynamically on the GUI.

---

### **4. Mouse Click Handling**

One of the key interactive components of this system is the mouse click handling mechanism. The program listens for mouse clicks and compares the cursor's coordinates to defined areas on the screen. Depending on where the user clicks, different actions are performed.

#### **Key Mouse Click Handling Logic:**
```cpp
int x = mousex();
int y = mousey();
if (x > x1 && x < x2 && y > y1 && y < y2)
    optiononeofmainscreen();
```
In this example, `mousex()` and `mousey()` are used to get the current x and y coordinates of the mouse. The program checks if these coordinates fall within the predefined areas for interactive buttons, triggering specific functions accordingly.

Each function like `optiononeofmainscreen()` corresponds to a particular task such as adding a student, deleting a teacher, or viewing records.

---

### **5. User Interaction and Main Menu**

The main menu acts as the starting point of the system, giving users various options to interact with. It includes options such as:
- **Add Student**
- **Remove Teacher**
- **View Records**

Each option is represented by an area on the screen (usually in the form of buttons). The program listens for mouse clicks, checks the cursor's coordinates, and then calls the corresponding function. Here's a rough breakdown of how the main menu works:

#### **Main Menu Example:**
```cpp
void mainmenu() {
    // Display background image and buttons
    readimagefile("menu_background.bmp", 0, 0, width, height);

    // Define button areas
    if (x > x1 && x < x2 && y > y1 && y < y2)
        optiononeofmainscreen();
    else if (x > x3 && x < x4 && y > y3 && y < y4)
        optiontwoofmainscreen();
    // Add more options as needed
}
```
In this case, the `mainmenu()` function renders a background and places interactive buttons on the screen. If a user clicks within the area of a button, the corresponding function is executed, taking the user to the relevant screen or action (e.g., adding a new student).

---

### **6. Additional Functionality**

- **Add/Remove Students and Teachers:** The program could implement forms where users can input student or teacher details, which would be saved to the respective CSV files.
- **Student Records View:** When viewing student records, the program could loop through the file, parsing and displaying each student's data dynamically.
- **Teacher Records View:** Similar to student records, but the data pertains to teachers. It may include fields like `teacher ID`, `subject`, `email`, etc.

---

### **7. Code Flow Summary**

1. **Initialization**: The program begins by setting up the graphical window using `initwindow()` and displaying the main menu with `readimagefile()`.
2. **User Interaction**: It listens for mouse clicks, checks the click coordinates with `if-else` statements, and calls the corresponding function for each action (e.g., `optiononeofmainscreen()`).
3. **File Operations**: User options like viewing student or teacher records trigger file handling functions that read from CSV files and display data.
4. **Action Execution**: For adding, removing, or updating records, the system likely prompts the user for input, validates it, and then saves the data back into the appropriate file.

---

### **Conclusion**

The School Management System (SMS) leverages dynamic `if-else` statements for interactive elements, the `windows.h` library for GUI functionality, and file handling for persistent data management. The use of mouse clicks to navigate between options enhances usability, making it easy for users to interact with the system. This project is a great example of combining user input, graphical interface, and file handling to create a functional and user-friendly school management system.

Let me know if you'd like more clarification on any part of the code or if you need help with further development!
