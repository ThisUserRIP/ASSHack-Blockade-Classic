#include "Unity_Mathematics_float3.h"

IL2CPP::Il2CppClass* Unity_Mathematics::Unity::Mathematics::float3::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.Mathematics.dll", "Unity.Mathematics", "float3");
	return il2cppclass;
}
mscorlib::System::Type* Unity_Mathematics::Unity::Mathematics::float3::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_Mathematics::Unity::Mathematics::float3::_ctor(float x, float y, float z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_Mathematics::Unity::Mathematics::float3::_ctor(float v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::float3::op_Multiply(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::operator*(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	return Unity_Mathematics::Unity::Mathematics::float3::op_Multiply(lhs, rhs);
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::float3::op_Multiply(Unity_Mathematics::Unity::Mathematics::float3 lhs, float rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Unity.Mathematics.float3", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::operator*(Unity_Mathematics::Unity::Mathematics::float3 lhs, float rhs)
{
	return Unity_Mathematics::Unity::Mathematics::float3::op_Multiply(lhs, rhs);
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::float3::op_Multiply(float lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "System.Single", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::operator*(float lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	return Unity_Mathematics::Unity::Mathematics::float3::op_Multiply(lhs, rhs);
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::float3::op_Addition(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::operator+(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	return Unity_Mathematics::Unity::Mathematics::float3::op_Addition(lhs, rhs);
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::float3::op_Subtraction(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::operator-(Unity_Mathematics::Unity::Mathematics::float3 lhs, Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	return Unity_Mathematics::Unity::Mathematics::float3::op_Subtraction(lhs, rhs);
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::float3::get_yzx()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_yzx");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
bool Unity_Mathematics::Unity::Mathematics::float3::Equals(Unity_Mathematics::Unity::Mathematics::float3 rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "Unity.Mathematics.float3" });
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
bool Unity_Mathematics::Unity::Mathematics::float3::Equals(mscorlib::System::Object* o)
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
int32_t Unity_Mathematics::Unity::Mathematics::float3::GetHashCode()
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
mscorlib::System::String* Unity_Mathematics::Unity::Mathematics::float3::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_Mathematics::Unity::Mathematics::float3::ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider)
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
UnityEngine_CoreModule::UnityEngine::Vector3 Unity_Mathematics::Unity::Mathematics::float3::op_Implicit(Unity_Mathematics::Unity::Mathematics::float3 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::float3::op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector3 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
