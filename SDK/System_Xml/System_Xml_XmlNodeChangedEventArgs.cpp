#include "System_Xml_XmlNodeChangedEventArgs.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlNodeChangedEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlNodeChangedEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlNodeChangedEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlNodeChangedEventArgs::_ctor(System_Xml::System::Xml::XmlNode* node, System_Xml::System::Xml::XmlNode* oldParent, System_Xml::System::Xml::XmlNode* newParent, mscorlib::System::String* oldValue, mscorlib::System::String* newValue, System_Xml::System::Xml::XmlNodeChangedAction action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlNode", "System.Xml.XmlNode", "System.Xml.XmlNode", "System.String", "System.String", "System.Xml.XmlNodeChangedAction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)oldParent;
	params[2] = (intptr_t)newParent;
	params[3] = (intptr_t)oldValue;
	params[4] = (intptr_t)newValue;
	params[5] = (intptr_t)&action;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlNodeChangedAction System_Xml::System::Xml::XmlNodeChangedEventArgs::get_Action()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Action");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::XmlNodeChangedAction ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::XmlNodeChangedAction));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::XmlNodeChangedAction>(*(System_Xml::System::Xml::XmlNodeChangedAction*)il2cpp_object_unbox(returnValue));
}
