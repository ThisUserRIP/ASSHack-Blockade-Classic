#include "UnityEngine_Experimental_Rendering_Universal_LibTessDotNet_Vec3.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet", "Vec3");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::get_Item(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::set_Item(int32_t index, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Item", std::vector<std::string> { "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::Sub(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& lhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& rhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sub", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3&", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3&", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	params[2] = (intptr_t)&result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::Neg(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Neg", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::Dot(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& u, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& v, float& dot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dot", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3&", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3&", "System.Single&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&u;
	params[1] = (intptr_t)&v;
	params[2] = (intptr_t)&dot;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::Normalize(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Normalize", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::LongAxis(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LongAxis", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
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
mscorlib::System::String* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
