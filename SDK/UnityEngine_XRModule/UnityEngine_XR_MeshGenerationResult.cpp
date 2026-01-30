#include "UnityEngine_XR_MeshGenerationResult.h"

IL2CPP::Il2CppClass* UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.XRModule.dll", "UnityEngine.XR", "MeshGenerationResult");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_XRModule::UnityEngine::XR::MeshId UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::get_MeshId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MeshId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_XRModule::UnityEngine::XR::MeshId ret;
		std::memset(&ret, 0, sizeof(UnityEngine_XRModule::UnityEngine::XR::MeshId));
		return ret;
	}
	return static_cast<UnityEngine_XRModule::UnityEngine::XR::MeshId>(*(UnityEngine_XRModule::UnityEngine::XR::MeshId*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Mesh* UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::get_Mesh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Mesh");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Mesh*)returnValue;
}
UnityEngine_PhysicsModule::UnityEngine::MeshCollider* UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::get_MeshCollider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MeshCollider");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_PhysicsModule::UnityEngine::MeshCollider*)returnValue;
}
UnityEngine_XRModule::UnityEngine::XR::MeshGenerationStatus UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::get_Status()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Status");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_XRModule::UnityEngine::XR::MeshGenerationStatus ret;
		std::memset(&ret, 0, sizeof(UnityEngine_XRModule::UnityEngine::XR::MeshGenerationStatus));
		return ret;
	}
	return static_cast<UnityEngine_XRModule::UnityEngine::XR::MeshGenerationStatus>(*(UnityEngine_XRModule::UnityEngine::XR::MeshGenerationStatus*)il2cpp_object_unbox(returnValue));
}
UnityEngine_XRModule::UnityEngine::XR::MeshVertexAttributes UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::get_Attributes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Attributes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_XRModule::UnityEngine::XR::MeshVertexAttributes ret;
		std::memset(&ret, 0, sizeof(UnityEngine_XRModule::UnityEngine::XR::MeshVertexAttributes));
		return ret;
	}
	return static_cast<UnityEngine_XRModule::UnityEngine::XR::MeshVertexAttributes>(*(UnityEngine_XRModule::UnityEngine::XR::MeshVertexAttributes*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
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
bool UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::Equals(UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.XR.MeshGenerationResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
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
int32_t UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
