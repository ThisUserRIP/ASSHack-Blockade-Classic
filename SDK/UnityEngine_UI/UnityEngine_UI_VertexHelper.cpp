#include "UnityEngine_UI_VertexHelper.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::VertexHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "VertexHelper");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::VertexHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::_ctor(UnityEngine_CoreModule::UnityEngine::Mesh* m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Mesh" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)m;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::InitializeListIfRequired()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeListIfRequired");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UI::UnityEngine::UI::VertexHelper::get_currentVertCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_currentVertCount");
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
int32_t UnityEngine_UI::UnityEngine::UI::VertexHelper::get_currentIndexCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_currentIndexCount");
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
void UnityEngine_UI::UnityEngine::UI::VertexHelper::PopulateUIVertex(UnityEngine_TextRenderingModule::UnityEngine::UIVertex& vertex, int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateUIVertex", std::vector<std::string> { "UnityEngine.UIVertex&", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&vertex;
	params[1] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::SetUIVertex(UnityEngine_TextRenderingModule::UnityEngine::UIVertex vertex, int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUIVertex", std::vector<std::string> { "UnityEngine.UIVertex", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&vertex;
	params[1] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::FillMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillMesh", std::vector<std::string> { "UnityEngine.Mesh" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mesh;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::AddVert(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Color32 color, UnityEngine_CoreModule::UnityEngine::Vector4 uv0, UnityEngine_CoreModule::UnityEngine::Vector4 uv1, UnityEngine_CoreModule::UnityEngine::Vector4 uv2, UnityEngine_CoreModule::UnityEngine::Vector4 uv3, UnityEngine_CoreModule::UnityEngine::Vector3 normal, UnityEngine_CoreModule::UnityEngine::Vector4 tangent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddVert", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Color32", "UnityEngine.Vector4", "UnityEngine.Vector4", "UnityEngine.Vector4", "UnityEngine.Vector4", "UnityEngine.Vector3", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&color;
	params[2] = (intptr_t)&uv0;
	params[3] = (intptr_t)&uv1;
	params[4] = (intptr_t)&uv2;
	params[5] = (intptr_t)&uv3;
	params[6] = (intptr_t)&normal;
	params[7] = (intptr_t)&tangent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::AddVert(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Color32 color, UnityEngine_CoreModule::UnityEngine::Vector4 uv0, UnityEngine_CoreModule::UnityEngine::Vector4 uv1, UnityEngine_CoreModule::UnityEngine::Vector3 normal, UnityEngine_CoreModule::UnityEngine::Vector4 tangent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddVert", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Color32", "UnityEngine.Vector4", "UnityEngine.Vector4", "UnityEngine.Vector3", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&color;
	params[2] = (intptr_t)&uv0;
	params[3] = (intptr_t)&uv1;
	params[4] = (intptr_t)&normal;
	params[5] = (intptr_t)&tangent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::AddVert(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Color32 color, UnityEngine_CoreModule::UnityEngine::Vector4 uv0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddVert", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Color32", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&color;
	params[2] = (intptr_t)&uv0;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::AddVert(UnityEngine_TextRenderingModule::UnityEngine::UIVertex v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddVert", std::vector<std::string> { "UnityEngine.UIVertex" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::AddTriangle(int32_t idx0, int32_t idx1, int32_t idx2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTriangle", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&idx0;
	params[1] = (intptr_t)&idx1;
	params[2] = (intptr_t)&idx2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::AddUIVertexQuad(IL2CPP::Array<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddUIVertexQuad", std::vector<std::string> { "UnityEngine.UIVertex[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)verts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::AddUIVertexStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* indices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddUIVertexStream", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UIVertex>", "System.Collections.Generic.List`1<System.Int32>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)verts;
	params[1] = (intptr_t)indices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::AddUIVertexTriangleStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddUIVertexTriangleStream", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UIVertex>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)verts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::GetUIVertexStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUIVertexStream", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UIVertex>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::VertexHelper::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
