#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AreaReport_Cell

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AreaReport_Cell.AreaReport_Cell_C
// 0x0030 (0x03F8 - 0x03C8)
class UAreaReport_Cell_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       BtnNormalHover;                                    // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndButton*                             Btn_List;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              HoverLight;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_Icon_Now_C*                   Icon_Now;                                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Report;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Name;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AreaReport_Cell_C">();
	}
	static class UAreaReport_Cell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAreaReport_Cell_C>();
	}
};
static_assert(alignof(UAreaReport_Cell_C) == 0x000008, "Wrong alignment on UAreaReport_Cell_C");
static_assert(sizeof(UAreaReport_Cell_C) == 0x0003F8, "Wrong size on UAreaReport_Cell_C");
static_assert(offsetof(UAreaReport_Cell_C, BtnNormalHover) == 0x0003C8, "Member 'UAreaReport_Cell_C::BtnNormalHover' has a wrong offset!");
static_assert(offsetof(UAreaReport_Cell_C, Btn_List) == 0x0003D0, "Member 'UAreaReport_Cell_C::Btn_List' has a wrong offset!");
static_assert(offsetof(UAreaReport_Cell_C, HoverLight) == 0x0003D8, "Member 'UAreaReport_Cell_C::HoverLight' has a wrong offset!");
static_assert(offsetof(UAreaReport_Cell_C, Icon_Now) == 0x0003E0, "Member 'UAreaReport_Cell_C::Icon_Now' has a wrong offset!");
static_assert(offsetof(UAreaReport_Cell_C, Icon_Report) == 0x0003E8, "Member 'UAreaReport_Cell_C::Icon_Report' has a wrong offset!");
static_assert(offsetof(UAreaReport_Cell_C, Txt_Name) == 0x0003F0, "Member 'UAreaReport_Cell_C::Txt_Name' has a wrong offset!");

}

