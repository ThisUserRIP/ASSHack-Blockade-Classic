#include "UnityEngine_Collider2D.h"

IL2CPP::Il2CppClass* UnityEngine_Physics2DModule::UnityEngine::Collider2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.Physics2DModule.dll", "UnityEngine", "Collider2D");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_Physics2DModule::UnityEngine::Collider2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Bounds UnityEngine_Physics2DModule::UnityEngine::Collider2D::get_bounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_bounds");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Bounds ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Bounds));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Bounds>(*(UnityEngine_CoreModule::UnityEngine::Bounds*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_Physics2DModule::UnityEngine::Collider2D::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_Physics2DModule::UnityEngine::Collider2D::get_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_bounds_Injected", std::vector<std::string> { "UnityEngine.Bounds&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
