#include "System_Runtime_Serialization_Formatters_Binary_ObjectMap.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "ObjectMap");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor(mscorlib::System::String* objectName, mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Type", "System.String[]", "System.Runtime.Serialization.Formatters.Binary.ObjectReader", "System.Int32", "System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)objectName;
	params[1] = (intptr_t)objectType;
	params[2] = (intptr_t)memberNames;
	params[3] = (intptr_t)objectReader;
	params[4] = (intptr_t)&objectId;
	params[5] = (intptr_t)assemblyInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor(mscorlib::System::String* objectName, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, IL2CPP::Array<mscorlib::System::Object*>* typeInformationA, IL2CPP::Array<int32_t>* memberAssemIds, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String[]", "System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[]", "System.Object[]", "System.Int32[]", "System.Runtime.Serialization.Formatters.Binary.ObjectReader", "System.Int32", "System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo", "System.Runtime.Serialization.Formatters.Binary.SizedArray" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)objectName;
	params[1] = (intptr_t)memberNames;
	params[2] = (intptr_t)binaryTypeEnumA;
	params[3] = (intptr_t)typeInformationA;
	params[4] = (intptr_t)memberAssemIds;
	params[5] = (intptr_t)objectReader;
	params[6] = (intptr_t)&objectId;
	params[7] = (intptr_t)assemblyInfo;
	params[8] = (intptr_t)assemIdToAssemblyTable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap::CreateObjectInfo(mscorlib::System::Runtime::Serialization::SerializationInfo& si, IL2CPP::Array<mscorlib::System::Object*>& memberData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateObjectInfo", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo&", "System.Object[]&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&si;
	params[1] = (intptr_t)&memberData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create(mscorlib::System::String* name, mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.String", "System.Type", "System.String[]", "System.Runtime.Serialization.Formatters.Binary.ObjectReader", "System.Int32", "System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)objectType;
	params[2] = (intptr_t)memberNames;
	params[3] = (intptr_t)objectReader;
	params[4] = (intptr_t)&objectId;
	params[5] = (intptr_t)assemblyInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap*)returnValue;
}
mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, IL2CPP::Array<mscorlib::System::Object*>* typeInformationA, IL2CPP::Array<int32_t>* memberAssemIds, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.String", "System.String[]", "System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[]", "System.Object[]", "System.Int32[]", "System.Runtime.Serialization.Formatters.Binary.ObjectReader", "System.Int32", "System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo", "System.Runtime.Serialization.Formatters.Binary.SizedArray" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)memberNames;
	params[2] = (intptr_t)binaryTypeEnumA;
	params[3] = (intptr_t)typeInformationA;
	params[4] = (intptr_t)memberAssemIds;
	params[5] = (intptr_t)objectReader;
	params[6] = (intptr_t)&objectId;
	params[7] = (intptr_t)assemblyInfo;
	params[8] = (intptr_t)assemIdToAssemblyTable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap*)returnValue;
}
