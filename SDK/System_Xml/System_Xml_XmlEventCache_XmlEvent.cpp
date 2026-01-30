#include "System_Xml_XmlEventCache_XmlEvent.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlEventCache_XmlEvent::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::XmlEventCache::GetIl2CppClass(), "XmlEvent");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlEventCache_XmlEvent::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlEventCache_XmlEvent::InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitEvent", std::vector<std::string> { "System.Xml.XmlEventCache/XmlEventType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&eventType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEventCache_XmlEvent::InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitEvent", std::vector<std::string> { "System.Xml.XmlEventCache/XmlEventType", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&eventType;
	params[1] = (intptr_t)s1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEventCache_XmlEvent::InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitEvent", std::vector<std::string> { "System.Xml.XmlEventCache/XmlEventType", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventType;
	params[1] = (intptr_t)s1;
	params[2] = (intptr_t)s2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEventCache_XmlEvent::InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2, mscorlib::System::String* s3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitEvent", std::vector<std::string> { "System.Xml.XmlEventCache/XmlEventType", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&eventType;
	params[1] = (intptr_t)s1;
	params[2] = (intptr_t)s2;
	params[3] = (intptr_t)s3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEventCache_XmlEvent::InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2, mscorlib::System::String* s3, mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitEvent", std::vector<std::string> { "System.Xml.XmlEventCache/XmlEventType", "System.String", "System.String", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&eventType;
	params[1] = (intptr_t)s1;
	params[2] = (intptr_t)s2;
	params[3] = (intptr_t)s3;
	params[4] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEventCache_XmlEvent::InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitEvent", std::vector<std::string> { "System.Xml.XmlEventCache/XmlEventType", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&eventType;
	params[1] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::XmlEventCache_XmlEventType System_Xml::System::Xml::XmlEventCache_XmlEvent::get_EventType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EventType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::XmlEventCache_XmlEventType ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::XmlEventCache_XmlEventType));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::XmlEventCache_XmlEventType>(*(System_Xml::System::Xml::XmlEventCache_XmlEventType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System_Xml::System::Xml::XmlEventCache_XmlEvent::get_String1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_String1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlEventCache_XmlEvent::get_String2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_String2");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlEventCache_XmlEvent::get_String3()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_String3");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Object* System_Xml::System::Xml::XmlEventCache_XmlEvent::get_Object()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Object");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
