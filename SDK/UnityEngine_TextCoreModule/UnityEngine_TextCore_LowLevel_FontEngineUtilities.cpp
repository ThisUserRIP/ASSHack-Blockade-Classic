#include "UnityEngine_TextCore_LowLevel_FontEngineUtilities.h"

IL2CPP::Il2CppClass* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TextCoreModule.dll", "UnityEngine.TextCore.LowLevel", "FontEngineUtilities");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel::FontEngineUtilities::MaxValue(int32_t a, int32_t b, int32_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MaxValue", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
