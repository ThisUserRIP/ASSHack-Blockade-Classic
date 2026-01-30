#include "System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ObjectEnd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareForReuse");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ObjectManager* objectManager, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.ObjectManager", "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.IFormatterConverter", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)surrogateSelector;
	params[2] = (intptr_t)&context;
	params[3] = (intptr_t)objectManager;
	params[4] = (intptr_t)serObjectInfoInit;
	params[5] = (intptr_t)converter;
	params[6] = (intptr_t)&bSimpleAssembly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ObjectManager* objectManager, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.ObjectManager", "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.IFormatterConverter", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)surrogateSelector;
	params[2] = (intptr_t)&context;
	params[3] = (intptr_t)objectManager;
	params[4] = (intptr_t)serObjectInfoInit;
	params[5] = (intptr_t)converter;
	params[6] = (intptr_t)&bSimpleAssembly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create(mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ObjectManager* objectManager, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.Type", "System.String[]", "System.Type[]", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.ObjectManager", "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.IFormatterConverter", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)memberNames;
	params[2] = (intptr_t)memberTypes;
	params[3] = (intptr_t)surrogateSelector;
	params[4] = (intptr_t)&context;
	params[5] = (intptr_t)objectManager;
	params[6] = (intptr_t)serObjectInfoInit;
	params[7] = (intptr_t)converter;
	params[8] = (intptr_t)&bSimpleAssembly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init(mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ObjectManager* objectManager, mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, mscorlib::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Type", "System.String[]", "System.Type[]", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.ObjectManager", "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit", "System.Runtime.Serialization.IFormatterConverter", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)memberNames;
	params[2] = (intptr_t)memberTypes;
	params[3] = (intptr_t)surrogateSelector;
	params[4] = (intptr_t)&context;
	params[5] = (intptr_t)objectManager;
	params[6] = (intptr_t)serObjectInfoInit;
	params[7] = (intptr_t)converter;
	params[8] = (intptr_t)&bSimpleAssembly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor(mscorlib::System::Type* objectType, mscorlib::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitReadConstructor", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectType;
	params[1] = (intptr_t)surrogateSelector;
	params[2] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitSiRead");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitNoMembers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitMemberInfo");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Reflection::MemberInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMemberInfo", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MemberInfo*)returnValue;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetType", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::System::Runtime::Serialization::SerializationInfo& si, IL2CPP::Array<mscorlib::System::Object*>& memberData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddValue", std::vector<std::string> { "System.String", "System.Object", "System.Runtime.Serialization.SerializationInfo&", "System.Object[]&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)&si;
	params[3] = (intptr_t)&memberData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore(mscorlib::System::Runtime::Serialization::SerializationInfo& si, IL2CPP::Array<mscorlib::System::Object*>& memberData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitDataStore", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo&", "System.Object[]&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&si;
	params[1] = (intptr_t)&memberData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup(int64_t objectId, mscorlib::System::String* name, int64_t idRef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecordFixup", std::vector<std::string> { "System.Int64", "System.String", "System.Int64" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&objectId;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)&idRef;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* memberData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateObjectMembers", std::vector<std::string> { "System.Object", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)memberData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Position", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<mscorlib::System::Type*>* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes(IL2CPP::Array<mscorlib::System::String*>* inMemberNames, mscorlib::System::Type* objectType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMemberTypes", std::vector<std::string> { "System.String[]", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inMemberNames;
	params[1] = (intptr_t)objectType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType(mscorlib::System::Reflection::MemberInfo* objMember)
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
mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serObjectInfoInit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)returnValue;
}
