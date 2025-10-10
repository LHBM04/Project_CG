#ifndef GUARD_VECTOR2D_H
#define GUARD_VECTOR2D_H

template<typename T>
    requires std::is_arithmetic_v<T>
struct Vector2D
{
    /**
     * @brief 벡터의 x 좌표.
     */
    T x;

    /**
     * @brief 벡터의 y 좌표.
     */
    T y;

    /**
     * @brief 기본 생성자.
     */
    explicit Vector2D() noexcept
        : x(0)
        , y(0)
    {
    }

    explicit Vector2D(T value_) noexcept
        : x(value_)
        , y(value_)
    {
    }

    explicit Vector2D(T x_, T y_) noexcept
        : x(x_)
        , y(y_)
    {
    }
}

#endif // !GUARD_VECTOR2D_H
