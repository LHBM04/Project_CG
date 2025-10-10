#ifndef GUARD_VECTOR3D_H
#define GUARD_VECTOR3D_H

template<typename T>
    requires std::is_arithmetic_v<T>
struct Vector3D
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
     * @brief 벡터의 z 좌표.
     */
    T z;

    /**
     * @brief 기본 생성자.
     */
    explicit Vector2D() noexcept
        : x(0)
        , y(0)
        , z(0)
    {
    }

    explicit Vector2D(T value_) noexcept
        : x(value_)
        , y(value_)
        , z(value_)
    {
    }

    explicit Vector2D(T x_, T y_, T z_) noexcept
        : x(x_)
        , y(y_)
        , z(z_)
    {
    }
}

#endif // !GUARD_VECTOR3D_H
