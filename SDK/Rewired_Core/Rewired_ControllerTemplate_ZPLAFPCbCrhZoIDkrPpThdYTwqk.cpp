#include "Rewired_ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerTemplate::GetIl2CppClass(), "ZPLAFPCbCrhZoIDkrPpThdYTwqk");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplateElementType elementType, IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* elements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.IControllerTemplate", "System.Int32", "System.String", "Rewired.ControllerTemplateElementType", "Rewired.ControllerTemplate/tdpQHsLAKefMyDqYatncZIzdcJG[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)&elementType;
	params[4] = (intptr_t)elements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_position()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_position");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_positionPrev()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positionPrev");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_rotation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotation");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_rotationPrev()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotationPrev");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_positionX()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positionX");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_positionY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positionY");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_positionZ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positionZ");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_rotationX()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotationX");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_rotationY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotationY");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::ControllerTemplate_ZPLAFPCbCrhZoIDkrPpThdYTwqk::get_rotationZ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotationZ");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
