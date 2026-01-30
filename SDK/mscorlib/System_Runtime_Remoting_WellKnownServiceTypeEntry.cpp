#include "System_Runtime_Remoting_WellKnownServiceTypeEntry.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting", "WellKnownServiceTypeEntry");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry::_ctor(mscorlib::System::String* typeName, mscorlib::System::String* assemblyName, mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Runtime.Remoting.WellKnownObjectMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)typeName;
	params[1] = (intptr_t)assemblyName;
	params[2] = (intptr_t)objectUri;
	params[3] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::WellKnownObjectMode mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Mode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::Remoting::WellKnownObjectMode ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::Remoting::WellKnownObjectMode));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::Remoting::WellKnownObjectMode>(*(mscorlib::System::Runtime::Remoting::WellKnownObjectMode*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ObjectType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ObjectUri");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
