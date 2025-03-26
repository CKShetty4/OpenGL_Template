# OpenGL Template

## Overview
This is a simple OpenGL template using GLFW, GLEW, and GLAD. The template provides a basic setup for creating an OpenGL window, rendering a simple triangle, and setting up the necessary dependencies.

## Prerequisites
Ensure you have the following installed before using this template:
- Visual Studio (Recommended: 2022 or later)
- OpenGL-compatible GPU and drivers

## File Structure (Simplified)
```
OpenGLProject/
├── OpenGLProject.sln                # Solution file
├── OpenGLProject.vcxproj            # Project file
├── Dependencies/                     # Contains all necessary libraries
│   ├── GLEW/
│   ├── GLAD/
│   ├── GLFW/
├── Src/
│   ├── main.cpp                      # Main source file
│   ├── glad.c                         # GLAD source file
├── Build/
├── x64/
│   ├── Debug/
│   │   ├── OpenGLProject.exe          # Compiled executable
```

## Setup Instructions
### 1. Open the Project
- Open `OpenGLProject.sln` in Visual Studio.

### 2. Configure Project Properties
#### **C/C++ General**
- **Additional Include Directories:**
  ```
  $(SolutionDir)Dependencies\GLFW\include;
  $(SolutionDir)Dependencies\GLAD;
  $(SolutionDir)Dependencies\GLEW\include\GL;
  %(AdditionalIncludeDirectories)
  ```
- **Screenshot:**
  ![Project Properties - General](screenshots/img1.png)

#### **Preprocessor Definitions**
- **Add:** `GLEW_STATIC;` *(Ensure other required definitions are present.)*
- **Screenshot:**
  ![Project Properties - Preprocessor](screenshots/img2.png)

#### **Linker General**
- **Additional Library Directories:**
  ```
  $(SolutionDir)Dependencies\GLEW\lib\Release\x64;
  $(SolutionDir)Dependencies\GLFW\lib-vc2022;
  %(AdditionalLibraryDirectories)
  ```
- **Screenshot:**
  ![Project Properties - Linker General](screenshots/img3.png)

#### **Linker Input**
- **Additional Dependencies:**
  ```
  $(CoreLibraryDependencies);
  %(AdditionalDependencies);
  glfw3.lib;
  opengl32.lib;
  glew32s.lib;
  ```
- **Ignore Specific Default Libraries:** `MSVCRT.lib`
- **Screenshot:**
  ![Project Properties - Linker Input](screenshots/img4.png)

## Compilation & Execution
- **Compile:** `Ctrl + F7`
- **Build:** `Ctrl + Shift + B`
- **Run:** `F5`

*(These shortcuts apply to Windows; for other platforms, refer to respective IDE settings.)*

## Features
- Uses **GLFW** for window and input handling.
- Uses **GLEW** to load OpenGL functions.
- Uses **GLAD** for OpenGL function management.
- Renders a simple **color-interpolated triangle**.
- Supports easy modification and extension.

## Modifying the Template
- Modify `main.cpp` to add your own rendering logic.
- The rendering section is marked between:
  ```cpp
  /* START MODIFYING HERE */
  /* END MODIFYING HERE */
  ```
- Add shaders, models, or textures as needed.

## Platform-Specific Notes
### **Windows**
- All dependencies are pre-included; no additional installations are required.

### **Linux & MacOS**
- You may need to manually install GLFW, GLEW, and GLAD using package managers.
- Adjust include and library paths accordingly in project settings.

## License
This template is provided as-is for learning and development purposes.

---
Enjoy coding with OpenGL! 🚀

