#include "Rewired_ComponentControls_TouchInteractable_InteractionStateTransitionArgs.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ComponentControls::TouchInteractable::GetIl2CppClass(), "InteractionStateTransitionArgs");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ComponentControls::TouchInteractable* Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_sender()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sender");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ComponentControls::TouchInteractable*)returnValue;
}
Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_state()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_state");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState>(*(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState*)il2cpp_object_unbox(returnValue));
}
float Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::get_duration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_duration");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs::MjXoIGnuqPKtRkGyqidueJiQoOK(Rewired_Core::Rewired::ComponentControls::TouchInteractable* A_1, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState A_2, float A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MjXoIGnuqPKtRkGyqidueJiQoOK");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
