#include "System_Xml_Schema_Asttree.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::Asttree::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "Asttree");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::Asttree::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::ArrayList* System_Xml::System::Xml::Schema::Asttree::get_SubtreeArray()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SubtreeArray");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ArrayList*)returnValue;
}
void System_Xml::System::Xml::Schema::Asttree::_ctor(mscorlib::System::String* xPath, bool isField, System_Xml::System::Xml::XmlNamespaceManager* nsmgr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Boolean", "System.Xml.XmlNamespaceManager" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)xPath;
	params[1] = (intptr_t)&isField;
	params[2] = (intptr_t)nsmgr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::Asttree::IsNameTest(System_Xml::MS::Internal::Xml::XPath::Axis* ast)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsNameTest", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ast;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::Asttree::IsAttribute(System_Xml::MS::Internal::Xml::XPath::Axis* ast)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAttribute", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ast;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::Asttree::IsDescendantOrSelf(System_Xml::MS::Internal::Xml::XPath::Axis* ast)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDescendantOrSelf", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ast;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::Schema::Asttree::IsSelf(System_Xml::MS::Internal::Xml::XPath::Axis* ast)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSelf", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ast;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::Asttree::CompileXPath(mscorlib::System::String* xPath, bool isField, System_Xml::System::Xml::XmlNamespaceManager* nsmgr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileXPath", std::vector<std::string> { "System.String", "System.Boolean", "System.Xml.XmlNamespaceManager" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)xPath;
	params[1] = (intptr_t)&isField;
	params[2] = (intptr_t)nsmgr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::Asttree::SetURN(System_Xml::MS::Internal::Xml::XPath::Axis* axis, System_Xml::System::Xml::XmlNamespaceManager* nsmgr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetURN", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis", "System.Xml.XmlNamespaceManager" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)axis;
	params[1] = (intptr_t)nsmgr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
