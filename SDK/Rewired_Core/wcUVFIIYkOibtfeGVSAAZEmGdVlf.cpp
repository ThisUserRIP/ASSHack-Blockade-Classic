#include "wcUVFIIYkOibtfeGVSAAZEmGdVlf.h"

IL2CPP::Il2CppClass* Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "wcUVFIIYkOibtfeGVSAAZEmGdVlf");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ModifierKey Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::get_Item(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ModifierKey ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ModifierKey));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ModifierKey>(*(Rewired_Core::Rewired::ModifierKey*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::set_Item(int32_t index, Rewired_Core::Rewired::ModifierKey value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Item", std::vector<std::string> { "System.Int32", "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::_ctor(Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ModifierKey", "Rewired.ModifierKey", "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&modifierKey1;
	params[1] = (intptr_t)&modifierKey2;
	params[2] = (intptr_t)&modifierKey3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::YKZBMWjnxRgiKHTlqTUxBHLfkvNW()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YKZBMWjnxRgiKHTlqTUxBHLfkvNW");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::CmJRdfHnyQANRWlWvGABFFyVyBHO(Rewired_Core::Rewired::ModifierKeyFlags A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CmJRdfHnyQANRWlWvGABFFyVyBHO");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf));
		return ret;
	}
	return static_cast<Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf>(*(Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::Equals(Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "wcUVFIIYkOibtfeGVSAAZEmGdVlf" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
bool Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::op_Equality(Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf a, Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "wcUVFIIYkOibtfeGVSAAZEmGdVlf", "wcUVFIIYkOibtfeGVSAAZEmGdVlf" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
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
bool Rewired_Core::operator==(Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf& a, Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf& b)
{
	return Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::op_Equality(a, b);
}
bool Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::op_Inequality(Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf a, Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "wcUVFIIYkOibtfeGVSAAZEmGdVlf", "wcUVFIIYkOibtfeGVSAAZEmGdVlf" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
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
bool Rewired_Core::operator!=(Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf& a, Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf& b)
{
	return Rewired_Core::wcUVFIIYkOibtfeGVSAAZEmGdVlf::op_Inequality(a, b);
}
