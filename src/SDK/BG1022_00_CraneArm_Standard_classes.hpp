#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BG1022_00_CraneArm_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BG1022_00_CraneArm_Standard.BG1022_00_CraneArm_Standard_C
// 0x0000 (0x0810 - 0x0810)
class ABG1022_00_CraneArm_Standard_C final : public AEndEnvironmentSkeletalMeshActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BG1022_00_CraneArm_Standard_C">();
	}
	static class ABG1022_00_CraneArm_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABG1022_00_CraneArm_Standard_C>();
	}
};
static_assert(alignof(ABG1022_00_CraneArm_Standard_C) == 0x000008, "Wrong alignment on ABG1022_00_CraneArm_Standard_C");
static_assert(sizeof(ABG1022_00_CraneArm_Standard_C) == 0x000810, "Wrong size on ABG1022_00_CraneArm_Standard_C");

}

