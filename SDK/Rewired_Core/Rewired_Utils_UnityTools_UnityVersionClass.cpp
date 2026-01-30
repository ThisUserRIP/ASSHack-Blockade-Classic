#include "Rewired_Utils_UnityTools_UnityVersionClass.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Utils::UnityTools::GetIl2CppClass(), "UnityVersionClass");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::_ctor(mscorlib::System::String* versionString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)versionString;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::UIbbzQanVExADNhDbatxDvqpsDPR(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass_WiHIQkHnxugmNxvPQHdxZeebtvl A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UIbbzQanVExADNhDbatxDvqpsDPR");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
bool Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_LessThan(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_LessThan", std::vector<std::string> { "Rewired.Utils.UnityTools/UnityVersionClass", "Rewired.Utils.UnityTools/UnityVersionClass" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
bool Rewired_Core::Rewired::Utils::operator<(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b)
{
	return Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_LessThan(a, b);
}
bool Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_GreaterThan(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_GreaterThan", std::vector<std::string> { "Rewired.Utils.UnityTools/UnityVersionClass", "Rewired.Utils.UnityTools/UnityVersionClass" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
bool Rewired_Core::Rewired::Utils::operator>(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b)
{
	return Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_GreaterThan(a, b);
}
bool Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_GreaterThanOrEqual(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_GreaterThanOrEqual", std::vector<std::string> { "Rewired.Utils.UnityTools/UnityVersionClass", "Rewired.Utils.UnityTools/UnityVersionClass" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
bool Rewired_Core::Rewired::Utils::operator>=(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b)
{
	return Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_GreaterThanOrEqual(a, b);
}
bool Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_LessThanOrEqual(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_LessThanOrEqual", std::vector<std::string> { "Rewired.Utils.UnityTools/UnityVersionClass", "Rewired.Utils.UnityTools/UnityVersionClass" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
bool Rewired_Core::Rewired::Utils::operator<=(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b)
{
	return Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_LessThanOrEqual(a, b);
}
bool Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_Equality(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "Rewired.Utils.UnityTools/UnityVersionClass", "Rewired.Utils.UnityTools/UnityVersionClass" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
bool Rewired_Core::Rewired::Utils::operator==(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b)
{
	return Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_Equality(&a, &b);
}
bool Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_Inequality(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "Rewired.Utils.UnityTools/UnityVersionClass", "Rewired.Utils.UnityTools/UnityVersionClass" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
bool Rewired_Core::Rewired::Utils::operator!=(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass& b)
{
	return Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::op_Inequality(&a, &b);
}
int32_t Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::Comparison(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* a, Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Comparison", std::vector<std::string> { "Rewired.Utils.UnityTools/UnityVersionClass", "Rewired.Utils.UnityTools/UnityVersionClass" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::IsValidVersionString(mscorlib::System::String* versionString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidVersionString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)versionString;
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
int32_t Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass::lvgSjmqOfeJlpxUUWbNQGkTpfXu(Rewired_Core::Rewired::Utils::UnityTools_UnityVersionClass_WiHIQkHnxugmNxvPQHdxZeebtvl A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lvgSjmqOfeJlpxUUWbNQGkTpfXu");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
