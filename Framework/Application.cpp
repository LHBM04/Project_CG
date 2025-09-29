#include "Application.h"

Application::Application()
    : window(nullptr)
    , renderer(nullptr)
    , isRunning(true)
{
    // 1. 윈도우 생성
    {
        // TODO: 설정 파일로부터 읽어오기
        WindowSpecification spec { };
        spec.title = "My Application";
        spec.width = 800;
        spec.height = 600;
        spec.isResizable = true;
        spec.isDecorated = true;
        spec.isFullscreen = false;

        window = std::make_unique<Window>(spec);
    }
    // 2. 렌더러 생성
    {
        // TODO: 설정 파일로부터 읽어오기
        
        renderer = std::make_unique<Renderer>();
    }
}

Application::~Application()
{
    if (renderer)
    {
        renderer.reset();
    }

    if (window)
    {
        window.reset();
    }
}

void Application::Run() const
{
    while (!(window->ShouldClose()))
    {
        glfwPollEvents();
        glfwSwapBuffers(window->GetHandle());
    }
}

void Application::Quit() noexcept
{
    isRunning = false;
}