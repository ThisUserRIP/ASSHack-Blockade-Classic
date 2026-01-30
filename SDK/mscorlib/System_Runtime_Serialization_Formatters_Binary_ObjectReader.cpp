#include "System_Runtime_Serialization_Formatters_Binary_ObjectReader.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::SerStack* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_ValueFixupStack()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ValueFixupStack");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::SerStack*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_TopObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::set_TopObject(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TopObject", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::_ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, mscorlib::System::Runtime::Serialization::SerializationBinder* binder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IO.Stream", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.Formatters.Binary.InternalFE", "System.Runtime.Serialization.SerializationBinder" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)selector;
	params[2] = (intptr_t)&context;
	params[3] = (intptr_t)formatterEnums;
	params[4] = (intptr_t)binder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Deserialize(mscorlib::System::Runtime::Remoting::Messaging::HeaderHandler* handler, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* serParser, bool fCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deserialize", std::vector<std::string> { "System.Runtime.Remoting.Messaging.HeaderHandler", "System.Runtime.Serialization.Formatters.Binary.__BinaryParser", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)serParser;
	params[2] = (intptr_t)&fCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::HasSurrogate(mscorlib::System::Type* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasSurrogate", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckSerializable(mscorlib::System::Type* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckSerializable", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::InitFullDeserialization()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitFullDeserialization");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CrossAppDomainArray(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossAppDomainArray", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo(mscorlib::System::Type* objectType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateReadObjectInfo", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)objectType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo(mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateReadObjectInfo", std::vector<std::string> { "System.Type", "System.String[]", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)memberNames;
	params[2] = (intptr_t)memberTypes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Parse(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseError(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* processing, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* onStack)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseError", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord", "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)processing;
	params[1] = (intptr_t)onStack;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeader(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseSerializedStreamHeader", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeaderEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseSerializedStreamHeaderEnd", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObject(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseObject", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObjectEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseObjectEnd", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseArray", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::NextRectangleMap(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NextRectangleMap", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseArrayMember", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMemberEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseArrayMemberEnd", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseMember", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMemberEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseMemberEnd", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseString(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parentPr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseString", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord", "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pr;
	params[1] = (intptr_t)parentPr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterObject", std::vector<std::string> { "System.Object", "System.Runtime.Serialization.Formatters.Binary.ParseRecord", "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)pr;
	params[2] = (intptr_t)objectPr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr, bool bIsString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterObject", std::vector<std::string> { "System.Object", "System.Runtime.Serialization.Formatters.Binary.ParseRecord", "System.Runtime.Serialization.Formatters.Binary.ParseRecord", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)pr;
	params[2] = (intptr_t)objectPr;
	params[3] = (intptr_t)&bIsString;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int64_t mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetId(int64_t objectId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetId", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&objectId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Bind(mscorlib::System::String* assemblyString, mscorlib::System::String* typeString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Bind", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)assemblyString;
	params[1] = (intptr_t)typeString;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::FastBindToType(mscorlib::System::String* assemblyName, mscorlib::System::String* typeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FastBindToType", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)assemblyName;
	params[1] = (intptr_t)typeName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Reflection::Assembly* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ResolveSimpleAssemblyName(mscorlib::System::Reflection::AssemblyName* assemblyName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveSimpleAssemblyName", std::vector<std::string> { "System.Reflection.AssemblyName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)assemblyName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::Assembly*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetSimplyNamedTypeFromAssembly(mscorlib::System::Reflection::Assembly* assm, mscorlib::System::String* typeName, mscorlib::System::Type& type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSimplyNamedTypeFromAssembly", std::vector<std::string> { "System.Reflection.Assembly", "System.String", "System.Type&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)assm;
	params[1] = (intptr_t)typeName;
	params[2] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetType(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetType", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)assemblyInfo;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckTypeForwardedTo(mscorlib::System::Reflection::Assembly* sourceAssembly, mscorlib::System::Reflection::Assembly* destAssembly, mscorlib::System::Type* resolvedType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckTypeForwardedTo", std::vector<std::string> { "System.Reflection.Assembly", "System.Reflection.Assembly", "System.Type" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sourceAssembly;
	params[1] = (intptr_t)destAssembly;
	params[2] = (intptr_t)resolvedType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
