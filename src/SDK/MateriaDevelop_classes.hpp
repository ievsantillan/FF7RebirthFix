#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MateriaDevelop

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MateriaDevelop.MateriaDevelop_C
// 0x0018 (0x04D0 - 0x04B8)
class UMateriaDevelop_C final : public UEndWorldReportMateriaPage
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x04B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMateriaDevelop_Info_C*                 MateriaDevelop_Info;                               // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MateriaDevelop_C">();
	}
	static class UMateriaDevelop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMateriaDevelop_C>();
	}
};
static_assert(alignof(UMateriaDevelop_C) == 0x000008, "Wrong alignment on UMateriaDevelop_C");
static_assert(sizeof(UMateriaDevelop_C) == 0x0004D0, "Wrong size on UMateriaDevelop_C");
static_assert(offsetof(UMateriaDevelop_C, Out) == 0x0004B8, "Member 'UMateriaDevelop_C::Out' has a wrong offset!");
static_assert(offsetof(UMateriaDevelop_C, In) == 0x0004C0, "Member 'UMateriaDevelop_C::In' has a wrong offset!");
static_assert(offsetof(UMateriaDevelop_C, MateriaDevelop_Info) == 0x0004C8, "Member 'UMateriaDevelop_C::MateriaDevelop_Info' has a wrong offset!");

}

