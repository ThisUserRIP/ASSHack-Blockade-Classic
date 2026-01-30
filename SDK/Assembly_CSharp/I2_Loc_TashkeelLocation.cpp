#include "I2_Loc_TashkeelLocation.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::TashkeelLocation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "TashkeelLocation");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::TashkeelLocation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::I2::Loc::TashkeelLocation::_ctor(wchar_t tashkeel, int32_t position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Char", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tashkeel;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
