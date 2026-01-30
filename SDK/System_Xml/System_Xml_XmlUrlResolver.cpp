#include "System_Xml_XmlUrlResolver.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlUrlResolver::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlUrlResolver");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlUrlResolver::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::XmlDownloadManager* System_Xml::System::Xml::XmlUrlResolver::get_DownloadManager()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DownloadManager");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlDownloadManager*)returnValue;
}
void System_Xml::System::Xml::XmlUrlResolver::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::XmlUrlResolver::GetEntity(System::System::Uri* absoluteUri, mscorlib::System::String* role, mscorlib::System::Type* ofObjectToReturn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEntity", std::vector<std::string> { "System.Uri", "System.String", "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)absoluteUri;
	params[1] = (intptr_t)role;
	params[2] = (intptr_t)ofObjectToReturn;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
System::System::Uri* System_Xml::System::Xml::XmlUrlResolver::ResolveUri(System::System::Uri* baseUri, mscorlib::System::String* relativeUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveUri", std::vector<std::string> { "System.Uri", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)baseUri;
	params[1] = (intptr_t)relativeUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Object>* System_Xml::System::Xml::XmlUrlResolver::GetEntityAsync(System::System::Uri* absoluteUri, mscorlib::System::String* role, mscorlib::System::Type* ofObjectToReturn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEntityAsync", std::vector<std::string> { "System.Uri", "System.String", "System.Type" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)absoluteUri;
	params[1] = (intptr_t)role;
	params[2] = (intptr_t)ofObjectToReturn;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Object>*)returnValue;
}
