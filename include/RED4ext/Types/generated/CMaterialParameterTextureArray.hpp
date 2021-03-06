#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct ITexture;

struct CMaterialParameterTextureArray : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterTextureArray";
    static constexpr const char* ALIAS = NAME;

    Ref<ITexture> texture; // 40
};
RED4EXT_ASSERT_SIZE(CMaterialParameterTextureArray, 0x58);
} // namespace RED4ext
