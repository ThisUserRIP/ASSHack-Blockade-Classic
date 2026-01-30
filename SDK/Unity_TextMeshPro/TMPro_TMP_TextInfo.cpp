#include "TMPro_TMP_TextInfo.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_TextInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_TextInfo");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_TextInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::_ctor(int32_t characterCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&characterCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::_ctor(Unity_TextMeshPro::TMPro::TMP_Text* textComponent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "TMPro.TMP_Text" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)textComponent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::ClearAllData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearAllData");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::ClearMeshInfo(bool updateMesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMeshInfo", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateMesh;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::ClearAllMeshInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearAllMeshInfo");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::ResetVertexLayout(bool isVolumetric)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetVertexLayout", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isVolumetric;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::ClearUnusedVertices(IL2CPP::Array<Unity_TextMeshPro::TMPro::MaterialReference>* materials)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearUnusedVertices", std::vector<std::string> { "TMPro.MaterialReference[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)materials;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::ClearLineInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearLineInfo");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::ClearPageInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearPageInfo");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_MeshInfo>* Unity_TextMeshPro::TMPro::TMP_TextInfo::CopyMeshInfoVertexData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyMeshInfoVertexData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Unity_TextMeshPro::TMPro::TMP_MeshInfo>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_TextInfo::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
