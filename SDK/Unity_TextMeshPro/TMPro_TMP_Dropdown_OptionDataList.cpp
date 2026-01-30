#include "TMPro_TMP_Dropdown_OptionDataList.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionDataList::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_TextMeshPro::TMPro::TMP_Dropdown::GetIl2CppClass(), "OptionDataList");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionDataList::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionData>* Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionDataList::get_options()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_options");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionData>*)returnValue;
}
void Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionDataList::set_options(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionData>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_options", std::vector<std::string> { "System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionDataList::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
