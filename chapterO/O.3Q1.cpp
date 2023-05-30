#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // Q a 加上viewed
    myArticleFlags |= option_viewed; 
    // Q b 检测是否deleted
    std::cout << (myArticleFlags & option_deleted ? "Deleted" : "Not deleted") << '\n';
    // Q c 去掉favorited
    myArticleFlags &= ~option_favorited;
    
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}