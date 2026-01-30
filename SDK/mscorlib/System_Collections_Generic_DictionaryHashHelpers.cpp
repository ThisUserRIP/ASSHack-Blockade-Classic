#include "System_Collections_Generic_DictionaryHashHelpers.h"

IL2CPP::Il2CppClass* mscorlib::System::Collections::Generic::DictionaryHashHelpers::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Collections.Generic", "DictionaryHashHelpers");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Collections::Generic::DictionaryHashHelpers::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<mscorlib::System::Object, mscorlib::System::Runtime::Serialization::SerializationInfo>* mscorlib::System::Collections::Generic::DictionaryHashHelpers::get_SerializationInfoTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SerializationInfoTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<mscorlib::System::Object, mscorlib::System::Runtime::Serialization::SerializationInfo>*)returnValue;
}
void mscorlib::System::Collections::Generic::DictionaryHashHelpers::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
