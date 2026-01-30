#include "Rewired_Utils_Attributes_SerializationTypeAttribute.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Attributes", "SerializationTypeAttribute");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute::get_serializationType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_serializationType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType>(*(Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute::_ctor(Rewired_Core::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType serializationType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Utils.Attributes.SerializationTypeAttribute/SerializationType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&serializationType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
