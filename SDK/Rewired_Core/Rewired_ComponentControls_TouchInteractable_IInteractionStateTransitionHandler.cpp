#include "Rewired_ComponentControls_TouchInteractable_IInteractionStateTransitionHandler.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ComponentControls::TouchInteractable::GetIl2CppClass(), "IInteractionStateTransitionHandler");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler::OnInteractionStateTransition(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnInteractionStateTransition", std::vector<std::string> { "Rewired.ComponentControls.TouchInteractable/InteractionStateTransitionArgs" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
