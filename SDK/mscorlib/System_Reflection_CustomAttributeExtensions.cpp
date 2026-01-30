#include "System_Reflection_CustomAttributeExtensions.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::CustomAttributeExtensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "CustomAttributeExtensions");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::CustomAttributeExtensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Attribute* mscorlib::System::Reflection::CustomAttributeExtensions::GetCustomAttribute(mscorlib::System::Reflection::Assembly* element, mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Reflection.Assembly", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)attributeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Attribute*)returnValue;
}
mscorlib::System::Attribute* mscorlib::System::Reflection::CustomAttributeExtensions::GetCustomAttribute(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)attributeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Attribute*)returnValue;
}
