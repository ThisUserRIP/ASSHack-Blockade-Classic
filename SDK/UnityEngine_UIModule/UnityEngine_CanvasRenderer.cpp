#include "UnityEngine_CanvasRenderer.h"

IL2CPP::Il2CppClass* UnityEngine_UIModule::UnityEngine::CanvasRenderer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UIModule.dll", "UnityEngine", "CanvasRenderer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UIModule::UnityEngine::CanvasRenderer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::set_hasPopInstruction(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hasPopInstruction", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UIModule::UnityEngine::CanvasRenderer::get_materialCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_materialCount");
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
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::set_materialCount(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_materialCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::set_popMaterialCount(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_popMaterialCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UIModule::UnityEngine::CanvasRenderer::get_absoluteDepth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_absoluteDepth");
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
bool UnityEngine_UIModule::UnityEngine::CanvasRenderer::get_hasMoved()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hasMoved");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UIModule::UnityEngine::CanvasRenderer::get_cullTransparentMesh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_cullTransparentMesh");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::set_cullTransparentMesh(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_cullTransparentMesh", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UIModule::UnityEngine::CanvasRenderer::get_cull()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_cull");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::set_cull(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_cull", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SetColor(UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetColor", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_UIModule::UnityEngine::CanvasRenderer::GetColor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetColor");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::EnableRectClipping(UnityEngine_CoreModule::UnityEngine::Rect rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableRectClipping", std::vector<std::string> { "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::set_clippingSoftness(UnityEngine_CoreModule::UnityEngine::Vector2 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_clippingSoftness", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::DisableRectClipping()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableRectClipping");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SetMaterial(UnityEngine_CoreModule::UnityEngine::Material* material, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMaterial", std::vector<std::string> { "UnityEngine.Material", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_UIModule::UnityEngine::CanvasRenderer::GetMaterial(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaterial", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SetPopMaterial(UnityEngine_CoreModule::UnityEngine::Material* material, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPopMaterial", std::vector<std::string> { "UnityEngine.Material", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SetTexture(UnityEngine_CoreModule::UnityEngine::Texture* texture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTexture", std::vector<std::string> { "UnityEngine.Texture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)texture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SetAlphaTexture(UnityEngine_CoreModule::UnityEngine::Texture* texture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAlphaTexture", std::vector<std::string> { "UnityEngine.Texture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)texture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SetMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMesh", std::vector<std::string> { "UnityEngine.Mesh" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mesh;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SetMaterial(UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Texture* texture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMaterial", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Texture" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)texture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_UIModule::UnityEngine::CanvasRenderer::GetMaterial()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaterial");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SplitUIVertexStreams(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* colors, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv0S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv1S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv2S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv3S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* normals, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* indices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SplitUIVertexStreams", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UIVertex>", "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<UnityEngine.Color32>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<System.Int32>" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)verts;
	params[1] = (intptr_t)positions;
	params[2] = (intptr_t)colors;
	params[3] = (intptr_t)uv0S;
	params[4] = (intptr_t)uv1S;
	params[5] = (intptr_t)uv2S;
	params[6] = (intptr_t)uv3S;
	params[7] = (intptr_t)normals;
	params[8] = (intptr_t)tangents;
	params[9] = (intptr_t)indices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::CreateUIVertexStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* colors, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv0S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv1S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv2S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv3S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* normals, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* indices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUIVertexStream", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UIVertex>", "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<UnityEngine.Color32>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<System.Int32>" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)verts;
	params[1] = (intptr_t)positions;
	params[2] = (intptr_t)colors;
	params[3] = (intptr_t)uv0S;
	params[4] = (intptr_t)uv1S;
	params[5] = (intptr_t)uv2S;
	params[6] = (intptr_t)uv3S;
	params[7] = (intptr_t)normals;
	params[8] = (intptr_t)tangents;
	params[9] = (intptr_t)indices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::AddUIVertexStream(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* verts, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* colors, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv0S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv1S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv2S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uv3S, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* normals, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* tangents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddUIVertexStream", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UIVertex>", "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<UnityEngine.Color32>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Collections.Generic.List`1<UnityEngine.Vector4>" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)verts;
	params[1] = (intptr_t)positions;
	params[2] = (intptr_t)colors;
	params[3] = (intptr_t)uv0S;
	params[4] = (intptr_t)uv1S;
	params[5] = (intptr_t)uv2S;
	params[6] = (intptr_t)uv3S;
	params[7] = (intptr_t)normals;
	params[8] = (intptr_t)tangents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SplitIndicesStreamsInternal(mscorlib::System::Object* verts, mscorlib::System::Object* indices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SplitIndicesStreamsInternal", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)verts;
	params[1] = (intptr_t)indices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SplitUIVertexStreamsInternal(mscorlib::System::Object* verts, mscorlib::System::Object* positions, mscorlib::System::Object* colors, mscorlib::System::Object* uv0S, mscorlib::System::Object* uv1S, mscorlib::System::Object* uv2S, mscorlib::System::Object* uv3S, mscorlib::System::Object* normals, mscorlib::System::Object* tangents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SplitUIVertexStreamsInternal", std::vector<std::string> { "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)verts;
	params[1] = (intptr_t)positions;
	params[2] = (intptr_t)colors;
	params[3] = (intptr_t)uv0S;
	params[4] = (intptr_t)uv1S;
	params[5] = (intptr_t)uv2S;
	params[6] = (intptr_t)uv3S;
	params[7] = (intptr_t)normals;
	params[8] = (intptr_t)tangents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::CreateUIVertexStreamInternal(mscorlib::System::Object* verts, mscorlib::System::Object* positions, mscorlib::System::Object* colors, mscorlib::System::Object* uv0S, mscorlib::System::Object* uv1S, mscorlib::System::Object* uv2S, mscorlib::System::Object* uv3S, mscorlib::System::Object* normals, mscorlib::System::Object* tangents, mscorlib::System::Object* indices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateUIVertexStreamInternal", std::vector<std::string> { "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)verts;
	params[1] = (intptr_t)positions;
	params[2] = (intptr_t)colors;
	params[3] = (intptr_t)uv0S;
	params[4] = (intptr_t)uv1S;
	params[5] = (intptr_t)uv2S;
	params[6] = (intptr_t)uv3S;
	params[7] = (intptr_t)normals;
	params[8] = (intptr_t)tangents;
	params[9] = (intptr_t)indices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::SetColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetColor_Injected", std::vector<std::string> { "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::GetColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetColor_Injected", std::vector<std::string> { "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::EnableRectClipping_Injected(UnityEngine_CoreModule::UnityEngine::Rect& rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableRectClipping_Injected", std::vector<std::string> { "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::CanvasRenderer::set_clippingSoftness_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_clippingSoftness_Injected", std::vector<std::string> { "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
