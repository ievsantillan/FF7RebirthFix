#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Command_ReserveEffect

#include "Basic.hpp"

#include "Command_ReserveEffect_classes.hpp"
#include "Command_ReserveEffect_parameters.hpp"


namespace SDK
{

// Function Command_ReserveEffect.Command_ReserveEffect_C.ExecuteUbergraph_Command_ReserveEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommand_ReserveEffect_C::ExecuteUbergraph_Command_ReserveEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Command_ReserveEffect_C", "ExecuteUbergraph_Command_ReserveEffect");

	Params::Command_ReserveEffect_C_ExecuteUbergraph_Command_ReserveEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Command_ReserveEffect.Command_ReserveEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommand_ReserveEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Command_ReserveEffect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

