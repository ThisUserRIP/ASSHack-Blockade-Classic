#include "UnityEngine_Experimental_Rendering_Universal_LibTessDotNet_Geom.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet", "Geom");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::IsWindingInside(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::WindingRule rule, int32_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsWindingInside", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.WindingRule", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rule;
	params[1] = (intptr_t)&n;
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::VertCCW(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VertCCW", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)u;
	params[1] = (intptr_t)v;
	params[2] = (intptr_t)w;
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::VertEq(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* lhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VertEq", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)lhs;
	params[1] = (intptr_t)rhs;
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::VertLeq(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* lhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VertLeq", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)lhs;
	params[1] = (intptr_t)rhs;
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
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::EdgeEval(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EdgeEval", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)u;
	params[1] = (intptr_t)v;
	params[2] = (intptr_t)w;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::EdgeSign(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EdgeSign", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)u;
	params[1] = (intptr_t)v;
	params[2] = (intptr_t)w;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::TransLeq(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* lhs, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransLeq", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)lhs;
	params[1] = (intptr_t)rhs;
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
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::TransEval(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransEval", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)u;
	params[1] = (intptr_t)v;
	params[2] = (intptr_t)w;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::TransSign(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TransSign", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)u;
	params[1] = (intptr_t)v;
	params[2] = (intptr_t)w;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::EdgeGoesLeft(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EdgeGoesLeft", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Edge" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::EdgeGoesRight(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EdgeGoesRight", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Edge" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
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
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::VertL1dist(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* u, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VertL1dist", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)u;
	params[1] = (intptr_t)v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::AddWinding(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eDst, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eSrc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWinding", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Edge", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Edge" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eDst;
	params[1] = (intptr_t)eSrc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::Interpolate(float a, float x, float b, float y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Interpolate", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&b;
	params[3] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::Swap(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex& a, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex& b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Swap", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex&", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Geom::EdgeIntersect(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* o1, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* d1, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* o2, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* d2, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EdgeIntersect", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex", "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.MeshUtils/Vertex" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)o1;
	params[1] = (intptr_t)d1;
	params[2] = (intptr_t)o2;
	params[3] = (intptr_t)d2;
	params[4] = (intptr_t)v;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
