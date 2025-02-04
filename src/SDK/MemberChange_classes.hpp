#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MemberChange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MemberChange.MemberChange_C
// 0x0060 (0x04D8 - 0x0478)
class UMemberChange_C final : public UEndMemberChangeWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       Loop;                                              // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Menu_In;                                           // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Arrow_Down;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Arrow_Down_s;                                      // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Arrow_Up;                                          // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Arrow_Up_s;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BaseBg;                                            // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Frame;                                             // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Title;                                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_ReportTitle;                                   // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              WindowBase;                                        // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MemberChange(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MemberChange_C">();
	}
	static class UMemberChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMemberChange_C>();
	}
};
static_assert(alignof(UMemberChange_C) == 0x000008, "Wrong alignment on UMemberChange_C");
static_assert(sizeof(UMemberChange_C) == 0x0004D8, "Wrong size on UMemberChange_C");
static_assert(offsetof(UMemberChange_C, UberGraphFrame) == 0x000478, "Member 'UMemberChange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Loop) == 0x000480, "Member 'UMemberChange_C::Loop' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Menu_In) == 0x000488, "Member 'UMemberChange_C::Menu_In' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Arrow_Down) == 0x000490, "Member 'UMemberChange_C::Arrow_Down' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Arrow_Down_s) == 0x000498, "Member 'UMemberChange_C::Arrow_Down_s' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Arrow_Up) == 0x0004A0, "Member 'UMemberChange_C::Arrow_Up' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Arrow_Up_s) == 0x0004A8, "Member 'UMemberChange_C::Arrow_Up_s' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, BaseBg) == 0x0004B0, "Member 'UMemberChange_C::BaseBg' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Frame) == 0x0004B8, "Member 'UMemberChange_C::Frame' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Icon_Title) == 0x0004C0, "Member 'UMemberChange_C::Icon_Title' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, Txt_ReportTitle) == 0x0004C8, "Member 'UMemberChange_C::Txt_ReportTitle' has a wrong offset!");
static_assert(offsetof(UMemberChange_C, WindowBase) == 0x0004D0, "Member 'UMemberChange_C::WindowBase' has a wrong offset!");

}

