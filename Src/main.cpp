#include <glew.h>
#include <glfw3.h>
#include <iostream>

using namespace std;       // Allows using `cout`, `endl`, etc., without `std::`

// Window size (modify as needed)
const int WIDTH = 800, HEIGHT = 600;

int main() {
    // Initialize GLFW (used for window creation and input handling)
    if (!glfwInit()) {
        cerr << "Failed to initialize GLFW" << endl;
        return -1;
    }

    // Create a GLFW window
    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Simple OpenGL Template", NULL, NULL);// Change the Window Name as needed
    if (!window) {
        cerr << "Failed to create GLFW window" << endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);  // Set OpenGL context for rendering

    // Initialize GLEW (loads OpenGL functions)
    if (glewInit() != GLEW_OK) {
        cerr << "Failed to initialize GLEW" << endl;
        return -1;
    }

    // Print OpenGL version (useful for debugging)
    cout << "OpenGL Version: " << glGetString(GL_VERSION) << endl;

    // MAIN LOOP: Keeps the window open until the user closes it
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

        /* START MODIFYING HERE: Add more shapes, animations, or interactions  */
        


        //Drawing a simple triangle
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(-0.5f, -0.5f); // Bottom-left (Red)
        glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(0.5f, -0.5f);  // Bottom-right (Green)
        glColor3f(0.0f, 0.0f, 1.0f); glVertex2f(0.0f, 0.5f);   // Top-center (Blue)
        glEnd();



        /* END MODIFYING HERE */

        glfwSwapBuffers(window); // Swap front and back buffers (double buffering)
        glfwPollEvents();        // Process input events (keyboard/mouse)
    }

    // Cleanup: Close the window and terminate GLFW
    glfwTerminate();
    return 0;
}
