#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vigilance_GaugeHead

#include "Basic.hpp"

#include "Vigilance_GaugeHead_classes.hpp"
#include "Vigilance_GaugeHead_parameters.hpp"


namespace SDK
{

// Function Vigilance_GaugeHead.Vigilance_GaugeHead_C.ExecuteUbergraph_Vigilance_GaugeHead
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVigilance_GaugeHead_C::ExecuteUbergraph_Vigilance_GaugeHead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vigilance_GaugeHead_C", "ExecuteUbergraph_Vigilance_GaugeHead");

	Params::Vigilance_GaugeHead_C_ExecuteUbergraph_Vigilance_GaugeHead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Vigilance_GaugeHead.Vigilance_GaugeHead_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVigilance_GaugeHead_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vigilance_GaugeHead_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

