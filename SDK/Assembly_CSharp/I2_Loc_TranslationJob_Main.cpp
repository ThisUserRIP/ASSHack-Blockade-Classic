#include "I2_Loc_TranslationJob_Main.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::TranslationJob_Main::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "TranslationJob_Main");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::TranslationJob_Main::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::I2::Loc::TranslationJob_Main::_ctor(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslationReady* OnTranslationReady)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>", "I2.Loc.GoogleTranslation/fnOnTranslationReady" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)requests;
	params[1] = (intptr_t)OnTranslationReady;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::I2::Loc::TranslationJob_eJobState Assembly_CSharp::I2::Loc::TranslationJob_Main::GetState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetState");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::I2::Loc::TranslationJob_eJobState ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::I2::Loc::TranslationJob_eJobState));
		return ret;
	}
	return static_cast<Assembly_CSharp::I2::Loc::TranslationJob_eJobState>(*(Assembly_CSharp::I2::Loc::TranslationJob_eJobState*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::I2::Loc::TranslationJob_Main::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
