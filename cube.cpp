#include "cube.h"

using namespace cube;

namespace cube {

    class block {

        block_id id;
        Vector3 block_position;

        public:
        block (block_id bid) : id(bid) {};

        /**
         * decodeColorID: takes in a block_id and a color_bit and
         *    returns true if the color_bit is present in the block_id,
         *    false otherwise
         * 
         * @param id: the block_id to decode
         * @param color_bit: the color_bit to check for
         *
         * @return: true if the color_bit is present in the block_id
         *    false otherwise
         */

        bool decodeColorID(block_id id, block_id color_bit){
            return (static_cast<int>(id) & static_cast<int>(color_bit)) != 0
                    ? true : false;
        }
    }; /* class block */

    class cube {

        block_id block_ids[26] = {
            // corners
            block_id::kRedWhiteGreen, block_id::kRedGreenYellow,
            block_id::kRedYellowBlue, block_id::kRedBlueWhite,
            block_id::kOrangeWhiteGreen, block_id::kOrangeGreenYellow,
            block_id::kOrangeYellowBlue, block_id::kOrangeBlueWhite,
            // egdes
            block_id::kRedWhite, block_id::kRedGreen,
            block_id::kRedYellow, block_id::kRedBlue,
            block_id::kWhiteGreen, block_id::kGreenYellow,
            block_id::kYellowBlue, block_id::kBlueWhite,
            block_id::kOrangeWhite, block_id::kOrangeGreen,
            block_id::kOrangeYellow, block_id::kOrangeBlue,
            // centers
            block_id::kRed, block_id::kOrange, block_id::kWhite,
            block_id::kGreen, block_id::kYellow, block_id::kBlue
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