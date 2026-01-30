#include "System_NumberFormatter_CustomInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::NumberFormatter_CustomInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::NumberFormatter::GetIl2CppClass(), "CustomInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::NumberFormatter_CustomInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::NumberFormatter_CustomInfo::GetActiveSection(mscorlib::System::String* format, bool& positive, bool zero, int32_t& offset, int32_t& length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActiveSection", std::vector<std::string> { "System.String", "System.Boolean&", "System.Boolean", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&positive;
	params[2] = (intptr_t)&zero;
	params[3] = (intptr_t)&offset;
	params[4] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::NumberFormatter_CustomInfo* mscorlib::System::NumberFormatter_CustomInfo::Parse(mscorlib::System::String* format, int32_t offset, int32_t length, mscorlib::System::Globalization::NumberFormatInfo* nfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)nfi;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::NumberFormatter_CustomInfo*)returnValue;
}
mscorlib::System::String* mscorlib::System::NumberFormatter_CustomInfo::Format(mscorlib::System::String* format, int32_t offset, int32_t length, mscorlib::System::Globalization::NumberFormatInfo* nfi, bool positive, mscorlib::System::Text::StringBuilder* sb_int, mscorlib::System::Text::StringBuilder* sb_dec, mscorlib::System::Text::StringBuilder* sb_exp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Globalization.NumberFormatInfo", "System.Boolean", "System.Text.StringBuilder", "System.Text.StringBuilder", "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)nfi;
	params[4] = (intptr_t)&positive;
	params[5] = (intptr_t)sb_int;
	params[6] = (intptr_t)sb_dec;
	params[7] = (intptr_t)sb_exp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::NumberFormatter_CustomInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
