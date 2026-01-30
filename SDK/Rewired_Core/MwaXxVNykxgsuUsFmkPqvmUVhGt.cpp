#include "MwaXxVNykxgsuUsFmkPqvmUVhGt.h"

IL2CPP::Il2CppClass* Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "MwaXxVNykxgsuUsFmkPqvmUVhGt");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::_ctor(Rewired_Core::Rewired::KeyboardKeyCode keyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.KeyboardKeyCode", "Rewired.ModifierKey", "Rewired.ModifierKey", "Rewired.ModifierKey" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&keyCode;
	params[1] = (intptr_t)&modifierKey1;
	params[2] = (intptr_t)&modifierKey2;
	params[3] = (intptr_t)&modifierKey3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::YKZBMWjnxRgiKHTlqTUxBHLfkvNW()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YKZBMWjnxRgiKHTlqTUxBHLfkvNW");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::Equals(Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "MwaXxVNykxgsuUsFmkPqvmUVhGt" });
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
bool Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::Equals(mscorlib::System::Object* obj)
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
int32_t Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::GetHashCode()
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
bool Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::op_Equality(Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt a, Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "MwaXxVNykxgsuUsFmkPqvmUVhGt", "MwaXxVNykxgsuUsFmkPqvmUVhGt" });
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
bool Rewired_Core::operator==(Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt& a, Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt& b)
{
	return Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::op_Equality(a, b);
}
bool Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::op_Inequality(Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt a, Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "MwaXxVNykxgsuUsFmkPqvmUVhGt", "MwaXxVNykxgsuUsFmkPqvmUVhGt" });
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
bool Rewired_Core::operator!=(Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt& a, Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt& b)
{
	return Rewired_Core::MwaXxVNykxgsuUsFmkPqvmUVhGt::op_Inequality(a, b);
}
