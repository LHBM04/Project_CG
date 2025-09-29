#ifndef GUARD_WINDOW_H
#define GUARD_WINDOW_H

#include <memory>
#include <string>

#include <glfw/glfw3.h>
#include <glfw/glfw3native.h>

/**
 * @struct WindowSpecification
 *
 * @brief 윈도우 사양에 대해 정의합니다.
 */
struct WindowSpecification
{
    /**
     * @brief 윈도우 제목.
     */
    std::string title;

    /**
     * @brief 윈도우 너비.
     */
    int width;

    /**
     * @brief 윈도우 높이.
     */
    int height;

    /**
     * @brief 크기 조절 여부.
     */
    bool isResizable;

    /**
     * @brief 테두리 여부.
     */
    bool isDecorated;

    /**
     * @brief 전체화면 여부.
     */
    bool isFullscreen;

    /**
     * @brief 수직 동기화 여부.
     */
    bool isVSync;
};

/**
 * @class Window
 *
 * @brief 윈도우를 정의합니다.
 */
class Window final
{
public:
    /**
     * @brief 생성자.
     *
     * @param context_ 윈도우 설정 컨텍스트.
     */
    Window(const WindowSpecification& context_);

    /**
     * @private 소멸자.
     */
    ~Window();

    /**
     * @brief 윈도우 핸들을 반환합니다.
     *
     * @return GLFW 윈도우 핸들.
     */
    [[nodiscard]]
    inline bool ShouldClose() const noexcept;

    /**
     * @brief 윈도우 핸들을 반환합니다.
     *
     * @return GLFW 윈도우 핸들.
     */
    [[nodiscard]]
    inline GLFWwindow* GetHandle() const noexcept;
private:
    /**
     * @struct GLFWwindowDeleter
     *
     * @brief GLFW 윈도우 해제자.
     */
    struct GLFWwindowDeleter
    {
        /**
         * @brief GLFW 윈도우를 해제합니다.
         *
         * @param window_ 해제할 GLFW 윈도우 포인터.
         */
        inline void operator()(GLFWwindow* const window_) const
        {
            glfwDestroyWindow(window_);
        }
    };

    /**
     * @brief Context of the window
     */
    WindowSpecification specification;

    /**
     * @brief Handle to the GLFW window
     */
    std::unique_ptr<GLFWwindow, GLFWwindowDeleter> handle;
};

bool Window::ShouldClose() const noexcept
{
    return static_cast<bool>(glfwWindowShouldClose(handle.get()));
}

GLFWwindow* Window::GetHandle() const noexcept
{
    return handle.get();
}

#endif // !GUARD_WINDOW_H