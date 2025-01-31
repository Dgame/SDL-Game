#ifndef SDL_Vector2_HPP
#define SDL_Vector2_HPP

#include "types.hpp"

struct SDL_Point;

namespace sdl {
    struct Vector2i;

    struct Vector2f {
        f32_t x = 0;
        f32_t y = 0;

        Vector2f() = default;
        explicit Vector2f(f32_t, f32_t);
        Vector2f(const Vector2i&);
    };

    struct Vector2i {
        i32_t x = 0;
        i32_t y = 0;

        Vector2i() = default;
        explicit Vector2i(i32_t, i32_t);
        Vector2i(const Vector2f&);

        bool isNull() const {
            return this->x == 0 && this->y == 0;
        }

        SDL_Point* copyInto(SDL_Point*) const;
    };

    Vector2i operator +(const Vector2i&, const Vector2i&);
    Vector2i operator -(const Vector2i&, const Vector2i&);
    Vector2i operator *(const Vector2i&, const Vector2i&);
    Vector2i operator /(const Vector2i&, const Vector2i&);
    Vector2i operator %(const Vector2i&, const Vector2i&);

    Vector2i operator +(const Vector2i&, i32_t);
    Vector2i operator -(const Vector2i&, i32_t);
    Vector2i operator *(const Vector2i&, i32_t);
    Vector2i operator /(const Vector2i&, i32_t);
    Vector2i operator %(const Vector2i&, i32_t);

    Vector2i& operator +=(Vector2i&, const Vector2i&);
    Vector2i& operator -=(Vector2i&, const Vector2i&);
    Vector2i& operator *=(Vector2i&, const Vector2i&);
    Vector2i& operator /=(Vector2i&, const Vector2i&);
    Vector2i& operator %=(Vector2i&, const Vector2i&);

    bool operator ==(const Vector2i&, const Vector2i&);
    bool operator !=(const Vector2i&, const Vector2i&);

    SDL_Point* TryCopyInto(const Vector2i*, SDL_Point*);
}

#endif