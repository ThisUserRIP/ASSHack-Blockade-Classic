#include "System_Xml_Serialization_UnreferencedObjectEventArgs.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Serialization::UnreferencedObjectEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Serialization", "UnreferencedObjectEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Serialization::UnreferencedObjectEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Serialization::UnreferencedObjectEventArgs::_ctor(mscorlib::System::Object* o, mscorlib::System::String* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)o;
	params[1] = (intptr_t)id;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
