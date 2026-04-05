#ifndef _CUBE_H
#define _CUBE_H

#include <cstdint>
#include <raylib.h>
#include <vector>


namespace cube {

    enum class block_id : uint8_t {
    NONE = 0,
    // Bit mask for colors, that way we can easily combine them to get the color of each block
    // 
    R = 1, O = 1 << 1, W = 1 << 2, G = 1 << 3, Y = 1 << 4, B = 1 << 5,
    RWG = R | W | G, RGY = R | G | Y, RYB = R | Y | B, RBW = R | B | W,
    OWG = O | W | G, OGY = O | G | Y, OYB = O | Y | B, OBW = O | B | W,
    RW = R | W, RG = R | G, RY = R | Y, RB = R | B,
    WG = W | G, GY = G | Y, YB = Y | B, BW = B | W,
    OW = O | W, OG = O | G, OY = O | Y, OB = O | B,
    };

    // enum color {
    //     w = C8A2FF,
    //     r = FFB7C5,
    //     b = A7D8FF,
    //     o = FFCBA4,
    //     g = A8FFE3,
    //     y = FFF3A3
    // };


    class block
    {

        public:
        block ();
    }; /* class block */

    class cube
    {
    public:
    cube();
    }; /* class cube */

} /* namesapce cube */

#endif /* _CUBE_H */
