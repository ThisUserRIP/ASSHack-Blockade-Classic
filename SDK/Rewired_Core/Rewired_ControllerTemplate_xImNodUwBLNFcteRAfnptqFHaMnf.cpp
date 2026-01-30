#include "Rewired_ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerTemplate::GetIl2CppClass(), "xImNodUwBLNFcteRAfnptqFHaMnf");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, Rewired_Core::Rewired::ControllerTemplateElementType elementType, Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* target, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV>* sourceElements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.IControllerTemplate", "System.Int32", "System.String", "System.String", "System.String", "Rewired.ControllerTemplateElementType", "TRPKZqgoeeqwqIpWIsatQOCvNSY", "System.Collections.Generic.IList`1<Rewired.ControllerTemplate/SydusAsAzaGnyfyrOCOMvZjnHPV>" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)positiveName;
	params[4] = (intptr_t)negativeName;
	params[5] = (intptr_t)&elementType;
	params[6] = (intptr_t)target;
	params[7] = (intptr_t)sourceElements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::get_floatValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_floatValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::get_floatValuePrev()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_floatValuePrev");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::get_boolValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_boolValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::get_boolValuePrev()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_boolValuePrev");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateAxis_get_positiveDescriptiveName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxis.get_positiveDescriptiveName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateAxis_get_negativeDescriptiveName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxis.get_negativeDescriptiveName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
float Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateAxis_get_value()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxis.get_value");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateAxis_get_valuePrev()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxis.get_valuePrev");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::IControllerTemplateAxisSource* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateAxis_get_source()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxis.get_source");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxisSource*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateAxis_GetDescriptiveName(Rewired_Core::Rewired::AxisRange A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateAxis.GetDescriptiveName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateButton_get_value()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButton.get_value");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateButton_get_valuePrev()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButton.get_valuePrev");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateButton_get_justPressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButton.get_justPressed");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateButton_get_justReleased()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButton.get_justReleased");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateButton_get_justChangedState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButton.get_justChangedState");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
float Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateButton_get_pressure()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButton.get_pressure");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateButton_get_pressurePrev()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButton.get_pressurePrev");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::IControllerTemplateButtonSource* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::Rewired_IControllerTemplateButton_get_source()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplateButton.get_source");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateButtonSource*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateElementSource* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::get_source()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_source");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateElementSource*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::get_elementCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementCount");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::IControllerTemplateElement* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::GetElement(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElement");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateElement*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::GetElementTargets(Rewired_Core::Rewired::ControllerElementTarget A_1, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateElementTarget>& A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementTargets");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
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
Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::get_AsAxis()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AsAxis");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateAxis*)returnValue;
}
Rewired_Core::Rewired::IControllerTemplateButton* Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::get_AsButton()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AsButton");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateButton*)returnValue;
}
bool Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf::ZlHyNCxXrJwxUgmaxNTXKFqHibc(Rewired_Core::Rewired::ControllerElementTarget A_0, Rewired_Core::Rewired::IControllerElementTarget* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZlHyNCxXrJwxUgmaxNTXKFqHibc");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
