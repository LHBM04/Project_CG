#ifndef GUARD_SINGLETON_H
#define GUARD_SINGLETON_H

template <typename TInstance>
class Singleton
{
private:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;
protected:
    Singleton() = default;
    virtual ~Singleton() = default;
public:
    /**
     * @brief 인스턴스를 반환합니다.
     *
     * @return 싱글톤 인스턴스.
     */
    [[nodiscard]]
    constexpr static TInstance& GetInstance()
    {
        static TInstance instance{ };
        return &instance;
    }
};

#endif // !GUARD_SINGLETON_H