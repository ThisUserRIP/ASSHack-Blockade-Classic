#include "System_DelegateSerializationHolder_DelegateEntry.h"

IL2CPP::Il2CppClass* mscorlib::System::DelegateSerializationHolder_DelegateEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::DelegateSerializationHolder::GetIl2CppClass(), "DelegateEntry");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::DelegateSerializationHolder_DelegateEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::DelegateSerializationHolder_DelegateEntry::_ctor(mscorlib::System::Delegate* del, mscorlib::System::String* targetLabel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Delegate", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)del;
	params[1] = (intptr_t)targetLabel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Delegate* mscorlib::System::DelegateSerializationHolder_DelegateEntry::DeserializeDelegate(mscorlib::System::Runtime::Serialization::SerializationInfo* info, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeserializeDelegate", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
