#include <iostream>
#include "glad.h"
#include <GLFW/glfw3.h>

int main()
{
    std::cout << "fuck this\n";
    if(!glfwInit())
    {
        return -1;
    }
    GLFWwindow* window;

    window = glfwCreateWindow(600,800,"fuck this shit",NULL,NULL);
    glfwMakeContextCurrent(window);
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "couldnt load GL\n";
        glfwTerminate();
        return -1;
    }

    glClearColor(0.25f,0.5f,0.75f,1.0f);

    while(!glfwWindowShouldClose(window))
    {



        glfwPollEvents();
        glfwSwapBuffers(window);
    }

        glClear(GL_COLOR_BUFFER_BIT);


    glfwTerminate();
    std::cin.get();
}