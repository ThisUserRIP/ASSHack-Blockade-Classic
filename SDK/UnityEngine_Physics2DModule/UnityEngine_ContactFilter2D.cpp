#include "UnityEngine_ContactFilter2D.h"

IL2CPP::Il2CppClass* UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.Physics2DModule.dll", "UnityEngine", "ContactFilter2D");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D::CheckConsistency()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckConsistency");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D::SetLayerMask(UnityEngine_CoreModule::UnityEngine::LayerMask layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLayerMask", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D::SetDepth(float minDepth, float maxDepth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDepth", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&minDepth;
	params[1] = (intptr_t)&maxDepth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D::CreateLegacyFilter(int32_t layerMask, float minDepth, float maxDepth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateLegacyFilter", std::vector<std::string> { "System.Int32", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&layerMask;
	params[1] = (intptr_t)&minDepth;
	params[2] = (intptr_t)&maxDepth;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D>(*(UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D::CheckConsistency_Injected(UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckConsistency_Injected", std::vector<std::string> { "UnityEngine.ContactFilter2D&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
