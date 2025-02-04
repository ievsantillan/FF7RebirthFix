#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shop_List_WeaponReset_Cell

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Shop_List_WeaponReset_Cell.Shop_List_WeaponReset_Cell_C
// 0x0028 (0x03F0 - 0x03C8)
class UShop_List_WeaponReset_Cell_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       BtnNormalHover;                                    // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndButton*                             Btn_List;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_List_Item_BtnTxt_C*               BtnTxt;                                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              HoverLight;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_List_Item_BtnTxt_C*               Shop_List_BtnTxt;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Shop_List_WeaponReset_Cell_C">();
	}
	static class UShop_List_WeaponReset_Cell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShop_List_WeaponReset_Cell_C>();
	}
};
static_assert(alignof(UShop_List_WeaponReset_Cell_C) == 0x000008, "Wrong alignment on UShop_List_WeaponReset_Cell_C");
static_assert(sizeof(UShop_List_WeaponReset_Cell_C) == 0x0003F0, "Wrong size on UShop_List_WeaponReset_Cell_C");
static_assert(offsetof(UShop_List_WeaponReset_Cell_C, BtnNormalHover) == 0x0003C8, "Member 'UShop_List_WeaponReset_Cell_C::BtnNormalHover' has a wrong offset!");
static_assert(offsetof(UShop_List_WeaponReset_Cell_C, Btn_List) == 0x0003D0, "Member 'UShop_List_WeaponReset_Cell_C::Btn_List' has a wrong offset!");
static_assert(offsetof(UShop_List_WeaponReset_Cell_C, BtnTxt) == 0x0003D8, "Member 'UShop_List_WeaponReset_Cell_C::BtnTxt' has a wrong offset!");
static_assert(offsetof(UShop_List_WeaponReset_Cell_C, HoverLight) == 0x0003E0, "Member 'UShop_List_WeaponReset_Cell_C::HoverLight' has a wrong offset!");
static_assert(offsetof(UShop_List_WeaponReset_Cell_C, Shop_List_BtnTxt) == 0x0003E8, "Member 'UShop_List_WeaponReset_Cell_C::Shop_List_BtnTxt' has a wrong offset!");

}

