#include "System_Reflection_RuntimeAssembly.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::RuntimeAssembly::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "RuntimeAssembly");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::RuntimeAssembly::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Reflection::RuntimeAssembly::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
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
mscorlib::System::Reflection::RuntimeAssembly* mscorlib::System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal(mscorlib::System::String* partialName, mscorlib::System::Security::Policy::Evidence* securityEvidence, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadWithPartialNameInternal", std::vector<std::string> { "System.String", "System.Security.Policy.Evidence", "System.Threading.StackCrawlMark&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)partialName;
	params[1] = (intptr_t)securityEvidence;
	params[2] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::RuntimeAssembly*)returnValue;
}
mscorlib::System::Reflection::RuntimeAssembly* mscorlib::System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal(mscorlib::System::Reflection::AssemblyName* an, mscorlib::System::Security::Policy::Evidence* securityEvidence, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadWithPartialNameInternal", std::vector<std::string> { "System.Reflection.AssemblyName", "System.Security.Policy.Evidence", "System.Threading.StackCrawlMark&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)an;
	params[1] = (intptr_t)securityEvidence;
	params[2] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::RuntimeAssembly*)returnValue;
}
mscorlib::System::Reflection::AssemblyName* mscorlib::System::Reflection::RuntimeAssembly::GetName(bool copiedName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetName", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&copiedName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::AssemblyName*)returnValue;
}
void mscorlib::System::Reflection::RuntimeAssembly::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
