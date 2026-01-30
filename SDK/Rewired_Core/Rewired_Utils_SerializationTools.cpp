#include "Rewired_Utils_SerializationTools.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::SerializationTools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "SerializationTools");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::SerializationTools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Utils::SerializationTools::WriteXmlElement(System_Xml::System::Xml::XmlWriter* writer, mscorlib::System::String* name, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteXmlElement", std::vector<std::string> { "System.Xml.XmlWriter", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)writer;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::SerializationTools::rdqIcFHRxhmKptIDdAzpDbYcwJue(System_Xml::System::Xml::XmlWriter* A_0, mscorlib::System::Object* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rdqIcFHRxhmKptIDdAzpDbYcwJue");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::SerializationTools::ReadXmlElement(System_Xml::System::Xml::XmlReader* reader, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadXmlElement", std::vector<std::string> { "System.Xml.XmlReader", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)reader;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Rewired_Core::Rewired::Utils::SerializationTools::TryReadXmlElement(System_Xml::System::Xml::XmlReader* reader, mscorlib::System::String* name, mscorlib::System::String& outValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryReadXmlElement", std::vector<std::string> { "System.Xml.XmlReader", "System.String", "System.String&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)reader;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)&outValue;
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
bool Rewired_Core::Rewired::Utils::SerializationTools::TryReadXmlStartElement(System_Xml::System::Xml::XmlReader* reader, mscorlib::System::String* name, bool& isEmpty)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryReadXmlStartElement", std::vector<std::string> { "System.Xml.XmlReader", "System.String", "System.Boolean&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)reader;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)&isEmpty;
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
bool Rewired_Core::Rewired::Utils::SerializationTools::TryReadXmlEndElement(System_Xml::System::Xml::XmlReader* reader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryReadXmlEndElement", std::vector<std::string> { "System.Xml.XmlReader" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reader;
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
mscorlib::System::String* Rewired_Core::Rewired::Utils::SerializationTools::CleanInvalidXmlChars(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanInvalidXmlChars", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
