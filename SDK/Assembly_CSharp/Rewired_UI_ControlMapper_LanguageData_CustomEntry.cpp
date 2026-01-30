#include "Rewired_UI_ControlMapper_LanguageData_CustomEntry.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_CustomEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData::GetIl2CppClass(), "CustomEntry");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_CustomEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_CustomEntry::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_CustomEntry::_ctor(mscorlib::System::String* key, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_CustomEntry::ToDictionary(IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_CustomEntry*>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDictionary", std::vector<std::string> { "Rewired.UI.ControlMapper.LanguageData/CustomEntry[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>*)returnValue;
}
