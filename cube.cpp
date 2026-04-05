#include "cube.h"

using namespace cube;

namespace cube {

    class block {

        private:
        block_id id;
        Vector3 block_position;

        public:
        block (block_id bid) : id(bid) {
            
        };
    }; /* class block */

    class cube {

    block_id block_ids[26] = {
        // corners
        block_id::RWG, block_id::RGY, block_id::RYB, block_id::RBW,
        block_id::OWG, block_id::OGY, block_id::OYB, block_id::OBW,
        // egdes
        block_id::RW, block_id::RG, block_id::RY, block_id::RB,
        block_id::WG, block_id::GY, block_id::YB, block_id::BW,
        block_id::OW, block_id::OG, block_id::OY, block_id::OB,
        // centers
        block_id::R, block_id::O, block_id::W, block_id::G, block_id::Y, block_id::B
    };

    std::vector<block> blocks;

    public:
    cube() {
        for (block_id block_id : block_ids) {
            blocks.push_back(block(block_id));
        };

    };

    }; /* class cube */

} /* namesapce cube */