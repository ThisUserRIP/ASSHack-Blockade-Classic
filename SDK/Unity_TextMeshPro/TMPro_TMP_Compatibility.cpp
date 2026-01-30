#include "TMPro_TMP_Compatibility.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_Compatibility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "TMP_Compatibility");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_Compatibility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_TextMeshPro::TMPro::TextAlignmentOptions Unity_TextMeshPro::TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues(Unity_TextMeshPro::TMPro::TextAlignmentOptions oldValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTextAlignmentEnumValues", std::vector<std::string> { "TMPro.TextAlignmentOptions" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&oldValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::TextAlignmentOptions ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::TextAlignmentOptions));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::TextAlignmentOptions>(*(Unity_TextMeshPro::TMPro::TextAlignmentOptions*)il2cpp_object_unbox(returnValue));
}
