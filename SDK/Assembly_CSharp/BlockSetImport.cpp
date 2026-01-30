#include "BlockSetImport.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BlockSetImport::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "BlockSetImport");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BlockSetImport::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BlockSetImport::Import(Assembly_CSharp::BlockSet* blockSet, mscorlib::System::String* xml)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import", std::vector<std::string> { "BlockSet", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)blockSet;
	params[1] = (intptr_t)xml;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BlockSetImport::ReadBlockSet(Assembly_CSharp::BlockSet* blockSet, System_Xml::System::Xml::XmlDocument* document)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadBlockSet", std::vector<std::string> { "BlockSet", "System.Xml.XmlDocument" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)blockSet;
	params[1] = (intptr_t)document;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Assembly_CSharp::Atlas*>* Assembly_CSharp::BlockSetImport::ReadAtlasList(System_Xml::System::Xml::XmlNode* blockSetNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadAtlasList", std::vector<std::string> { "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)blockSetNode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::Atlas*>*)returnValue;
}
Assembly_CSharp::Atlas* Assembly_CSharp::BlockSetImport::ReadAtlas(System_Xml::System::Xml::XmlNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadAtlas", std::vector<std::string> { "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Atlas*)returnValue;
}
IL2CPP::Array<Assembly_CSharp::Block*>* Assembly_CSharp::BlockSetImport::ReadBlockList(System_Xml::System::Xml::XmlNode* blockSetNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadBlockList", std::vector<std::string> { "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)blockSetNode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::Block*>*)returnValue;
}
Assembly_CSharp::Block* Assembly_CSharp::BlockSetImport::ReadBlock(System_Xml::System::Xml::XmlNode* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadBlock", std::vector<std::string> { "System.Xml.XmlNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Block*)returnValue;
}
System_Xml::System::Xml::XmlNode* Assembly_CSharp::BlockSetImport::FindNodeByName(System_Xml::System::Xml::XmlNode* node, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindNodeByName", std::vector<std::string> { "System.Xml.XmlNode", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlNode*)returnValue;
}
mscorlib::System::Reflection::FieldInfo* Assembly_CSharp::BlockSetImport::GetField(mscorlib::System::Type* type, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetField", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::FieldInfo*)returnValue;
}
void Assembly_CSharp::BlockSetImport::ReadField(System_Xml::System::Xml::XmlNode* fieldNode, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadField", std::vector<std::string> { "System.Xml.XmlNode", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)fieldNode;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* Assembly_CSharp::BlockSetImport::Parse(mscorlib::System::Type* type, mscorlib::System::String* val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)val;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void Assembly_CSharp::BlockSetImport::ReadResourceField(System_Xml::System::Xml::XmlNode* fieldNode, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadResourceField", std::vector<std::string> { "System.Xml.XmlNode", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)fieldNode;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BlockSetImport::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
