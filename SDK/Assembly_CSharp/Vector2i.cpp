#include "Vector2i.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Vector2i::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "Vector2i");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Vector2i::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Vector2i::_ctor(int32_t x, int32_t y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::Vector2i::GetHashCode()
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
bool Assembly_CSharp::Vector2i::Equals(mscorlib::System::Object* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
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
mscorlib::System::String* Assembly_CSharp::Vector2i::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Assembly_CSharp::Vector2i Assembly_CSharp::Vector2i::Min(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Min", std::vector<std::string> { "Vector2i", "Vector2i" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector2i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector2i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector2i>(*(Assembly_CSharp::Vector2i*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Vector2i Assembly_CSharp::Vector2i::Max(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Max", std::vector<std::string> { "Vector2i", "Vector2i" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector2i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector2i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector2i>(*(Assembly_CSharp::Vector2i*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Vector2i::op_Equality(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "Vector2i", "Vector2i" });
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
bool Assembly_CSharp::operator==(Assembly_CSharp::Vector2i& a, Assembly_CSharp::Vector2i& b)
{
	return Assembly_CSharp::Vector2i::op_Equality(a, b);
}
bool Assembly_CSharp::Vector2i::op_Inequality(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "Vector2i", "Vector2i" });
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
bool Assembly_CSharp::operator!=(Assembly_CSharp::Vector2i& a, Assembly_CSharp::Vector2i& b)
{
	return Assembly_CSharp::Vector2i::op_Inequality(a, b);
}
Assembly_CSharp::Vector2i Assembly_CSharp::Vector2i::op_Subtraction(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Vector2i", "Vector2i" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector2i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector2i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector2i>(*(Assembly_CSharp::Vector2i*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Vector2i Assembly_CSharp::operator-(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b)
{
	return Assembly_CSharp::Vector2i::op_Subtraction(a, b);
}
Assembly_CSharp::Vector2i Assembly_CSharp::Vector2i::op_Addition(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Vector2i", "Vector2i" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector2i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector2i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector2i>(*(Assembly_CSharp::Vector2i*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Vector2i Assembly_CSharp::operator+(Assembly_CSharp::Vector2i a, Assembly_CSharp::Vector2i b)
{
	return Assembly_CSharp::Vector2i::op_Addition(a, b);
}
void Assembly_CSharp::Vector2i::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
