#ifndef GAME_TILE_HPP
#define GAME_TILE_HPP

#include "Framework/types.hpp"
#include "Framework/Sprite.hpp"

struct Tile : public sdl::Sprite {
	enum ID {
		LeftEdge = 0x001,
		RightEdge = 0x002,
		Edge = LeftEdge | RightEdge,
		Stone = 0x004,
		Gras = 0x008,
		Brittle = 0x010
	};

	u16_t id;
	
    explicit Tile(u16_t, sdl::Texture*, const sdl::Vector2i&);
    virtual ~Tile() { }
};

#endif