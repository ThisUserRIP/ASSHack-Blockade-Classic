#include "UnityEngine_Rendering_CoreMatrixUtils.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "CoreMatrixUtils");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::MatrixTimesTranslation(UnityEngine_CoreModule::UnityEngine::Matrix4x4& inOutMatrix, UnityEngine_CoreModule::UnityEngine::Vector3 translation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatrixTimesTranslation", std::vector<std::string> { "UnityEngine.Matrix4x4&", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&inOutMatrix;
	params[1] = (intptr_t)&translation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::TranslationTimesMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4& inOutMatrix, UnityEngine_CoreModule::UnityEngine::Vector3 translation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TranslationTimesMatrix", std::vector<std::string> { "UnityEngine.Matrix4x4&", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&inOutMatrix;
	params[1] = (intptr_t)&translation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Matrix4x4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::MultiplyPerspectiveMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 perspective, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyPerspectiveMatrix", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&perspective;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Matrix4x4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Matrix4x4>(*(UnityEngine_CoreModule::UnityEngine::Matrix4x4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Matrix4x4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::MultiplyOrthoMatrixCentered(UnityEngine_CoreModule::UnityEngine::Matrix4x4 ortho, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyOrthoMatrixCentered", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ortho;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Matrix4x4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Matrix4x4>(*(UnityEngine_CoreModule::UnityEngine::Matrix4x4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Matrix4x4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::MultiplyGenericOrthoMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 ortho, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyGenericOrthoMatrix", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ortho;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Matrix4x4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Matrix4x4>(*(UnityEngine_CoreModule::UnityEngine::Matrix4x4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Matrix4x4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::MultiplyOrthoMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 ortho, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs, bool centered)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyOrthoMatrix", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ortho;
	params[1] = (intptr_t)&rhs;
	params[2] = (intptr_t)&centered;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Matrix4x4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Matrix4x4>(*(UnityEngine_CoreModule::UnityEngine::Matrix4x4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Matrix4x4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreMatrixUtils::MultiplyProjectionMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 projMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs, bool orthoCentered)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MultiplyProjectionMatrix", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&projMatrix;
	params[1] = (intptr_t)&rhs;
	params[2] = (intptr_t)&orthoCentered;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Matrix4x4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Matrix4x4>(*(UnityEngine_CoreModule::UnityEngine::Matrix4x4*)il2cpp_object_unbox(returnValue));
}
