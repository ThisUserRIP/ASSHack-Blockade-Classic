#include "Rewired_Utils_Classes_Data_SerializedObject_Field.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject::GetIl2CppClass(), "Field");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field::_ctor(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Object", "System.Type", "Rewired.Utils.Classes.Data.SerializedObject/FieldOptions" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)type;
	params[3] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
