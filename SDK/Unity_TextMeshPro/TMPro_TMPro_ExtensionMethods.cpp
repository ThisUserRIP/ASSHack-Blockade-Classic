#include "TMPro_TMPro_ExtensionMethods.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMPro_ExtensionMethods");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<int32_t>* Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::ToIntArray(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToIntArray", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
mscorlib::System::String* Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::ArrayToString(IL2CPP::Array<wchar_t>* chars)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ArrayToString", std::vector<std::string> { "System.Char[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)chars;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::IntToString(IL2CPP::Array<int32_t>* unicodes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IntToString", std::vector<std::string> { "System.Int32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)unicodes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::UintToString(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* unicodes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UintToString", std::vector<std::string> { "System.Collections.Generic.List`1<System.UInt32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)unicodes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::IntToString(IL2CPP::Array<int32_t>* unicodes, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IntToString", std::vector<std::string> { "System.Int32[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)unicodes;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::Compare(UnityEngine_CoreModule::UnityEngine::Color32 a, UnityEngine_CoreModule::UnityEngine::Color32 b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "UnityEngine.Color32", "UnityEngine.Color32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
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
bool Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::CompareRGB(UnityEngine_CoreModule::UnityEngine::Color32 a, UnityEngine_CoreModule::UnityEngine::Color32 b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareRGB", std::vector<std::string> { "UnityEngine.Color32", "UnityEngine.Color32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
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
bool Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::Compare(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
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
bool Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::CompareRGB(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareRGB", std::vector<std::string> { "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
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
UnityEngine_CoreModule::UnityEngine::Color32 Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::Multiply(UnityEngine_CoreModule::UnityEngine::Color32 c1, UnityEngine_CoreModule::UnityEngine::Color32 c2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Multiply", std::vector<std::string> { "UnityEngine.Color32", "UnityEngine.Color32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&c1;
	params[1] = (intptr_t)&c2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color32 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color32));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color32>(*(UnityEngine_CoreModule::UnityEngine::Color32*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Color32 Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::Tint(UnityEngine_CoreModule::UnityEngine::Color32 c1, UnityEngine_CoreModule::UnityEngine::Color32 c2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Tint", std::vector<std::string> { "UnityEngine.Color32", "UnityEngine.Color32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&c1;
	params[1] = (intptr_t)&c2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color32 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color32));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color32>(*(UnityEngine_CoreModule::UnityEngine::Color32*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Color32 Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::Tint(UnityEngine_CoreModule::UnityEngine::Color32 c1, float tint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Tint", std::vector<std::string> { "UnityEngine.Color32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&c1;
	params[1] = (intptr_t)&tint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color32 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color32));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color32>(*(UnityEngine_CoreModule::UnityEngine::Color32*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Color Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::MinAlpha(UnityEngine_CoreModule::UnityEngine::Color c1, UnityEngine_CoreModule::UnityEngine::Color c2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MinAlpha", std::vector<std::string> { "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&c1;
	params[1] = (intptr_t)&c2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
bool Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::Compare(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2, int32_t accuracy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&v1;
	params[1] = (intptr_t)&v2;
	params[2] = (intptr_t)&accuracy;
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
bool Unity_TextMeshPro::TMPro::TMPro_ExtensionMethods::Compare(UnityEngine_CoreModule::UnityEngine::Quaternion q1, UnityEngine_CoreModule::UnityEngine::Quaternion q2, int32_t accuracy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&q1;
	params[1] = (intptr_t)&q2;
	params[2] = (intptr_t)&accuracy;
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
