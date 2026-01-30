#include "System_Xml_Schema_LocatedActiveAxis.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::LocatedActiveAxis::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "LocatedActiveAxis");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::LocatedActiveAxis::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t System_Xml::System::Xml::Schema::LocatedActiveAxis::get_Column()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Column");
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
void System_Xml::System::Xml::Schema::LocatedActiveAxis::_ctor(System_Xml::System::Xml::Schema::Asttree* astfield, System_Xml::System::Xml::Schema::KeySequence* ks, int32_t column)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.Asttree", "System.Xml.Schema.KeySequence", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)astfield;
	params[1] = (intptr_t)ks;
	params[2] = (intptr_t)&column;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::LocatedActiveAxis::Reactivate(System_Xml::System::Xml::Schema::KeySequence* ks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reactivate", std::vector<std::string> { "System.Xml.Schema.KeySequence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
