#ifndef GUARD_SHADER_H
#define GUARD_SHADER_H

/**
 * @class Shader
 *
 * @brief 셰이더를 정의합니다.
 */
class Shader
{
public:
    /**
     * @brief 생성자.
     */
    Shader();

    /**
     * @brief 소멸자.
     */
    ~Shader();
private:
    /**
     * @brief 프로그램 ID.
     */
    unsigned int programID;
};

#endif // !GUARD_SHADER_H