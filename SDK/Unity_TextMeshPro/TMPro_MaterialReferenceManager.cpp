#include "TMPro_MaterialReferenceManager.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::MaterialReferenceManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "MaterialReferenceManager");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::MaterialReferenceManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_TextMeshPro::TMPro::MaterialReferenceManager* Unity_TextMeshPro::TMPro::MaterialReferenceManager::get_instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_TextMeshPro::TMPro::MaterialReferenceManager*)returnValue;
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddFontAsset(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddFontAsset", std::vector<std::string> { "TMPro.TMP_FontAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fontAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddFontAssetInternal(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddFontAssetInternal", std::vector<std::string> { "TMPro.TMP_FontAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fontAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddSpriteAsset(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSpriteAsset", std::vector<std::string> { "TMPro.TMP_SpriteAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)spriteAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddSpriteAssetInternal(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSpriteAssetInternal", std::vector<std::string> { "TMPro.TMP_SpriteAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)spriteAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddSpriteAsset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSpriteAsset", std::vector<std::string> { "System.Int32", "TMPro.TMP_SpriteAsset" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)spriteAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddSpriteAssetInternal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSpriteAssetInternal", std::vector<std::string> { "System.Int32", "TMPro.TMP_SpriteAsset" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)spriteAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddFontMaterial(int32_t hashCode, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddFontMaterial", std::vector<std::string> { "System.Int32", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddFontMaterialInternal(int32_t hashCode, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddFontMaterialInternal", std::vector<std::string> { "System.Int32", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddColorGradientPreset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_ColorGradient* spriteAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddColorGradientPreset", std::vector<std::string> { "System.Int32", "TMPro.TMP_ColorGradient" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)spriteAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::AddColorGradientPreset_Internal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_ColorGradient* spriteAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddColorGradientPreset_Internal", std::vector<std::string> { "System.Int32", "TMPro.TMP_ColorGradient" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)spriteAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::Contains(Unity_TextMeshPro::TMPro::TMP_FontAsset* font)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Contains", std::vector<std::string> { "TMPro.TMP_FontAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)font;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::Contains(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* sprite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Contains", std::vector<std::string> { "TMPro.TMP_SpriteAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sprite;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::TryGetFontAsset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_FontAsset& fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetFontAsset", std::vector<std::string> { "System.Int32", "TMPro.TMP_FontAsset&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)&fontAsset;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::TryGetFontAssetInternal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_FontAsset& fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetFontAssetInternal", std::vector<std::string> { "System.Int32", "TMPro.TMP_FontAsset&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)&fontAsset;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::TryGetSpriteAsset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset& spriteAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetSpriteAsset", std::vector<std::string> { "System.Int32", "TMPro.TMP_SpriteAsset&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)&spriteAsset;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::TryGetSpriteAssetInternal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_SpriteAsset& spriteAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetSpriteAssetInternal", std::vector<std::string> { "System.Int32", "TMPro.TMP_SpriteAsset&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)&spriteAsset;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::TryGetColorGradientPreset(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_ColorGradient& gradientPreset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetColorGradientPreset", std::vector<std::string> { "System.Int32", "TMPro.TMP_ColorGradient&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)&gradientPreset;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::TryGetColorGradientPresetInternal(int32_t hashCode, Unity_TextMeshPro::TMPro::TMP_ColorGradient& gradientPreset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetColorGradientPresetInternal", std::vector<std::string> { "System.Int32", "TMPro.TMP_ColorGradient&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)&gradientPreset;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::TryGetMaterial(int32_t hashCode, UnityEngine_CoreModule::UnityEngine::Material& material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetMaterial", std::vector<std::string> { "System.Int32", "UnityEngine.Material&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)&material;
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
bool Unity_TextMeshPro::TMPro::MaterialReferenceManager::TryGetMaterialInternal(int32_t hashCode, UnityEngine_CoreModule::UnityEngine::Material& material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetMaterialInternal", std::vector<std::string> { "System.Int32", "UnityEngine.Material&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hashCode;
	params[1] = (intptr_t)&material;
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
void Unity_TextMeshPro::TMPro::MaterialReferenceManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
