#include "Rewired_IControllerTemplateAxis6D.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::IControllerTemplateAxis6D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "IControllerTemplateAxis6D");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::IControllerTemplateAxis6D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::IControllerTemplateAxis6D::get_position()
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::IControllerTemplateAxis6D::get_positionPrev()
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::IControllerTemplateAxis6D::get_rotation()
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::IControllerTemplateAxis6D::get_rotationPrev()
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
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::IControllerTemplateAxis6D::get_positionX()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positionX");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::IControllerTemplateAxis6D::get_positionY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positionY");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::IControllerTemplateAxis6D::get_positionZ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positionZ");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::IControllerTemplateAxis6D::get_rotationX()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotationX");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::IControllerTemplateAxis6D::get_rotationY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotationY");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::IControllerTemplateAxis6D::get_rotationZ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotationZ");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
