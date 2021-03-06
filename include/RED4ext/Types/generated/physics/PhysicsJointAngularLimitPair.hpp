#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/physics/PhysicsJointLimitBase.hpp>
#include <RED4ext/Types/generated/physics/PhysicsJointMotion.hpp>

namespace RED4ext
{
namespace physics { 
struct PhysicsJointAngularLimitPair : physics::PhysicsJointLimitBase
{
    static constexpr const char* NAME = "physicsPhysicsJointAngularLimitPair";
    static constexpr const char* ALIAS = NAME;

    float lower; // 20
    float upper; // 24
    physics::PhysicsJointMotion twist; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(PhysicsJointAngularLimitPair, 0x30);
} // namespace physics
} // namespace RED4ext
