#include "TMPro_FontAssetCreationSettings.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::FontAssetCreationSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "FontAssetCreationSettings");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::FontAssetCreationSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::FontAssetCreationSettings::_ctor(mscorlib::System::String* sourceFontFileGUID, int32_t pointSize, int32_t pointSizeSamplingMode, int32_t padding, int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight, int32_t characterSelectionMode, mscorlib::System::String* characterSet, int32_t renderMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)sourceFontFileGUID;
	params[1] = (intptr_t)&pointSize;
	params[2] = (intptr_t)&pointSizeSamplingMode;
	params[3] = (intptr_t)&padding;
	params[4] = (intptr_t)&packingMode;
	params[5] = (intptr_t)&atlasWidth;
	params[6] = (intptr_t)&atlasHeight;
	params[7] = (intptr_t)&characterSelectionMode;
	params[8] = (intptr_t)characterSet;
	params[9] = (intptr_t)&renderMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
