#include "Window.h"

#include <stdexcept>

Window::Window(const WindowSpecification& context_)
    : specification(context_)
    , handle(nullptr)
{
    if (!glfwInit())
    {
        throw std::runtime_error("Failed to initialize GLFW");
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, specification.isResizable ? GLFW_TRUE : GLFW_FALSE);
    glfwWindowHint(GLFW_DECORATED, specification.isDecorated ? GLFW_TRUE : GLFW_FALSE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

    handle.reset(glfwCreateWindow(context_.width,
                                      context_.height,
                                      context_.title.c_str(),
                                      nullptr,
                                      nullptr));

    if (!handle)
    {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(handle.get());
    glfwSwapInterval(specification.isVSync ? 1 : 0);
}

Window::~Window()
{
    if (handle)
    {
        glfwDestroyWindow(handle.release());
        glfwTerminate();
    }
}
