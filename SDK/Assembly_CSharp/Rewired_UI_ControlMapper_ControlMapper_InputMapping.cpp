#include "Rewired_UI_ControlMapper_ControlMapper_InputMapping.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper::GetIl2CppClass(), "InputMapping");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_actionName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_actionName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::set_actionName(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_actionName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_fieldInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fieldInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::set_fieldInfo(Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fieldInfo", std::vector<std::string> { "Rewired.UI.ControlMapper.InputFieldInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerMap* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_map()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_map");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::set_map(Rewired_Core::Rewired::ControllerMap* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_map", std::vector<std::string> { "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ActionElementMap* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_aem()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_aem");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::set_aem(Rewired_Core::Rewired::ActionElementMap* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_aem", std::vector<std::string> { "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerType Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_controllerType()
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
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::set_controllerType(Rewired_Core::Rewired::ControllerType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_controllerType", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_controllerId()
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
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::set_controllerId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_controllerId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerPollingInfo Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_pollingInfo()
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
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::set_pollingInfo(Rewired_Core::Rewired::ControllerPollingInfo value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_pollingInfo", std::vector<std::string> { "Rewired.ControllerPollingInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ModifierKeyFlags Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_modifierKeyFlags()
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
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::set_modifierKeyFlags(Rewired_Core::Rewired::ModifierKeyFlags value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_modifierKeyFlags", std::vector<std::string> { "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisRange Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_axisRange()
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
mscorlib::System::String* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::get_elementName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::_ctor(mscorlib::System::String* actionName, Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* fieldInfo, Rewired_Core::Rewired::ControllerMap* map, Rewired_Core::Rewired::ActionElementMap* aem, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "Rewired.UI.ControlMapper.InputFieldInfo", "Rewired.ControllerMap", "Rewired.ActionElementMap", "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)fieldInfo;
	params[2] = (intptr_t)map;
	params[3] = (intptr_t)aem;
	params[4] = (intptr_t)&controllerType;
	params[5] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ElementAssignment Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::ToElementAssignment(Rewired_Core::Rewired::ControllerPollingInfo pollingInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToElementAssignment", std::vector<std::string> { "Rewired.ControllerPollingInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pollingInfo;
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
Rewired_Core::Rewired::ElementAssignment Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::ToElementAssignment(Rewired_Core::Rewired::ControllerPollingInfo pollingInfo, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToElementAssignment", std::vector<std::string> { "Rewired.ControllerPollingInfo", "Rewired.ModifierKeyFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pollingInfo;
	params[1] = (intptr_t)&modifierKeyFlags;
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
Rewired_Core::Rewired::ElementAssignment Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping::ToElementAssignment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToElementAssignment");
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
