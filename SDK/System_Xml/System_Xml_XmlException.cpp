#include "System_Xml_XmlException.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlException::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlException");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlException::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Exception", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerException;
	params[2] = (intptr_t)&lineNumber;
	params[3] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, mscorlib::System::String* sourceUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Exception", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerException;
	params[2] = (intptr_t)&lineNumber;
	params[3] = (intptr_t)&linePosition;
	params[4] = (intptr_t)sourceUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, mscorlib::System::String* arg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)arg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, mscorlib::System::String* arg, mscorlib::System::String* sourceUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)arg;
	params[2] = (intptr_t)sourceUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, mscorlib::System::String* arg, System_Xml::System::Xml::IXmlLineInfo* lineInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Xml.IXmlLineInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)arg;
	params[2] = (intptr_t)lineInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, mscorlib::System::String* arg, mscorlib::System::Exception* innerException, System_Xml::System::Xml::IXmlLineInfo* lineInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Exception", "System.Xml.IXmlLineInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)arg;
	params[2] = (intptr_t)innerException;
	params[3] = (intptr_t)lineInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::IXmlLineInfo* lineInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]", "System.Xml.IXmlLineInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)lineInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::IXmlLineInfo* lineInfo, mscorlib::System::String* sourceUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]", "System.Xml.IXmlLineInfo", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)lineInfo;
	params[3] = (intptr_t)sourceUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, mscorlib::System::String* arg, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)arg;
	params[2] = (intptr_t)&lineNumber;
	params[3] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, mscorlib::System::String* arg, int32_t lineNumber, int32_t linePosition, mscorlib::System::String* sourceUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)arg;
	params[2] = (intptr_t)&lineNumber;
	params[3] = (intptr_t)&linePosition;
	params[4] = (intptr_t)sourceUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)&lineNumber;
	params[3] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, int32_t lineNumber, int32_t linePosition, mscorlib::System::String* sourceUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)&lineNumber;
	params[3] = (intptr_t)&linePosition;
	params[4] = (intptr_t)sourceUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]", "System.Exception", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)innerException;
	params[3] = (intptr_t)&lineNumber;
	params[4] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlException::_ctor(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, mscorlib::System::String* sourceUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]", "System.Exception", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)innerException;
	params[3] = (intptr_t)&lineNumber;
	params[4] = (intptr_t)&linePosition;
	params[5] = (intptr_t)sourceUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::XmlException::FormatUserMessage(mscorlib::System::String* message, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatUserMessage", std::vector<std::string> { "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&lineNumber;
	params[2] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlException::CreateMessage(mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args, int32_t lineNumber, int32_t linePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMessage", std::vector<std::string> { "System.String", "System.String[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)&lineNumber;
	params[3] = (intptr_t)&linePosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* System_Xml::System::Xml::XmlException::BuildCharExceptionArgs(mscorlib::System::String* data, int32_t invCharIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildCharExceptionArgs", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&invCharIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* System_Xml::System::Xml::XmlException::BuildCharExceptionArgs(IL2CPP::Array<wchar_t>* data, int32_t length, int32_t invCharIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildCharExceptionArgs", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&invCharIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* System_Xml::System::Xml::XmlException::BuildCharExceptionArgs(wchar_t invChar, wchar_t nextChar)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildCharExceptionArgs", std::vector<std::string> { "System.Char", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&invChar;
	params[1] = (intptr_t)&nextChar;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
int32_t System_Xml::System::Xml::XmlException::get_LineNumber()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LineNumber");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::XmlException::get_LinePosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LinePosition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System_Xml::System::Xml::XmlException::get_Message()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Message");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::XmlException::get_ResString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ResString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
