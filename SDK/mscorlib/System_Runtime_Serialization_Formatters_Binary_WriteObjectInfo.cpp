#include "System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ObjectEnd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalInit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, mscorlib::System::Runtime::Serialization::SerializationBinder* binder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Serialize", std::vector<std::string> { "System.Object", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.IFormatterConverter", "System.Runtime.Serialization.Formatters.Binary.ObjectWriter", "System.Runtime.Serialization.SerializationBinder" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)surrogateSelector;
	params[2] = (intptr_t)&context;
	params[3] = (intptr_t)serObjectInfoInit;
	params[4] = (intptr_t)converter;
	params[5] = (intptr_t)objectWriter;
	params[6] = (intptr_t)binder;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, mscorlib::System::Runtime::Serialization::SerializationBinder* binder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSerialize", std::vector<std::string> { "System.Object", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.IFormatterConverter", "System.Runtime.Serialization.Formatters.Binary.ObjectWriter", "System.Runtime.Serialization.SerializationBinder" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)surrogateSelector;
	params[2] = (intptr_t)&context;
	params[3] = (intptr_t)serObjectInfoInit;
	params[4] = (intptr_t)converter;
	params[5] = (intptr_t)objectWriter;
	params[6] = (intptr_t)binder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, mscorlib::System::Runtime::Serialization::SerializationBinder* binder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Serialize", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.IFormatterConverter", "System.Runtime.Serialization.SerializationBinder" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)surrogateSelector;
	params[2] = (intptr_t)&context;
	params[3] = (intptr_t)serObjectInfoInit;
	params[4] = (intptr_t)converter;
	params[5] = (intptr_t)binder;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, mscorlib::System::Runtime::Serialization::SerializationBinder* binder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSerialize", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.IFormatterConverter", "System.Runtime.Serialization.SerializationBinder" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)surrogateSelector;
	params[2] = (intptr_t)&context;
	params[3] = (intptr_t)serObjectInfoInit;
	params[4] = (intptr_t)converter;
	params[5] = (intptr_t)binder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSiWrite");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom(mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache, mscorlib::System::Type* objectType, mscorlib::System::String* binderAssemblyString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckTypeForwardedFrom", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache", "System.Type", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cache;
	params[1] = (intptr_t)objectType;
	params[2] = (intptr_t)binderAssemblyString;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitNoMembers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitMemberInfo");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeFullName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAssemblyString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder(mscorlib::System::Runtime::Serialization::SerializationBinder* binder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeSerializationBinder", std::vector<std::string> { "System.Runtime.Serialization.SerializationBinder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)binder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType(mscorlib::System::Reflection::MemberInfo* objMember)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMemberType", std::vector<std::string> { "System.Reflection.MemberInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)objMember;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo(IL2CPP::Array<mscorlib::System::String*>& outMemberNames, IL2CPP::Array<mscorlib::System::Type*>& outMemberTypes, IL2CPP::Array<mscorlib::System::Object*>& outMemberData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMemberInfo", std::vector<std::string> { "System.String[]&", "System.Type[]&", "System.Object[]&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&outMemberNames;
	params[1] = (intptr_t)&outMemberTypes;
	params[2] = (intptr_t)&outMemberData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serObjectInfoInit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PutObjectInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serObjectInfoInit;
	params[1] = (intptr_t)objectInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
