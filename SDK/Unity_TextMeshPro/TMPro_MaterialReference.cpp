#include "TMPro_MaterialReference.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::MaterialReference::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "MaterialReference");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::MaterialReference::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::MaterialReference::_ctor(int32_t index, Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, UnityEngine_CoreModule::UnityEngine::Material* material, float padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "TMPro.TMP_FontAsset", "TMPro.TMP_SpriteAsset", "UnityEngine.Material", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)fontAsset;
	params[2] = (intptr_t)spriteAsset;
	params[3] = (intptr_t)material;
	params[4] = (intptr_t)&padding;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_TextMeshPro::TMPro::MaterialReference::Contains(IL2CPP::Array<Unity_TextMeshPro::TMPro::MaterialReference>* materialReferences, Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Contains", std::vector<std::string> { "TMPro.MaterialReference[]", "TMPro.TMP_FontAsset" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)materialReferences;
	params[1] = (intptr_t)fontAsset;
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
int32_t Unity_TextMeshPro::TMPro::MaterialReference::AddMaterialReference(UnityEngine_CoreModule::UnityEngine::Material* material, Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset, IL2CPP::Array<Unity_TextMeshPro::TMPro::MaterialReference>& materialReferences, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Int32>* materialReferenceIndexLookup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMaterialReference", std::vector<std::string> { "UnityEngine.Material", "TMPro.TMP_FontAsset", "TMPro.MaterialReference[]&", "System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)fontAsset;
	params[2] = (intptr_t)&materialReferences;
	params[3] = (intptr_t)materialReferenceIndexLookup;
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
int32_t Unity_TextMeshPro::TMPro::MaterialReference::AddMaterialReference(UnityEngine_CoreModule::UnityEngine::Material* material, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, IL2CPP::Array<Unity_TextMeshPro::TMPro::MaterialReference>& materialReferences, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Int32>* materialReferenceIndexLookup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMaterialReference", std::vector<std::string> { "UnityEngine.Material", "TMPro.TMP_SpriteAsset", "TMPro.MaterialReference[]&", "System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)spriteAsset;
	params[2] = (intptr_t)&materialReferences;
	params[3] = (intptr_t)materialReferenceIndexLookup;
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
