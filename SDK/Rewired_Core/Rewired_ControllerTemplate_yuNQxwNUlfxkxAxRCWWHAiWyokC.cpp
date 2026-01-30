#include "Rewired_ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerTemplate::GetIl2CppClass(), "yuNQxwNUlfxkxAxRCWWHAiWyokC");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* elements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.IControllerTemplate", "System.Int32", "System.String", "Rewired.ControllerTemplate/tdpQHsLAKefMyDqYatncZIzdcJG[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)elements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* up, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* right, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* down, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* left, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* press)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.IControllerTemplate", "System.Int32", "System.String", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)up;
	params[4] = (intptr_t)right;
	params[5] = (intptr_t)down;
	params[6] = (intptr_t)left;
	params[7] = (intptr_t)press;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::get_value()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_value");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::get_valuePrev()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_valuePrev");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::IControllerTemplateButton* Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::get_up()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_up");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateButton*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateButton* Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::get_right()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_right");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateButton*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateButton* Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::get_down()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_down");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateButton*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateButton* Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::get_left()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_left");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateButton*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateButton* Rewired_Core::Rewired::ControllerTemplate_yuNQxwNUlfxkxAxRCWWHAiWyokC::get_press()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_press");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateButton*)returnValue;
}
