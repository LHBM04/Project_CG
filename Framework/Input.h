#ifndef GUARD_INPUT_H
#define GUARD_INPUT_H

#include <unordered_map>

class Input
{
public:
    /**
     * @brief 키가 눌렸는지 확인합니다.
     *
     * @param key 확인할 키.
     *
     * @return 키가 눌렸다면 true, 그렇지 않다면 false.
     */
    static bool IsKeyPressed(int key) noexcept;

    /**
     * @brief 키가 떼졌는지 확인합니다.
     *
     * @param key 확인할 키.
     *
     * @return 키가 떼졌다면 true, 그렇지 않다면 false.
     */
    static bool IsKeyReleased(int key) noexcept;

    /**
     * @brief 키가 눌린 상태인지 확인합니다.
     *
     * @param key 확인할 키.
     *
     * @return 키가 눌린 상태라면 true, 그렇지 않다면 false.
     */
    static bool IsKeyHeld(int key) noexcept;

    /**
     * @brief 마우스 버튼이 눌렸는지 확인합니다.
     *
     * @param button 확인할 마우스 버튼.
     *
     * @return 마우스 버튼이 눌렸다면 true, 그렇지 않다면 false.
     */
    static bool IsMouseButtonPressed(int button) noexcept;

    /**
     * @brief 마우스 버튼이 떼졌는지 확인합니다.
     *
     * @param button 확인할 마우스 버튼.
     *
     * @return 마우스 버튼이 떼졌다면 true, 그렇지 않다면 false.
     */
    static bool IsMouseButtonReleased(int button) noexcept;

    /**
     * @brief 마우스 버튼이 눌린 상태인지 확인합니다.
     *
     * @param button 확인할 마우스 버튼.
     *
     * @return 마우스 버튼이 눌린 상태라면 true, 그렇지 않다면 false.
     */
    static bool IsMouseButtonHeld(int button) noexcept;
private:
    /**
     * @brief 각 키의 상태.
     */
    static std::unordered_map<int, bool> keyStates;

    /**
     * @brief 각 마우스 버튼의 상태.
     */
    static std::unordered_map<int, bool> buttonnStates;

    /**
     * @brief 커서의 현재 위치.
     */
    static glm::vec2 cursorPosition;
};

#endif // !GUARD_INPUT_H
