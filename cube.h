#ifndef _CUBE_H
#define _CUBE_H

#include <cstdint>
#include <raylib.h>
#include <vector>

namespace cube {

  /**
   * block_id: an enum class that represents the different types of blocks on
   *    the cube.  Each block_id is a combination of the colors that
   *    are present on the block.  For example, a corner block with
   *    red, white, and green colors would have a block_id of
   *    kRedWhiteGreen
   */
  enum class block_id : uint8_t {
  NONE = 0,
  // Centers, Bit mask for colors
  kRed = 1, kOrange = 1 << 1, kWhite = 1 << 2,
  kGreen = 1 << 3, kYellow = 1 << 4, kBlue = 1 << 5,
  // Corners
  kRedWhiteGreen = kRed | kWhite | kGreen,
  kRedGreenYellow = kRed | kGreen | kYellow,
  kRedYellowBlue = kRed | kYellow | kBlue,
  kRedBlueWhite = kRed | kBlue | kWhite,
  kOrangeWhiteGreen = kOrange | kWhite | kGreen,
  kOrangeGreenYellow = kOrange | kGreen | kYellow,
  kOrangeYellowBlue = kOrange | kYellow | kBlue,
  kOrangeBlueWhite = kOrange | kBlue |	kWhite,
  // Edges
  kRedWhite = kRed | kWhite, kRedGreen = kRed | kGreen, 
  kRedYellow = kRed | kYellow, kRedBlue = kRed | kBlue,
  kWhiteGreen = kWhite | kGreen, kGreenYellow = kGreen | kYellow,
  kYellowBlue = kYellow | kBlue, kBlueWhite = kBlue | kWhite,
  kOrangeWhite = kOrange | kWhite, kOrangeGreen =	kOrange | kGreen,
  kOrangeYellow =	kOrange | kYellow, kOrangeBlue = kOrange |kBlue,
  };

  // enum color {
  //     w = C8A2FF,
  //     r = FFB7C5,
  //     b = A7D8FF,
  //     o = FFCBA4,
  //     g = A8FFE3,
  //     y = FFF3A3
  // };

  /**
   * block: block class that represents a single block on the cube
   * 
   * @param id: the block_id of the block, representing the colors that are
   *    present on the block
   * @param block_position: the position of the block on the cube,
   *    represented as a Vector3
   * 
   * block(): constructor that initializes the block with the given block_id
   * decodeColorID: a function that takes in a block_id and a color_bit and
   *    returns true if the color_bit is present in the block_id,
   *    false otherwise
   */
  class block
  {
    block_id id;
    Vector3 block_position;

    public:
      block (block_id bid) : id(bid) {};
      bool decodeColorID(block_id id, block_id color_bit);

  }; /* class block */

  /**
   * cube: cube class that represents the entire cube
   * 
   * @param block_ids: an array of block_ids that represents the different
   *    blocks on the cube this is present to easily 
   *    initialize the blocks vector with the
   *    correct block_ids
   * @param blocks: a vector of block objects that represents the different
   *    blocks on the cube
   * 
   * cube(): a constructor that initializes the blocks vector with the
   *    correct block_ids from the block_ids array
   */

  class cube
  {
    block_id block_ids[26];
    std::vector<block> blocks;

    public:
      cube();
  }; /* class cube */
} /* namesapce cube */

#endif /* _CUBE_H */
