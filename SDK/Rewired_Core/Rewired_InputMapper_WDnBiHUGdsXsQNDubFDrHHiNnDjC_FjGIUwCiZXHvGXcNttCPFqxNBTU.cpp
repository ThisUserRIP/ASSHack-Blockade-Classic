#include "Rewired_InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC::GetIl2CppClass(), "FjGIUwCiZXHvGXcNttCPFqxNBTU");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Player* Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_player()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_player");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Player*)returnValue;
}
int32_t Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_actionId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_actionId");
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
Rewired_Core::Rewired::InputMapper_Context* Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_mappingContext()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mappingContext");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputMapper_Context*)returnValue;
}
Rewired_Core::Rewired::ControllerType Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_controllerType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerType ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerType));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerType>(*(Rewired_Core::Rewired::ControllerType*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_controllerId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controllerId");
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
Rewired_Core::Rewired::ControllerPollingInfo Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_pollingInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pollingInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ControllerPollingInfo ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerPollingInfo));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ControllerPollingInfo>(*(Rewired_Core::Rewired::ControllerPollingInfo*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ModifierKeyFlags Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_modifierKeyFlags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_modifierKeyFlags");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ModifierKeyFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ModifierKeyFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ModifierKeyFlags>(*(Rewired_Core::Rewired::ModifierKeyFlags*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::AxisRange Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_axisRange()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_axisRange");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisRange ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisRange));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisRange>(*(Rewired_Core::Rewired::AxisRange*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::get_elementName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::pKLNoWCgVUqlRfCsOXaDmHUNbICB(Rewired_Core::Rewired::Player* A_1, Rewired_Core::Rewired::InputMapper_Context* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pKLNoWCgVUqlRfCsOXaDmHUNbICB");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::YKZBMWjnxRgiKHTlqTUxBHLfkvNW()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YKZBMWjnxRgiKHTlqTUxBHLfkvNW");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::klvAJWXhkZwGcxxTJQlXigJJVCF(Rewired_Core::Rewired::ControllerPollingInfo A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "klvAJWXhkZwGcxxTJQlXigJJVCF");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::klvAJWXhkZwGcxxTJQlXigJJVCF(Rewired_Core::Rewired::ControllerPollingInfo A_1, Rewired_Core::Rewired::ModifierKeyFlags A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "klvAJWXhkZwGcxxTJQlXigJJVCF");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ElementAssignment Rewired_Core::Rewired::InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU::klvAJWXhkZwGcxxTJQlXigJJVCF()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "klvAJWXhkZwGcxxTJQlXigJJVCF");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ElementAssignment ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignment));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ElementAssignment>(*(Rewired_Core::Rewired::ElementAssignment*)il2cpp_object_unbox(returnValue));
}
