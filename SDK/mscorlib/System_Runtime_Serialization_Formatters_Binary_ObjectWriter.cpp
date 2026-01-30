#include "System_Runtime_Serialization_Formatters_Binary_ObjectWriter.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "ObjectWriter");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::_ctor(mscorlib::System::Runtime::Serialization::ISurrogateSelector* selector, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, mscorlib::System::Runtime::Serialization::SerializationBinder* binder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.ISurrogateSelector", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.Formatters.Binary.InternalFE", "System.Runtime.Serialization.SerializationBinder" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)selector;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)formatterEnums;
	params[3] = (intptr_t)binder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Serialize(mscorlib::System::Object* graph, IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* inHeaders, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter, bool fCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Serialize", std::vector<std::string> { "System.Object", "System.Runtime.Remoting.Messaging.Header[]", "System.Runtime.Serialization.Formatters.Binary.__BinaryWriter", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)graph;
	params[1] = (intptr_t)inHeaders;
	params[2] = (intptr_t)serWriter;
	params[3] = (intptr_t)&fCheck;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::SerializationObjectManager* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::get_ObjectManager()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ObjectManager");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::SerializationObjectManager*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectInfo;
	params[1] = (intptr_t)memberNameInfo;
	params[2] = (intptr_t)typeNameInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes, IL2CPP::Array<mscorlib::System::Object*>* memberData, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.String[]", "System.Type[]", "System.Object[]", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[]" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)objectInfo;
	params[1] = (intptr_t)memberNameInfo;
	params[2] = (intptr_t)typeNameInfo;
	params[3] = (intptr_t)memberNames;
	params[4] = (intptr_t)memberTypes;
	params[5] = (intptr_t)memberData;
	params[6] = (intptr_t)memberObjectInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMemberSetup(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::String* memberName, mscorlib::System::Type* memberType, mscorlib::System::Object* memberData, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMemberSetup", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.String", "System.Type", "System.Object", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)objectInfo;
	params[1] = (intptr_t)memberNameInfo;
	params[2] = (intptr_t)typeNameInfo;
	params[3] = (intptr_t)memberName;
	params[4] = (intptr_t)memberType;
	params[5] = (intptr_t)memberData;
	params[6] = (intptr_t)memberObjectInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMembers(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberTypeNameInfo, mscorlib::System::Object* memberData, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMembers", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Object", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)memberTypeNameInfo;
	params[2] = (intptr_t)memberData;
	params[3] = (intptr_t)objectInfo;
	params[4] = (intptr_t)typeNameInfo;
	params[5] = (intptr_t)memberObjectInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteArray", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectInfo;
	params[1] = (intptr_t)memberNameInfo;
	params[2] = (intptr_t)memberObjectInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArrayMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteArrayMember", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectInfo;
	params[1] = (intptr_t)arrayElemTypeNameInfo;
	params[2] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteRectangle(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, int32_t rank, IL2CPP::Array<int32_t>* maxA, mscorlib::System::Array* array, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemNameTypeInfo, IL2CPP::Array<int32_t>* lowerBoundA)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteRectangle", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Int32", "System.Int32[]", "System.Array", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int32[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)objectInfo;
	params[1] = (intptr_t)&rank;
	params[2] = (intptr_t)maxA;
	params[3] = (intptr_t)array;
	params[4] = (intptr_t)arrayElemNameTypeInfo;
	params[5] = (intptr_t)lowerBoundA;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNext(int64_t& objID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNext", std::vector<std::string> { "System.Int64&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&objID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
int64_t mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::InternalGetId(mscorlib::System::Object* obj, bool assignUniqueIdToValueType, mscorlib::System::Type* type, bool& isNew)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetId", std::vector<std::string> { "System.Object", "System.Boolean", "System.Type", "System.Boolean&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&assignUniqueIdToValueType;
	params[2] = (intptr_t)type;
	params[3] = (intptr_t)&isNew;
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
int64_t mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule(mscorlib::System::Object* obj, bool assignUniqueIdToValueType, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Schedule", std::vector<std::string> { "System.Object", "System.Boolean", "System.Type" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&assignUniqueIdToValueType;
	params[2] = (intptr_t)type;
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
int64_t mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule(mscorlib::System::Object* obj, bool assignUniqueIdToValueType, mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Schedule", std::vector<std::string> { "System.Object", "System.Boolean", "System.Type", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&assignUniqueIdToValueType;
	params[2] = (intptr_t)type;
	params[3] = (intptr_t)objectInfo;
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
bool mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteKnownValueClass(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteKnownValueClass", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)typeNameInfo;
	params[2] = (intptr_t)data;
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
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteObjectRef(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int64_t objectId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectRef", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)nameInfo;
	params[1] = (intptr_t)&objectId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteString(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* stringObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteString", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)typeNameInfo;
	params[2] = (intptr_t)stringObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckForNull(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckForNull", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)objectInfo;
	params[1] = (intptr_t)memberNameInfo;
	params[2] = (intptr_t)typeNameInfo;
	params[3] = (intptr_t)data;
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
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteSerializedStreamHeader(int64_t topId, int64_t headerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSerializedStreamHeader", std::vector<std::string> { "System.Int64", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&topId;
	params[1] = (intptr_t)&headerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TypeToNameInfo", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE", "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)objectInfo;
	params[2] = (intptr_t)&code;
	params[3] = (intptr_t)nameInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TypeToNameInfo", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TypeToNameInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)objectInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TypeToNameInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)objectInfo;
	params[1] = (intptr_t)nameInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo*)returnValue;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TypeToNameInfo", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)nameInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::MemberToNameInfo(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MemberToNameInfo", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::ToCode(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToCode", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(*(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*)il2cpp_object_unbox(returnValue));
}
int64_t mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetAssemblyId(mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAssemblyId", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)objectInfo;
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
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetType(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetType", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNameInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNameInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo*)returnValue;
}
bool mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckTypeFormat(mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle test, mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle want)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckTypeFormat", std::vector<std::string> { "System.Runtime.Serialization.Formatters.FormatterTypeStyle", "System.Runtime.Serialization.Formatters.FormatterTypeStyle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&test;
	params[1] = (intptr_t)&want;
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
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::PutNameInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PutNameInfo", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)nameInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
