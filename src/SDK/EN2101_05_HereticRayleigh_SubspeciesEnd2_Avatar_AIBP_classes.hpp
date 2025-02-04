#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EN2101_05_HereticRayleigh_SubspeciesEnd2_AIBP_classes.hpp"
#include "EndGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C
// 0x0010 (0x1100 - 0x10F0)
class AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C final : public AEN2101_05_HereticRayleigh_SubspeciesEnd2_AIBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C; // 0x10F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                          ReadyPenalty;                                      // 0x10F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CheckPenalty;                                      // 0x10F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CheckPenaltyDead;                                  // 0x10FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP(int32 EntryPoint);
	void OnMotionStateMessageBegin(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue, float InTotalDuration);
	void AsyncCheckConditionInvoke();
	void OnAITimerInvoke(class FName ID);
	void OnActionTopPriorityInvoke(class FName TopPriorityActionId);
	void OnProwlInvoke(EEndAIProwlCallType CallType);
	void OnUseAbilityInvoke(class FName AbilityId);
	void OnMotionMessageInvoke(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue);
	void OnStartBattleInvoke();
	void OnDead(bool AtBurst);
	void OnActionInvoke(EEndAIIntervalType IntervalType, class FName ExtraIntervalId);
	void OnPartsBreak(class FName PartsID);
	void OnGroupMessageInvoke(const struct FEndAIBattleGroupNotifyInfo& NotifyInfo);
	void InpActEvt_Y_K2Node_InputKeyEvent_0(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C">();
	}
	static class AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C>();
	}
};
static_assert(alignof(AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C) == 0x000010, "Wrong alignment on AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C");
static_assert(sizeof(AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C) == 0x001100, "Wrong size on AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C");
static_assert(offsetof(AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C, UberGraphFrame_EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C) == 0x0010F0, "Member 'AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::UberGraphFrame_EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C' has a wrong offset!");
static_assert(offsetof(AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C, ReadyPenalty) == 0x0010F8, "Member 'AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::ReadyPenalty' has a wrong offset!");
static_assert(offsetof(AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C, CheckPenalty) == 0x0010F9, "Member 'AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::CheckPenalty' has a wrong offset!");
static_assert(offsetof(AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C, CheckPenaltyDead) == 0x0010FA, "Member 'AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::CheckPenaltyDead' has a wrong offset!");

}

