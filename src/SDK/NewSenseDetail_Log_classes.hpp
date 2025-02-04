#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewSenseDetail_Log

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewSenseDetail_Log.NewSenseDetail_Log_C
// 0x0008 (0x03E0 - 0x03D8)
class UNewSenseDetail_Log_C final : public UEndNewSenseDetailLog
{
public:
	class UEndTiledImage*                         Line;                                              // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewSenseDetail_Log_C">();
	}
	static class UNewSenseDetail_Log_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewSenseDetail_Log_C>();
	}
};
static_assert(alignof(UNewSenseDetail_Log_C) == 0x000008, "Wrong alignment on UNewSenseDetail_Log_C");
static_assert(sizeof(UNewSenseDetail_Log_C) == 0x0003E0, "Wrong size on UNewSenseDetail_Log_C");
static_assert(offsetof(UNewSenseDetail_Log_C, Line) == 0x0003D8, "Member 'UNewSenseDetail_Log_C::Line' has a wrong offset!");

}

