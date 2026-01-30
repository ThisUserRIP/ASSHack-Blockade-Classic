#include "System_Runtime_Serialization_Formatters_Binary_ValueFixup.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::ValueFixup::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "ValueFixup");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ValueFixup::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(mscorlib::System::Array* arrayObj, IL2CPP::Array<int32_t>* indexMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Array", "System.Int32[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)arrayObj;
	params[1] = (intptr_t)indexMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(mscorlib::System::Object* memberObject, mscorlib::System::String* memberName, mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.String", "System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)memberObject;
	params[1] = (intptr_t)memberName;
	params[2] = (intptr_t)objectInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* record, mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Fixup", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.ParseRecord", "System.Runtime.Serialization.Formatters.Binary.ParseRecord" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)record;
	params[1] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
