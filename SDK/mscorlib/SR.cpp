#include "SR.h"

IL2CPP::Il2CppClass* mscorlib::SR::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "", "SR");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::SR::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* mscorlib::SR::Format(mscorlib::System::String* resourceFormat, mscorlib::System::Object* p1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format", std::vector<std::string> { "System.String", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)resourceFormat;
	params[1] = (intptr_t)p1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::SR::Format(mscorlib::System::String* resourceFormat, mscorlib::System::Object* p1, mscorlib::System::Object* p2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Format", std::vector<std::string> { "System.String", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)resourceFormat;
	params[1] = (intptr_t)p1;
	params[2] = (intptr_t)p2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
