#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Enemy_MoveDefBase_Around

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Enemy_MoveDefBase_Around.Enemy_MoveDefBase_Around_C
// 0x0000 (0x00C8 - 0x00C8)
class UEnemy_MoveDefBase_Around_C : public UEndAIMoveDefinitionAround
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Enemy_MoveDefBase_Around_C">();
	}
	static class UEnemy_MoveDefBase_Around_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnemy_MoveDefBase_Around_C>();
	}
};
static_assert(alignof(UEnemy_MoveDefBase_Around_C) == 0x000008, "Wrong alignment on UEnemy_MoveDefBase_Around_C");
static_assert(sizeof(UEnemy_MoveDefBase_Around_C) == 0x0000C8, "Wrong size on UEnemy_MoveDefBase_Around_C");

}

