#include "System_ComponentModel_Design_Serialization_RootDesignerSerializerAttribute.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::_ctor(mscorlib::System::String* serializerTypeName, mscorlib::System::String* baseSerializerTypeName, bool reloadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)serializerTypeName;
	params[1] = (intptr_t)baseSerializerTypeName;
	params[2] = (intptr_t)&reloadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeId");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
