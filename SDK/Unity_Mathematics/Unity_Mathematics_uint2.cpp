#include "Unity_Mathematics_uint2.h"

IL2CPP::Il2CppClass* Unity_Mathematics::Unity::Mathematics::uint2::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.Mathematics.dll", "Unity.Mathematics", "uint2");
	return il2cppclass;
}
mscorlib::System::Type* Unity_Mathematics::Unity::Mathematics::uint2::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_Mathematics::Unity::Mathematics::uint2::_ctor(uint32_t x, uint32_t y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_Mathematics::Unity::Mathematics::uint2 Unity_Mathematics::Unity::Mathematics::uint2::op_Multiply(Unity_Mathematics::Unity::Mathematics::uint2 lhs, Unity_Mathematics::Unity::Mathematics::uint2 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Unity.Mathematics.uint2", "Unity.Mathematics.uint2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::uint2 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::uint2));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::uint2>(*(Unity_Mathematics::Unity::Mathematics::uint2*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::uint2 Unity_Mathematics::Unity::Mathematics::operator*(Unity_Mathematics::Unity::Mathematics::uint2 lhs, Unity_Mathematics::Unity::Mathematics::uint2 rhs)
{
	return Unity_Mathematics::Unity::Mathematics::uint2::op_Multiply(lhs, rhs);
}
Unity_Mathematics::Unity::Mathematics::uint2 Unity_Mathematics::Unity::Mathematics::uint2::op_BitwiseAnd(Unity_Mathematics::Unity::Mathematics::uint2 lhs, uint32_t rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_BitwiseAnd", std::vector<std::string> { "Unity.Mathematics.uint2", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::uint2 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::uint2));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::uint2>(*(Unity_Mathematics::Unity::Mathematics::uint2*)il2cpp_object_unbox(returnValue));
}
bool Unity_Mathematics::Unity::Mathematics::uint2::Equals(Unity_Mathematics::Unity::Mathematics::uint2 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "Unity.Mathematics.uint2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rhs;
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
bool Unity_Mathematics::Unity::Mathematics::uint2::Equals(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
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
int32_t Unity_Mathematics::Unity::Mathematics::uint2::GetHashCode()
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
mscorlib::System::String* Unity_Mathematics::Unity::Mathematics::uint2::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_Mathematics::Unity::Mathematics::uint2::ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.String", "System.IFormatProvider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)formatProvider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
