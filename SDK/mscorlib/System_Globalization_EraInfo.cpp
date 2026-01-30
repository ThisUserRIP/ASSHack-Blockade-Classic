#include "System_Globalization_EraInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::EraInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Globalization", "EraInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::EraInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Globalization::EraInfo::_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&era;
	params[1] = (intptr_t)&startYear;
	params[2] = (intptr_t)&startMonth;
	params[3] = (intptr_t)&startDay;
	params[4] = (intptr_t)&yearOffset;
	params[5] = (intptr_t)&minEraYear;
	params[6] = (intptr_t)&maxEraYear;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Globalization::EraInfo::_ctor(int32_t era, int32_t startYear, int32_t startMonth, int32_t startDay, int32_t yearOffset, int32_t minEraYear, int32_t maxEraYear, mscorlib::System::String* eraName, mscorlib::System::String* abbrevEraName, mscorlib::System::String* englishEraName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&era;
	params[1] = (intptr_t)&startYear;
	params[2] = (intptr_t)&startMonth;
	params[3] = (intptr_t)&startDay;
	params[4] = (intptr_t)&yearOffset;
	params[5] = (intptr_t)&minEraYear;
	params[6] = (intptr_t)&maxEraYear;
	params[7] = (intptr_t)eraName;
	params[8] = (intptr_t)abbrevEraName;
	params[9] = (intptr_t)englishEraName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
