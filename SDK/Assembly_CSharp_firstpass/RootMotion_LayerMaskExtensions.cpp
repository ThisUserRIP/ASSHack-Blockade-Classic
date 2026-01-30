#include "RootMotion_LayerMaskExtensions.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "LayerMaskExtensions");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::Contains(UnityEngine_CoreModule::UnityEngine::LayerMask mask, int32_t layer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Contains", std::vector<std::string> { "UnityEngine.LayerMask", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mask;
	params[1] = (intptr_t)&layer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::LayerMask Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::Create(IL2CPP::Array<mscorlib::System::String*>* layerNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.String[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)layerNames;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LayerMask Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::Create(IL2CPP::Array<int32_t>* layerNumbers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Int32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)layerNumbers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LayerMask Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::NamesToMask(IL2CPP::Array<mscorlib::System::String*>* layerNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NamesToMask", std::vector<std::string> { "System.String[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)layerNames;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LayerMask Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::LayerNumbersToMask(IL2CPP::Array<int32_t>* layerNumbers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LayerNumbersToMask", std::vector<std::string> { "System.Int32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)layerNumbers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LayerMask Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::Inverse(UnityEngine_CoreModule::UnityEngine::LayerMask original)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Inverse", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&original;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LayerMask Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::AddToMask(UnityEngine_CoreModule::UnityEngine::LayerMask original, IL2CPP::Array<mscorlib::System::String*>* layerNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToMask", std::vector<std::string> { "UnityEngine.LayerMask", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&original;
	params[1] = (intptr_t)layerNames;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::LayerMask Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::RemoveFromMask(UnityEngine_CoreModule::UnityEngine::LayerMask original, IL2CPP::Array<mscorlib::System::String*>* layerNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveFromMask", std::vector<std::string> { "UnityEngine.LayerMask", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&original;
	params[1] = (intptr_t)layerNames;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<mscorlib::System::String*>* Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::MaskToNames(UnityEngine_CoreModule::UnityEngine::LayerMask original)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MaskToNames", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&original;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<int32_t>* Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::MaskToNumbers(UnityEngine_CoreModule::UnityEngine::LayerMask original)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MaskToNumbers", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&original;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
mscorlib::System::String* Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::MaskToString(UnityEngine_CoreModule::UnityEngine::LayerMask original)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MaskToString", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&original;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp_firstpass::RootMotion::LayerMaskExtensions::MaskToString(UnityEngine_CoreModule::UnityEngine::LayerMask original, mscorlib::System::String* delimiter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MaskToString", std::vector<std::string> { "UnityEngine.LayerMask", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&original;
	params[1] = (intptr_t)delimiter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
