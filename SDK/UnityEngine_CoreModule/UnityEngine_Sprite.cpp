#include "UnityEngine_Sprite.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Sprite::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Sprite");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Sprite::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Sprite::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Sprite::GetPackingMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPackingMode");
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
int32_t UnityEngine_CoreModule::UnityEngine::Sprite::GetPacked()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPacked");
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
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_CoreModule::UnityEngine::Sprite::GetTextureRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTextureRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 UnityEngine_CoreModule::UnityEngine::Sprite::GetInnerUVs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInnerUVs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 UnityEngine_CoreModule::UnityEngine::Sprite::GetOuterUVs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOuterUVs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 UnityEngine_CoreModule::UnityEngine::Sprite::GetPadding()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPadding");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Sprite* UnityEngine_CoreModule::UnityEngine::Sprite::CreateSprite(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType, UnityEngine_CoreModule::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSprite", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect", "UnityEngine.Vector2", "System.Single", "System.UInt32", "UnityEngine.SpriteMeshType", "UnityEngine.Vector4", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)&pivot;
	params[3] = (intptr_t)&pixelsPerUnit;
	params[4] = (intptr_t)&extrude;
	params[5] = (intptr_t)&meshType;
	params[6] = (intptr_t)&border;
	params[7] = (intptr_t)&generateFallbackPhysicsShape;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Sprite*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Bounds UnityEngine_CoreModule::UnityEngine::Sprite::get_bounds()
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
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_CoreModule::UnityEngine::Sprite::get_rect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 UnityEngine_CoreModule::UnityEngine::Sprite::get_border()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_border");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_CoreModule::UnityEngine::Sprite::get_texture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_texture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
float UnityEngine_CoreModule::UnityEngine::Sprite::get_pixelsPerUnit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pixelsPerUnit");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_CoreModule::UnityEngine::Sprite::get_associatedAlphaSplitTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_associatedAlphaSplitTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_CoreModule::UnityEngine::Sprite::get_pivot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pivot");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Sprite::get_packed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_packed");
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
UnityEngine_CoreModule::UnityEngine::SpritePackingMode UnityEngine_CoreModule::UnityEngine::Sprite::get_packingMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_packingMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::SpritePackingMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::SpritePackingMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::SpritePackingMode>(*(UnityEngine_CoreModule::UnityEngine::SpritePackingMode*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_CoreModule::UnityEngine::Sprite::get_textureRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_textureRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* UnityEngine_CoreModule::UnityEngine::Sprite::get_vertices()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_vertices");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>*)returnValue;
}
IL2CPP::Array<uint16_t>* UnityEngine_CoreModule::UnityEngine::Sprite::get_triangles()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_triangles");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint16_t>*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* UnityEngine_CoreModule::UnityEngine::Sprite::get_uv()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_uv");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Sprite* UnityEngine_CoreModule::UnityEngine::Sprite::Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType, UnityEngine_CoreModule::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect", "UnityEngine.Vector2", "System.Single", "System.UInt32", "UnityEngine.SpriteMeshType", "UnityEngine.Vector4", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)&pivot;
	params[3] = (intptr_t)&pixelsPerUnit;
	params[4] = (intptr_t)&extrude;
	params[5] = (intptr_t)&meshType;
	params[6] = (intptr_t)&border;
	params[7] = (intptr_t)&generateFallbackPhysicsShape;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Sprite*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Sprite* UnityEngine_CoreModule::UnityEngine::Sprite::Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType, UnityEngine_CoreModule::UnityEngine::Vector4 border)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect", "UnityEngine.Vector2", "System.Single", "System.UInt32", "UnityEngine.SpriteMeshType", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)&pivot;
	params[3] = (intptr_t)&pixelsPerUnit;
	params[4] = (intptr_t)&extrude;
	params[5] = (intptr_t)&meshType;
	params[6] = (intptr_t)&border;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Sprite*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Sprite* UnityEngine_CoreModule::UnityEngine::Sprite::Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect", "UnityEngine.Vector2", "System.Single", "System.UInt32", "UnityEngine.SpriteMeshType" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)&pivot;
	params[3] = (intptr_t)&pixelsPerUnit;
	params[4] = (intptr_t)&extrude;
	params[5] = (intptr_t)&meshType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Sprite*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Sprite* UnityEngine_CoreModule::UnityEngine::Sprite::Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect", "UnityEngine.Vector2", "System.Single", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)&pivot;
	params[3] = (intptr_t)&pixelsPerUnit;
	params[4] = (intptr_t)&extrude;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Sprite*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Sprite* UnityEngine_CoreModule::UnityEngine::Sprite::Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect", "UnityEngine.Vector2", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)&pivot;
	params[3] = (intptr_t)&pixelsPerUnit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Sprite*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Sprite* UnityEngine_CoreModule::UnityEngine::Sprite::Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)&pivot;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Sprite*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Sprite::GetTextureRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTextureRect_Injected", std::vector<std::string> { "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Sprite::GetInnerUVs_Injected(UnityEngine_CoreModule::UnityEngine::Vector4& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInnerUVs_Injected", std::vector<std::string> { "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Sprite::GetOuterUVs_Injected(UnityEngine_CoreModule::UnityEngine::Vector4& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOuterUVs_Injected", std::vector<std::string> { "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Sprite::GetPadding_Injected(UnityEngine_CoreModule::UnityEngine::Vector4& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPadding_Injected", std::vector<std::string> { "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Sprite* UnityEngine_CoreModule::UnityEngine::Sprite::CreateSprite_Injected(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect& rect, UnityEngine_CoreModule::UnityEngine::Vector2& pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType, UnityEngine_CoreModule::UnityEngine::Vector4& border, bool generateFallbackPhysicsShape)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSprite_Injected", std::vector<std::string> { "UnityEngine.Texture2D", "UnityEngine.Rect&", "UnityEngine.Vector2&", "System.Single", "System.UInt32", "UnityEngine.SpriteMeshType", "UnityEngine.Vector4&", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)&pivot;
	params[3] = (intptr_t)&pixelsPerUnit;
	params[4] = (intptr_t)&extrude;
	params[5] = (intptr_t)&meshType;
	params[6] = (intptr_t)&border;
	params[7] = (intptr_t)&generateFallbackPhysicsShape;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Sprite*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Sprite::get_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_bounds_Injected", std::vector<std::string> { "UnityEngine.Bounds&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Sprite::get_rect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rect_Injected", std::vector<std::string> { "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Sprite::get_border_Injected(UnityEngine_CoreModule::UnityEngine::Vector4& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_border_Injected", std::vector<std::string> { "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Sprite::get_pivot_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pivot_Injected", std::vector<std::string> { "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
