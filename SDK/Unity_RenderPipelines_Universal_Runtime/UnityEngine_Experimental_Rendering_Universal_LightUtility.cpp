#include "UnityEngine_Experimental_Rendering_Universal_LightUtility.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal", "LightUtility");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::CheckForChange(int32_t a, int32_t& b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckForChange", std::vector<std::string> { "System.Int32", "System.Int32&" });
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::CheckForChange(float a, float& b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckForChange", std::vector<std::string> { "System.Single", "System.Single&" });
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::CheckForChange(bool a, bool& b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckForChange", std::vector<std::string> { "System.Boolean", "System.Boolean&" });
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
UnityEngine_CoreModule::UnityEngine::Bounds Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::GenerateParametricMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, float radius, float falloffDistance, float angle, int32_t sides)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateParametricMesh", std::vector<std::string> { "UnityEngine.Mesh", "System.Single", "System.Single", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&falloffDistance;
	params[3] = (intptr_t)&angle;
	params[4] = (intptr_t)&sides;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Bounds ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Bounds));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Bounds>(*(UnityEngine_CoreModule::UnityEngine::Bounds*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Bounds Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::GenerateSpriteMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Sprite* sprite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateSpriteMesh", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Sprite" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)sprite;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Bounds ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Bounds));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Bounds>(*(UnityEngine_CoreModule::UnityEngine::Bounds*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::GetFalloffShape(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* shapePath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFalloffShape", std::vector<std::string> { "UnityEngine.Vector3[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)shapePath;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Bounds Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LightUtility::GenerateShapeMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* shapePath, float falloffDistance)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateShapeMesh", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Vector3[]", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)shapePath;
	params[2] = (intptr_t)&falloffDistance;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Bounds ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Bounds));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Bounds>(*(UnityEngine_CoreModule::UnityEngine::Bounds*)il2cpp_object_unbox(returnValue));
}
