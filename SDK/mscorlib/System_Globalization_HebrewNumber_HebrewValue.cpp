#include "System_Globalization_HebrewNumber_HebrewValue.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::HebrewNumber_HebrewValue::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Globalization::HebrewNumber::GetIl2CppClass(), "HebrewValue");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::HebrewNumber_HebrewValue::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Globalization::HebrewNumber_HebrewValue::_ctor(mscorlib::System::Globalization::HebrewNumber_HebrewToken token, int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Globalization.HebrewNumber/HebrewToken", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&token;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
