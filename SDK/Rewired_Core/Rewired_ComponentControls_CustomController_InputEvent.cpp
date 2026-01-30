#include "Rewired_ComponentControls_CustomController_InputEvent.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ComponentControls::CustomController_InputEvent::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ComponentControls::CustomController::GetIl2CppClass(), "InputEvent");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ComponentControls::CustomController_InputEvent::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ComponentControls::CustomController_InputEvent::_ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType elementType, int32_t elementIndex, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ComponentControls.Data.CustomControllerElementSelector/ElementType", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementType;
	params[1] = (intptr_t)&elementIndex;
	params[2] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::CustomController_InputEvent::_ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType elementType, int32_t elementIndex, bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ComponentControls.Data.CustomControllerElementSelector/ElementType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementType;
	params[1] = (intptr_t)&elementIndex;
	params[2] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ComponentControls::CustomController_InputEvent::TargetMatches(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType elementType, int32_t elementIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TargetMatches", std::vector<std::string> { "Rewired.ComponentControls.Data.CustomControllerElementSelector/ElementType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementType;
	params[1] = (intptr_t)&elementIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::CustomController_InputEvent::Merge(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Merge", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::CustomController_InputEvent::Merge(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Merge", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
