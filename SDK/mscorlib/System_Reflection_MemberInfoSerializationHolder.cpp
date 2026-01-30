#include "System_Reflection_MemberInfoSerializationHolder.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::MemberInfoSerializationHolder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "MemberInfoSerializationHolder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::MemberInfoSerializationHolder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::String* name, mscorlib::System::RuntimeType* reflectedClass, mscorlib::System::String* signature, mscorlib::System::Reflection::MemberTypes type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSerializationInfo", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.String", "System.RuntimeType", "System.String", "System.Reflection.MemberTypes" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)reflectedClass;
	params[3] = (intptr_t)signature;
	params[4] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::String* name, mscorlib::System::RuntimeType* reflectedClass, mscorlib::System::String* signature, mscorlib::System::String* signature2, mscorlib::System::Reflection::MemberTypes type, IL2CPP::Array<mscorlib::System::Type*>* genericArguments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSerializationInfo", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.String", "System.RuntimeType", "System.String", "System.String", "System.Reflection.MemberTypes", "System.Type[]" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)reflectedClass;
	params[3] = (intptr_t)signature;
	params[4] = (intptr_t)signature2;
	params[5] = (intptr_t)&type;
	params[6] = (intptr_t)genericArguments;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Reflection::MemberInfoSerializationHolder::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Reflection::MemberInfoSerializationHolder::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Reflection::MemberInfoSerializationHolder::GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRealObject", std::vector<std::string> { "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
