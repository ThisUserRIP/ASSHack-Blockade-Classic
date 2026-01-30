#include "System_Xml_Schema_DatatypeImplementation_SchemaDatatypeMap.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::DatatypeImplementation::GetIl2CppClass(), "SchemaDatatypeMap");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap::_ctor(mscorlib::System::String* name, System_Xml::System::Xml::Schema::DatatypeImplementation* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Xml.Schema.DatatypeImplementation" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap::_ctor(mscorlib::System::String* name, System_Xml::System::Xml::Schema::DatatypeImplementation* type, int32_t parentIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Xml.Schema.DatatypeImplementation", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&parentIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::DatatypeImplementation* System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap::op_Explicit(System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap* sdm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sdm;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::DatatypeImplementation*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap::get_ParentIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParentIndex");
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
int32_t System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap::CompareTo(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareTo", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
