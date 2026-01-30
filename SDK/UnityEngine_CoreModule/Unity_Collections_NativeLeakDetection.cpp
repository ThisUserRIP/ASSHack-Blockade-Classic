#include "Unity_Collections_NativeLeakDetection.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Collections::NativeLeakDetection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "Unity.Collections", "NativeLeakDetection");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Collections::NativeLeakDetection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::Unity::Collections::NativeLeakDetection::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
