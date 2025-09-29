#ifndef GUARD_APPLICATION_H
#define GUARD_APPLICATION_H

#include <memory>

#include <glfw/glfw3.h>
#include <glfw/glfw3native.h>

#include "Graphics/Renderer.h"
#include "../Framework/Window.h"

class Application final
{
public:
    /**
     * @brief 생성자.
     */
    Application();

    /**
     * @brief 소멸자.
     */
    ~Application();

    /**
     * @brief 애플리케이션을 실행합니다.
     */
    void Run() const;

    /**
     * @brief 애플리케이션을 종료합니다.
     */
    void Quit() noexcept;
private:
    /**
     * @brief
     */
    std::unique_ptr<Window> window;

    /**
     * @brief
     */
    std::unique_ptr<Renderer> renderer;

    /**
     * @brief 애플리케이션 실행 여부.
     */
    bool isRunning;
};

#endif // !GUARD_APPLICATION_H