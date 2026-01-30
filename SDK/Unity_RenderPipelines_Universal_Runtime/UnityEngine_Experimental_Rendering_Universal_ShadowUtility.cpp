#include "UnityEngine_Experimental_Rendering_Universal_ShadowUtility.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal", "ShadowUtility");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::CreateEdge(int32_t triangleIndexA, int32_t triangleIndexB, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEdge", std::vector<std::string> { "System.Int32", "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<System.Int32>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&triangleIndexA;
	params[1] = (intptr_t)&triangleIndexB;
	params[2] = (intptr_t)vertices;
	params[3] = (intptr_t)triangles;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>(*(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::PopulateEdgeArray(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>* edges)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateEdgeArray", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<System.Int32>", "System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)vertices;
	params[1] = (intptr_t)triangles;
	params[2] = (intptr_t)edges;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::IsOutsideEdge(int32_t edgeIndex, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>* edgesToProcess)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsOutsideEdge", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&edgeIndex;
	params[1] = (intptr_t)edgesToProcess;
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::SortEdges(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>* edgesToProcess)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortEdges", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)edgesToProcess;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::CreateShadowTriangles(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color>* colors, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility_Edge>* edges)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateShadowTriangles", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<UnityEngine.Color>", "System.Collections.Generic.List`1<System.Int32>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)vertices;
	params[1] = (intptr_t)colors;
	params[2] = (intptr_t)triangles;
	params[3] = (intptr_t)tangents;
	params[4] = (intptr_t)edges;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::InterpCustomVertexData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 position, IL2CPP::Array<mscorlib::System::Object*>* data, IL2CPP::Array<float>* weights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InterpCustomVertexData", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3", "System.Object[]", "System.Single[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)weights;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::InitializeTangents(int32_t tangentsToAdd, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeTangents", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector4>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tangentsToAdd;
	params[1] = (intptr_t)tangents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::GenerateShadowMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* shapePath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateShadowMesh", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Vector3[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)shapePath;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowUtility::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
